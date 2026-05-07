/*
 * MIT License
 *
 * Copyright (c) 2021 Electrosmith
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#ifndef __JSON2DAISY_POD_H__
#define __JSON2DAISY_POD_H__

#include "daisy_seed.h"
#include "dev/codec_ak4556.h"
#include "dev/oled_ssd130x.h"

#define ANALOG_COUNT 12

namespace json2daisy {



struct DaisyPod {

  /** Initializes the board according to the JSON board description
   *  \param boost boosts the clock speed from 400 to 480 MHz
   */
  void Init(bool boost=true)
  {
    som.Configure();
    som.Init(boost);

    // Switches
    waveshape.Init(som.GetPin(13), som.AudioCallbackRate(), daisy::Switch::TYPE_MOMENTARY, daisy::Switch::POLARITY_INVERTED);
    octave.Init(som.GetPin(12), som.AudioCallbackRate(), daisy::Switch::TYPE_MOMENTARY, daisy::Switch::POLARITY_INVERTED);
    waveshape_2.Init(som.GetPin(11), som.AudioCallbackRate(), daisy::Switch::TYPE_MOMENTARY, daisy::Switch::POLARITY_INVERTED);
    octave_2.Init(som.GetPin(9), som.AudioCallbackRate(), daisy::Switch::TYPE_MOMENTARY, daisy::Switch::POLARITY_INVERTED);

    // Single channel ADC initialization
    cfg[0].InitSingle(som.GetPin(28));
    cfg[1].InitSingle(som.GetPin(25));
    cfg[2].InitSingle(som.GetPin(24));
    cfg[3].InitSingle(som.GetPin(23));
    cfg[4].InitSingle(som.GetPin(22));
    cfg[5].InitSingle(som.GetPin(21));
    cfg[6].InitSingle(som.GetPin(20));
    cfg[7].InitSingle(som.GetPin(19));
    cfg[8].InitSingle(som.GetPin(18));
    cfg[9].InitSingle(som.GetPin(17));
    cfg[10].InitSingle(som.GetPin(16));
    size_t pot_mux_index = 11;
    cfg[pot_mux_index].InitMux(som.GetPin(15), 8, som.GetPin(0), som.GetPin(1), som.GetPin(2));
    som.adc.Init(cfg, ANALOG_COUNT);

    // AnalogControl objects
    volume.Init(som.adc.GetPtr(0), som.AudioCallbackRate(), false, false);
    lfo_amount.Init(som.adc.GetPtr(1), som.AudioCallbackRate(), false, false);
    time.Init(som.adc.GetPtr(2), som.AudioCallbackRate(), false, false);
    pitch_env.Init(som.adc.GetPtr(3), som.AudioCallbackRate(), false, false);
    detune.Init(som.adc.GetPtr(4), som.AudioCallbackRate(), false, false);
    volume_2.Init(som.adc.GetPtr(5), som.AudioCallbackRate(), false, false);
    lfo_amount_2.Init(som.adc.GetPtr(6), som.AudioCallbackRate(), false, false);
    time_2.Init(som.adc.GetPtr(7), som.AudioCallbackRate(), false, false);
    pitch_env_2.Init(som.adc.GetPtr(8), som.AudioCallbackRate(), false, false);
    detune_2.Init(som.adc.GetPtr(9), som.AudioCallbackRate(), false, false);
    lfo_freq.Init(som.adc.GetPtr(10), som.AudioCallbackRate(), false, false);

    // Multiplexed AnlogControl objects
    attack.Init(som.adc.GetMuxPtr(pot_mux_index, 0), som.AudioCallbackRate(), false, false);
    release.Init(som.adc.GetMuxPtr(pot_mux_index, 3), som.AudioCallbackRate(), false, false);
    noise_volume.Init(som.adc.GetMuxPtr(pot_mux_index, 1), som.AudioCallbackRate(), false, false);
    noise_color.Init(som.adc.GetMuxPtr(pot_mux_index, 2), som.AudioCallbackRate(), false, false);
    filter_cutoff.Init(som.adc.GetMuxPtr(pot_mux_index, 4), som.AudioCallbackRate(), false, false);
    filter_resonance.Init(som.adc.GetMuxPtr(pot_mux_index, 5), som.AudioCallbackRate(), false, false);
    filter_env_amount.Init(som.adc.GetMuxPtr(pot_mux_index, 6), som.AudioCallbackRate(), false, false);
    filter_lfo_amount.Init(som.adc.GetMuxPtr(pot_mux_index, 7), som.AudioCallbackRate(), false, false);

    // Display

        daisy::OledDisplay<daisy::SSD130x4WireSpi128x64Driver>::Config display_config;
        display_config.driver_config.transport_config.Defaults();

        display.Init(display_config);
          display.Fill(0);
          display.Update();


    som.adc.Start();
  }

  /** Handles all the controls processing that needs to occur at the block rate
   *
   */
  void ProcessAllControls()
  {
    volume.Process();
    lfo_amount.Process();
    time.Process();
    pitch_env.Process();
    detune.Process();
    volume_2.Process();
    lfo_amount_2.Process();
    time_2.Process();
    pitch_env_2.Process();
    detune_2.Process();
    lfo_freq.Process();
    attack.Process();
    release.Process();
    noise_volume.Process();
    noise_color.Process();
    filter_cutoff.Process();
    filter_resonance.Process();
    filter_env_amount.Process();
    filter_lfo_amount.Process();
    waveshape.Debounce();
    octave.Debounce();
    waveshape_2.Debounce();
    octave_2.Debounce();
  }

  /** Handles all the maintenance processing. This should be run last within the audio callback.
   *
   */
  void PostProcess()
  {

  }

  /** Handles processing that shouldn't occur in the audio block, such as blocking transfers
   *
   */
  void LoopProcess()
  {

  }

  /** Sets the audio sample rate
   *  \param sample_rate the new sample rate in Hz
   */
  void SetAudioSampleRate(size_t sample_rate)
  {
    daisy::SaiHandle::Config::SampleRate enum_rate;
    if (sample_rate >= 96000)
      enum_rate = daisy::SaiHandle::Config::SampleRate::SAI_96KHZ;
    else if (sample_rate >= 48000)
      enum_rate = daisy::SaiHandle::Config::SampleRate::SAI_48KHZ;
    else if (sample_rate >= 32000)
      enum_rate = daisy::SaiHandle::Config::SampleRate::SAI_32KHZ;
    else if (sample_rate >= 16000)
      enum_rate = daisy::SaiHandle::Config::SampleRate::SAI_16KHZ;
    else
      enum_rate = daisy::SaiHandle::Config::SampleRate::SAI_8KHZ;
    som.SetAudioSampleRate(enum_rate);
    volume.SetSampleRate(som.AudioCallbackRate());
    lfo_amount.SetSampleRate(som.AudioCallbackRate());
    time.SetSampleRate(som.AudioCallbackRate());
    pitch_env.SetSampleRate(som.AudioCallbackRate());
    detune.SetSampleRate(som.AudioCallbackRate());
    volume_2.SetSampleRate(som.AudioCallbackRate());
    lfo_amount_2.SetSampleRate(som.AudioCallbackRate());
    time_2.SetSampleRate(som.AudioCallbackRate());
    pitch_env_2.SetSampleRate(som.AudioCallbackRate());
    detune_2.SetSampleRate(som.AudioCallbackRate());
    lfo_freq.SetSampleRate(som.AudioCallbackRate());
    attack.SetSampleRate(som.AudioCallbackRate());
    release.SetSampleRate(som.AudioCallbackRate());
    noise_volume.SetSampleRate(som.AudioCallbackRate());
    noise_color.SetSampleRate(som.AudioCallbackRate());
    filter_cutoff.SetSampleRate(som.AudioCallbackRate());
    filter_resonance.SetSampleRate(som.AudioCallbackRate());
    filter_env_amount.SetSampleRate(som.AudioCallbackRate());
    filter_lfo_amount.SetSampleRate(som.AudioCallbackRate());
    waveshape.SetUpdateRate(som.AudioCallbackRate());
    octave.SetUpdateRate(som.AudioCallbackRate());
    waveshape_2.SetUpdateRate(som.AudioCallbackRate());
    octave_2.SetUpdateRate(som.AudioCallbackRate());
  }

  /** Sets the audio block size
   *  \param block_size the new block size in words
   */
  inline void SetAudioBlockSize(size_t block_size)
  {
    som.SetAudioBlockSize(block_size);
  }

  /** Starts up the audio callback process with the given callback
   *
   */
  inline void StartAudio(daisy::AudioHandle::AudioCallback cb)
  {
    som.StartAudio(cb);
  }

  /** This is the board's "System On Module" */
  daisy::DaisySeed som;
  daisy::AdcChannelConfig cfg[ANALOG_COUNT];

  // I/O Components
  daisy::AnalogControl volume;
  daisy::AnalogControl lfo_amount;
  daisy::AnalogControl time;
  daisy::AnalogControl pitch_env;
  daisy::AnalogControl detune;
  daisy::AnalogControl volume_2;
  daisy::AnalogControl lfo_amount_2;
  daisy::AnalogControl time_2;
  daisy::AnalogControl pitch_env_2;
  daisy::AnalogControl detune_2;
  daisy::AnalogControl lfo_freq;
  daisy::AnalogControl attack;
  daisy::AnalogControl release;
  daisy::AnalogControl noise_volume;
  daisy::AnalogControl noise_color;
  daisy::AnalogControl filter_cutoff;
  daisy::AnalogControl filter_resonance;
  daisy::AnalogControl filter_env_amount;
  daisy::AnalogControl filter_lfo_amount;
  daisy::Switch waveshape;
  daisy::Switch octave;
  daisy::Switch waveshape_2;
  daisy::Switch octave_2;
  daisy::OledDisplay<daisy::SSD130x4WireSpi128x64Driver> display;
  daisy::MidiUartHandler midi;

};

} // namspace json2daisy

#endif // __JSON2DAISY_POD_H__
