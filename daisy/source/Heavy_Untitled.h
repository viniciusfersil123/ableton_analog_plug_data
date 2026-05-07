/**
 * Copyright (c) 2026 Enzien Audio, Ltd.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the phrase "powered by heavy",
 *    the heavy logo, and a hyperlink to https://enzienaudio.com, all in a visible
 *    form.
 * 
 *   2.1 If the Application is distributed in a store system (for example,
 *       the Apple "App Store" or "Google Play"), the phrase "powered by heavy"
 *       shall be included in the app description or the copyright text as well as
 *       the in the app itself. The heavy logo will shall be visible in the app
 *       itself as well.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#ifndef _HEAVY_UNTITLED_H_
#define _HEAVY_UNTITLED_H_

#include "HvHeavy.h"

#ifdef __cplusplus
extern "C" {
#endif

#if HV_APPLE
#pragma mark - Heavy Context
#endif

typedef enum {
  HV_UNTITLED_PARAM_IN_ATTACK = 0xEB9639BF, // attack
  HV_UNTITLED_PARAM_IN_DETUNE = 0x3861AA6D, // detune
  HV_UNTITLED_PARAM_IN_DETUNE_2 = 0xF2EC2814, // detune_2
  HV_UNTITLED_PARAM_IN_FILTER_CUTOFF = 0xDFAE3974, // filter_cutoff
  HV_UNTITLED_PARAM_IN_FILTER_ENV_AMOUNT = 0xFAA1715, // filter_env_amount
  HV_UNTITLED_PARAM_IN_FILTER_LFO_AMOUNT = 0x1C63671E, // filter_lfo_amount
  HV_UNTITLED_PARAM_IN_FILTER_RESONANCE = 0x345EE828, // filter_resonance
  HV_UNTITLED_PARAM_IN_LFO_AMOUNT = 0x1205EA9B, // lfo_amount
  HV_UNTITLED_PARAM_IN_LFO_AMOUNT_2 = 0xDB26136B, // lfo_amount_2
  HV_UNTITLED_PARAM_IN_LFO_FREQ = 0x67847FF9, // lfo_freq
  HV_UNTITLED_PARAM_IN_NOISE_COLOR = 0xA40A0F87, // noise_color
  HV_UNTITLED_PARAM_IN_NOISE_VOLUME = 0x2AAFD1F4, // noise_volume
  HV_UNTITLED_PARAM_IN_OCTAVE = 0xBE95A6F8, // octave
  HV_UNTITLED_PARAM_IN_OCTAVE_2 = 0x3CEAEB41, // octave_2
  HV_UNTITLED_PARAM_IN_PITCH_ENV = 0xEE6E7B8, // pitch_env
  HV_UNTITLED_PARAM_IN_PITCH_ENV_2 = 0xAC1A91AF, // pitch_env_2
  HV_UNTITLED_PARAM_IN_RELEASE = 0x34A8D635, // release
  HV_UNTITLED_PARAM_IN_TIME = 0x8E55AA5F, // time
  HV_UNTITLED_PARAM_IN_TIME_2 = 0x7F681128, // time_2
  HV_UNTITLED_PARAM_IN_VOLUME = 0xB1642755, // volume
  HV_UNTITLED_PARAM_IN_VOLUME_2 = 0x779CA79A, // volume_2
  HV_UNTITLED_PARAM_IN_WAVESHAPE = 0x6D413ECE, // waveshape
  HV_UNTITLED_PARAM_IN_WAVESHAPE_2 = 0x4A169D8C, // waveshape_2
} Hv_Untitled_ParameterIn;


/**
 * Creates a new patch instance.
 * Sample rate should be positive and in Hertz, e.g. 44100.0.
 */
HeavyContextInterface *hv_Untitled_new(double sampleRate);

/**
 * Creates a new patch instance.
 * @param sampleRate  Sample rate should be positive (> 0) and in Hertz, e.g. 48000.0.
 * @param poolKb  Pool size is in kilobytes, and determines the maximum amount of memory
 *   allocated to messages at any time. By default this is 10 KB.
 * @param inQueueKb  The size of the input message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages between calls to
 *   process(). Default is 2 KB.
 * @param outQueueKb  The size of the output message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages to the default sendHook.
 *   See getNextSentMessage() for info on accessing these messages. Default is 0 KB.
 */
HeavyContextInterface *hv_Untitled_new_with_options(double sampleRate, int poolKb, int inQueueKb, int outQueueKb);

/**
 * Free the patch instance.
 */
void hv_Untitled_free(HeavyContextInterface *instance);


#ifdef __cplusplus
} // extern "C"
#endif

#endif // _HEAVY_UNTITLED_H_
