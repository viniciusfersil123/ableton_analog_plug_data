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

#include "Heavy_Untitled.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_Untitled *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_Untitled_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Untitled));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Untitled(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_Untitled_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Untitled));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Untitled(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_Untitled_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_Untitled();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_Untitled::Heavy_Untitled(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sLine_init(&sLine_PmsMC0KJ);
  numBytes += sLine_init(&sLine_IhKsix6N);
  numBytes += sPhasor_init(&sPhasor_hy8E3JB4, sampleRate);
  numBytes += sPhasor_init(&sPhasor_Ns4HBRu1, sampleRate);
  numBytes += sPhasor_init(&sPhasor_S0At7UpW, sampleRate);
  numBytes += sDel1_init(&sDel1_E32FodEy);
  numBytes += sSamphold_init(&sSamphold_d9eODZTG);
  numBytes += sLine_init(&sLine_zMfDgr78);
  numBytes += sLine_init(&sLine_CQHcKh0V);
  numBytes += sLine_init(&sLine_KDdJwPvd);
  numBytes += sPhasor_init(&sPhasor_vl7MxQdN, sampleRate);
  numBytes += sPhasor_init(&sPhasor_4PniFbu5, sampleRate);
  numBytes += sPhasor_init(&sPhasor_mqJywyjX, sampleRate);
  numBytes += sDel1_init(&sDel1_o6IR07hH);
  numBytes += sSamphold_init(&sSamphold_VpuAT0W8);
  numBytes += sLine_init(&sLine_0dMvHCx0);
  numBytes += sPhasor_k_init(&sPhasor_FQXSm0Or, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_iuhJ2gXy);
  numBytes += sLine_init(&sLine_jIumIt7I);
  numBytes += sPhasor_init(&sPhasor_a3g9vIDa, sampleRate);
  numBytes += sPhasor_init(&sPhasor_SO6OjBwZ, sampleRate);
  numBytes += sPhasor_init(&sPhasor_n4vLqwWZ, sampleRate);
  numBytes += sDel1_init(&sDel1_ihYHU1hi);
  numBytes += sSamphold_init(&sSamphold_7qTuRkxj);
  numBytes += sLine_init(&sLine_86qnBhlM);
  numBytes += sLine_init(&sLine_gclSMKpV);
  numBytes += sLine_init(&sLine_WRBx10c9);
  numBytes += sPhasor_init(&sPhasor_znhrGTik, sampleRate);
  numBytes += sPhasor_init(&sPhasor_HbJ4EF79, sampleRate);
  numBytes += sPhasor_init(&sPhasor_zJdjbxbI, sampleRate);
  numBytes += sDel1_init(&sDel1_GuHJfesE);
  numBytes += sSamphold_init(&sSamphold_iKjfsrQ0);
  numBytes += sLine_init(&sLine_nTdq4Oq2);
  numBytes += sLine_init(&sLine_BBr0IaoC);
  numBytes += sLine_init(&sLine_JoGv6H0n);
  numBytes += sPhasor_init(&sPhasor_1YV42Hwe, sampleRate);
  numBytes += sPhasor_init(&sPhasor_NA7Z9Jwk, sampleRate);
  numBytes += sPhasor_init(&sPhasor_hkOm9mJF, sampleRate);
  numBytes += sDel1_init(&sDel1_uFUDhzis);
  numBytes += sSamphold_init(&sSamphold_NXR2hJLC);
  numBytes += sLine_init(&sLine_M6Ok85Bb);
  numBytes += sLine_init(&sLine_NkRCyxr6);
  numBytes += sLine_init(&sLine_5KTMThrA);
  numBytes += sPhasor_init(&sPhasor_LJLFI9kX, sampleRate);
  numBytes += sPhasor_init(&sPhasor_kxw2XcbU, sampleRate);
  numBytes += sPhasor_init(&sPhasor_dCOPJAmP, sampleRate);
  numBytes += sDel1_init(&sDel1_ysw0z0db);
  numBytes += sSamphold_init(&sSamphold_hvFHaMS5);
  numBytes += sLine_init(&sLine_fHuNcuMm);
  numBytes += sLine_init(&sLine_bA4KDyH0);
  numBytes += sLine_init(&sLine_ciQ8Ruek);
  numBytes += sPhasor_init(&sPhasor_JOhz74dL, sampleRate);
  numBytes += sPhasor_init(&sPhasor_kcflisLZ, sampleRate);
  numBytes += sPhasor_init(&sPhasor_1g4837Gq, sampleRate);
  numBytes += sDel1_init(&sDel1_AtR4pFpm);
  numBytes += sSamphold_init(&sSamphold_kBW54JS3);
  numBytes += sLine_init(&sLine_ePKyky3u);
  numBytes += sLine_init(&sLine_PiXOJm8p);
  numBytes += sLine_init(&sLine_oNNXdS7Z);
  numBytes += sPhasor_init(&sPhasor_YGfGc66r, sampleRate);
  numBytes += sPhasor_init(&sPhasor_JHeWlFl8, sampleRate);
  numBytes += sPhasor_init(&sPhasor_RZTyeUdl, sampleRate);
  numBytes += sDel1_init(&sDel1_W2fl11pO);
  numBytes += sSamphold_init(&sSamphold_d9LdyR6A);
  numBytes += sLine_init(&sLine_8qsnd4FU);
  numBytes += sLine_init(&sLine_7BccC2Vo);
  numBytes += sLine_init(&sLine_k8GDXGsb);
  numBytes += sPhasor_init(&sPhasor_k12gqiF3, sampleRate);
  numBytes += sPhasor_init(&sPhasor_SfTGvu53, sampleRate);
  numBytes += sPhasor_init(&sPhasor_nGEcvVyT, sampleRate);
  numBytes += sDel1_init(&sDel1_GQ50w2y7);
  numBytes += sSamphold_init(&sSamphold_nQkBzu6i);
  numBytes += sLine_init(&sLine_SqW1jNmV);
  numBytes += sLine_init(&sLine_PHX6rp4L);
  numBytes += sLine_init(&sLine_5fm4ekRq);
  numBytes += sPhasor_init(&sPhasor_eEEctYGx, sampleRate);
  numBytes += sPhasor_init(&sPhasor_0ax0X5RY, sampleRate);
  numBytes += sPhasor_init(&sPhasor_EBD8dmnD, sampleRate);
  numBytes += sDel1_init(&sDel1_PrcKckkt);
  numBytes += sSamphold_init(&sSamphold_I32rm6Wk);
  numBytes += sLine_init(&sLine_RoBMwHPq);
  numBytes += sLine_init(&sLine_vWPP8Yev);
  numBytes += sLine_init(&sLine_2IGqJSE7);
  numBytes += sPhasor_init(&sPhasor_uZjgvMAl, sampleRate);
  numBytes += sPhasor_init(&sPhasor_cuI97pZh, sampleRate);
  numBytes += sPhasor_init(&sPhasor_AgQiE6IX, sampleRate);
  numBytes += sDel1_init(&sDel1_xDADu3PU);
  numBytes += sSamphold_init(&sSamphold_Fd55JPXn);
  numBytes += sLine_init(&sLine_6nmAdPaQ);
  numBytes += sLine_init(&sLine_XPhxDAET);
  numBytes += sLine_init(&sLine_rLjFIdMF);
  numBytes += sPhasor_init(&sPhasor_2SOBhUd2, sampleRate);
  numBytes += sPhasor_init(&sPhasor_TCW74vzr, sampleRate);
  numBytes += sPhasor_init(&sPhasor_nEs43q1m, sampleRate);
  numBytes += sDel1_init(&sDel1_vX6UqIyp);
  numBytes += sSamphold_init(&sSamphold_sHtu9ojK);
  numBytes += sLine_init(&sLine_4xHmH7xn);
  numBytes += sLine_init(&sLine_5miPnQAo);
  numBytes += sLine_init(&sLine_6FSUDIKj);
  numBytes += sPhasor_init(&sPhasor_nj27eovR, sampleRate);
  numBytes += sPhasor_init(&sPhasor_K22dRWdo, sampleRate);
  numBytes += sPhasor_init(&sPhasor_BjN5iQz7, sampleRate);
  numBytes += sDel1_init(&sDel1_0qaUYRt9);
  numBytes += sSamphold_init(&sSamphold_87YV9kAB);
  numBytes += sLine_init(&sLine_zz0cGhMV);
  numBytes += sLine_init(&sLine_KuZVDVhP);
  numBytes += sLine_init(&sLine_VuVrVSNf);
  numBytes += sPhasor_init(&sPhasor_xADsE52v, sampleRate);
  numBytes += sPhasor_init(&sPhasor_1sbZ0QLE, sampleRate);
  numBytes += sPhasor_init(&sPhasor_AYVzMBCC, sampleRate);
  numBytes += sDel1_init(&sDel1_uxbs0m77);
  numBytes += sSamphold_init(&sSamphold_H1WeXFKI);
  numBytes += sLine_init(&sLine_1nkeMPDn);
  numBytes += sLine_init(&sLine_arP1mCFQ);
  numBytes += sLine_init(&sLine_CWGk2C76);
  numBytes += sPhasor_init(&sPhasor_8urdDxEw, sampleRate);
  numBytes += sPhasor_init(&sPhasor_ix4rFUXG, sampleRate);
  numBytes += sPhasor_init(&sPhasor_wejTzCiJ, sampleRate);
  numBytes += sDel1_init(&sDel1_Mbbhl3Yh);
  numBytes += sSamphold_init(&sSamphold_cKSjwRPC);
  numBytes += sLine_init(&sLine_rilzf60Q);
  numBytes += sLine_init(&sLine_uCRGSfyr);
  numBytes += sLine_init(&sLine_wTFPCzEZ);
  numBytes += sPhasor_init(&sPhasor_XkXbvPb3, sampleRate);
  numBytes += sPhasor_init(&sPhasor_knx7C54m, sampleRate);
  numBytes += sPhasor_init(&sPhasor_G8Sw6KeB, sampleRate);
  numBytes += sDel1_init(&sDel1_WY5SC1dY);
  numBytes += sSamphold_init(&sSamphold_1wWZUC4l);
  numBytes += sLine_init(&sLine_lUH6n4LQ);
  numBytes += cVar_init_f(&cVar_8hwBDaR1, 0.0f);
  numBytes += cVar_init_f(&cVar_aRfpLERf, 0.0f);
  numBytes += cVar_init_f(&cVar_E0be3iPi, 0.0f);
  numBytes += cVar_init_f(&cVar_cm1Gzd8C, 0.0f);
  numBytes += cVar_init_f(&cVar_Fv5xgjmL, 0.0f);
  numBytes += cVar_init_f(&cVar_tVeQJVEI, 0.0f);
  numBytes += cVar_init_f(&cVar_WDuRPF4n, 0.0f);
  numBytes += cVar_init_f(&cVar_X2jbbUPs, 0.0f);
  numBytes += cVar_init_f(&cVar_XffgEhuw, 0.0f);
  numBytes += cVar_init_f(&cVar_iIDA6JTg, 0.0f);
  numBytes += cVar_init_f(&cVar_3pOwWtlG, 0.0f);
  numBytes += cVar_init_f(&cVar_SQS2tnpp, 0.0f);
  numBytes += cVar_init_f(&cVar_jfMleBYg, 0.0f);
  numBytes += cPack_init(&cPack_ms4tJCZS, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_WHvdGrCf, 1, 1);
  numBytes += cSlice_init(&cSlice_8W7UeSR5, 0, 1);
  numBytes += cSlice_init(&cSlice_Sq2BGlIk, 1, -1);
  numBytes += cSlice_init(&cSlice_69hLcVjm, 1, -1);
  numBytes += cVar_init_f(&cVar_q6gSBU4A, 1.0f);
  numBytes += cIf_init(&cIf_82ENoIDz, false);
  numBytes += cVar_init_f(&cVar_EjHtBhDq, 1.0f);
  numBytes += cPack_init(&cPack_nYfhRJ6u, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_nWDER41e, 1, 1);
  numBytes += cSlice_init(&cSlice_RR8pHges, 0, 1);
  numBytes += cVar_init_f(&cVar_FDb6S0CW, 0.0f);
  numBytes += cIf_init(&cIf_h79F0ZZS, false);
  numBytes += cIf_init(&cIf_Mk5Ru78g, false);
  numBytes += cIf_init(&cIf_7BswA0Tx, false);
  numBytes += cIf_init(&cIf_Wncw5Jpr, false);
  numBytes += cIf_init(&cIf_p4sd4Vsr, false);
  numBytes += cBinop_init(&cBinop_vtO2LepK, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_8dEXQcIu, "floatatom");
  numBytes += cSlice_init(&cSlice_tGCzqbu7, 1, 1);
  numBytes += cSlice_init(&cSlice_FfMAvGsp, 0, 1);
  numBytes += cVar_init_f(&cVar_cP2kwGt7, 1.0f);
  numBytes += cVar_init_f(&cVar_eeeto0k9, 1.0f);
  numBytes += cVar_init_f(&cVar_qhKojoBS, 1.0f);
  numBytes += cVar_init_f(&cVar_jxHtxwPY, 0.0f);
  numBytes += cVar_init_s(&cVar_l0XDKgsu, "floatatom");
  numBytes += sVarf_init(&sVarf_oP6nUbVn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7XU05AA1, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_yUN3J5kQ, 1, -1);
  numBytes += cSlice_init(&cSlice_Tf1DKFiA, 1, -1);
  numBytes += cSlice_init(&cSlice_3IlcEzVP, 1, -1);
  numBytes += cSlice_init(&cSlice_SvoRTjC3, 1, -1);
  numBytes += cSlice_init(&cSlice_VKAPmOuW, 1, -1);
  numBytes += cSlice_init(&cSlice_YapBWgdw, 1, -1);
  numBytes += cSlice_init(&cSlice_uLCjTP1p, 1, -1);
  numBytes += cSlice_init(&cSlice_BTgJikKM, 1, -1);
  numBytes += cSlice_init(&cSlice_44YrrFox, 1, -1);
  numBytes += cSlice_init(&cSlice_cpJH9mkO, 1, -1);
  numBytes += cPack_init(&cPack_41ReFKJm, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_2MXVSYb9, 1, -1);
  numBytes += cPack_init(&cPack_4Zx38EEy, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_H3xH3lpg, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zJcyMWIN, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_JqZ1bf9e, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_0n9KqC3D, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Bk5IbEvT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_HYGqqZ7z, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TIGnm9Jp, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QdMKHzBZ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_fkSbbs5j, 1.0f);
  numBytes += cIf_init(&cIf_9PLUYGIV, false);
  numBytes += cVar_init_f(&cVar_Y8Dvxb8n, 1.0f);
  numBytes += cPack_init(&cPack_Wy5U85Ed, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_UcVQFB8Y, 1, 1);
  numBytes += cSlice_init(&cSlice_6fPXXwVY, 0, 1);
  numBytes += cVar_init_f(&cVar_4tCznaMI, 0.0f);
  numBytes += cIf_init(&cIf_pJbA4F6N, false);
  numBytes += cIf_init(&cIf_GR1UZES4, false);
  numBytes += cIf_init(&cIf_8FEu4y2n, false);
  numBytes += cIf_init(&cIf_c16kICSU, false);
  numBytes += cIf_init(&cIf_CIENsR06, false);
  numBytes += cBinop_init(&cBinop_1ClOmHEa, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_li7TtFDm, "floatatom");
  numBytes += cSlice_init(&cSlice_bg7rYkc9, 1, 1);
  numBytes += cSlice_init(&cSlice_bdAWN33d, 0, 1);
  numBytes += cVar_init_f(&cVar_jvcLtutK, 1.0f);
  numBytes += cVar_init_f(&cVar_JLPODnPZ, 1.0f);
  numBytes += cVar_init_f(&cVar_yFApSJ70, 1.0f);
  numBytes += cVar_init_f(&cVar_XL3IBlWo, 0.0f);
  numBytes += cVar_init_s(&cVar_3xIb0ZKL, "floatatom");
  numBytes += sVarf_init(&sVarf_046xjfal, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MoEy4uIf, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_oWUN5oMz, 1, -1);
  numBytes += cSlice_init(&cSlice_TdTXBmKB, 1, -1);
  numBytes += cSlice_init(&cSlice_FSgk0ZF1, 1, -1);
  numBytes += cSlice_init(&cSlice_HlR60L1x, 1, -1);
  numBytes += cSlice_init(&cSlice_xsbaY9Yh, 1, -1);
  numBytes += cSlice_init(&cSlice_h8o5QYql, 1, -1);
  numBytes += cSlice_init(&cSlice_svT126hM, 1, -1);
  numBytes += cSlice_init(&cSlice_ktnu7xOc, 1, -1);
  numBytes += cSlice_init(&cSlice_WfKcjqL8, 1, -1);
  numBytes += cSlice_init(&cSlice_2O9rTlYn, 1, -1);
  numBytes += cPack_init(&cPack_6PQ5EIfR, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_JWvETIyj, 1, -1);
  numBytes += cPack_init(&cPack_qHnpBnyQ, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_F32B556E, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8xgRoS7N, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_8ToBVNEF, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_3yVxl9Ys, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3SJhthoj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_PjsLP8fz, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yXfqWA6Y, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_mNTa5oYO, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_dyJvC86f, 1, -1);
  numBytes += cSlice_init(&cSlice_oM7YXdwk, 1, -1);
  numBytes += cVar_init_f(&cVar_wqDEbLRj, 1.0f);
  numBytes += cIf_init(&cIf_hBEBeEOp, false);
  numBytes += cVar_init_f(&cVar_lobgS3FS, 1.0f);
  numBytes += cPack_init(&cPack_Isik922q, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_MIDRRCgR, 1, 1);
  numBytes += cSlice_init(&cSlice_b0Sz0ZuQ, 0, 1);
  numBytes += cVar_init_f(&cVar_JOCTvkMZ, 0.0f);
  numBytes += cIf_init(&cIf_cc2IrXGj, false);
  numBytes += cIf_init(&cIf_Bqg32ZdO, false);
  numBytes += cIf_init(&cIf_cWrHfSEF, false);
  numBytes += cIf_init(&cIf_MkuRQSmv, false);
  numBytes += cIf_init(&cIf_IHQF4ypO, false);
  numBytes += cBinop_init(&cBinop_yJbzGe7Q, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_vUxxxDju, "floatatom");
  numBytes += cSlice_init(&cSlice_EZKfnQFy, 1, 1);
  numBytes += cSlice_init(&cSlice_KbBZUmTl, 0, 1);
  numBytes += cVar_init_f(&cVar_5dVyCVs4, 1.0f);
  numBytes += cVar_init_f(&cVar_YqI14Z42, 1.0f);
  numBytes += cVar_init_f(&cVar_i1wkGUjX, 1.0f);
  numBytes += cVar_init_f(&cVar_78hGbhXr, 0.0f);
  numBytes += cVar_init_s(&cVar_rLd9DwgB, "floatatom");
  numBytes += sVarf_init(&sVarf_dZ0w2RFw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZqXFS7tC, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_23B1xEFE, 1, -1);
  numBytes += cSlice_init(&cSlice_5OWmq88Y, 1, -1);
  numBytes += cSlice_init(&cSlice_aVLvwI1W, 1, -1);
  numBytes += cSlice_init(&cSlice_vwdjnr5X, 1, -1);
  numBytes += cSlice_init(&cSlice_LKBwOcMJ, 1, -1);
  numBytes += cSlice_init(&cSlice_R4ALUzHg, 1, -1);
  numBytes += cSlice_init(&cSlice_XtmDXTdV, 1, -1);
  numBytes += cSlice_init(&cSlice_xEpvFWMQ, 1, -1);
  numBytes += cSlice_init(&cSlice_fVZtcVzl, 1, -1);
  numBytes += cSlice_init(&cSlice_PM8XH7py, 1, -1);
  numBytes += cPack_init(&cPack_V2tEQBKh, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_8YP6bA98, 1, -1);
  numBytes += cPack_init(&cPack_iZgNvEyi, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_8NSkn7Ns, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_OrgYdfCK, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_sa9FEwcJ, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_HJTdzBRI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_hCgaW25B, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3PK8ohpr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UPTqzg7l, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iKCUmQ0k, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_0eppjdlV, 1.0f);
  numBytes += cIf_init(&cIf_p6yZA3NU, false);
  numBytes += cVar_init_f(&cVar_BQwFbWE2, 1.0f);
  numBytes += cPack_init(&cPack_Mrj18aeE, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_CooJrV4H, 1, 1);
  numBytes += cSlice_init(&cSlice_Ls7cpEN1, 0, 1);
  numBytes += cVar_init_f(&cVar_ILktxGl6, 0.0f);
  numBytes += cIf_init(&cIf_mxP7M6Cm, false);
  numBytes += cIf_init(&cIf_wvmw7d3b, false);
  numBytes += cIf_init(&cIf_Mm7VbXtC, false);
  numBytes += cIf_init(&cIf_lEeLgaHf, false);
  numBytes += cIf_init(&cIf_76oo7VCv, false);
  numBytes += cBinop_init(&cBinop_lvJD4MFo, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_uMCQFy2L, "floatatom");
  numBytes += cSlice_init(&cSlice_7L8BNFn4, 1, 1);
  numBytes += cSlice_init(&cSlice_ZwuKrGV5, 0, 1);
  numBytes += cVar_init_f(&cVar_u6BdnOHg, 1.0f);
  numBytes += cVar_init_f(&cVar_Heo8UTdy, 1.0f);
  numBytes += cVar_init_f(&cVar_uFQvOcXv, 1.0f);
  numBytes += cVar_init_f(&cVar_U4ygCAv9, 0.0f);
  numBytes += cVar_init_s(&cVar_0iMEwMOi, "floatatom");
  numBytes += sVarf_init(&sVarf_DwarooOM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Uvvwo6GU, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_fcVFz358, 1, -1);
  numBytes += cSlice_init(&cSlice_e0fAFSt6, 1, -1);
  numBytes += cSlice_init(&cSlice_mw83DgRG, 1, -1);
  numBytes += cSlice_init(&cSlice_4vqo4ACF, 1, -1);
  numBytes += cSlice_init(&cSlice_Ag6cJpYM, 1, -1);
  numBytes += cSlice_init(&cSlice_yuiWTOk0, 1, -1);
  numBytes += cSlice_init(&cSlice_yrL7m686, 1, -1);
  numBytes += cSlice_init(&cSlice_vPfRF3EI, 1, -1);
  numBytes += cSlice_init(&cSlice_VpCFEowW, 1, -1);
  numBytes += cSlice_init(&cSlice_xFnypJ1Z, 1, -1);
  numBytes += cPack_init(&cPack_2BjkCsnQ, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_GZ0lnR0t, 1, -1);
  numBytes += cPack_init(&cPack_TD05bBC7, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_KmPm73fz, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zsXGmMCj, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_p8EcIigj, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_LBmqqbgM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_sxInAC0y, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZFsXQIZy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zXEys9sF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KgBwuRTo, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_1SIUk68a, 1, -1);
  numBytes += cSlice_init(&cSlice_70K7iwAE, 1, -1);
  numBytes += cVar_init_f(&cVar_TzGRSzu1, 1.0f);
  numBytes += cIf_init(&cIf_G3qaLhpI, false);
  numBytes += cVar_init_f(&cVar_PJ9pBR1O, 1.0f);
  numBytes += cPack_init(&cPack_QBCg2nrR, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_ZiAIfSV2, 1, 1);
  numBytes += cSlice_init(&cSlice_fHSMbU9W, 0, 1);
  numBytes += cVar_init_f(&cVar_UEZfqvKi, 0.0f);
  numBytes += cIf_init(&cIf_F4Ts6nn3, false);
  numBytes += cIf_init(&cIf_kh3kUL3s, false);
  numBytes += cIf_init(&cIf_cvYhiwUV, false);
  numBytes += cIf_init(&cIf_sN2Kn8Tf, false);
  numBytes += cIf_init(&cIf_03L9IJyW, false);
  numBytes += cBinop_init(&cBinop_uXzNtsx7, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_xHEAKxJk, "floatatom");
  numBytes += cSlice_init(&cSlice_0KZfj7My, 1, 1);
  numBytes += cSlice_init(&cSlice_qhbUXifT, 0, 1);
  numBytes += cVar_init_f(&cVar_372n8XTM, 1.0f);
  numBytes += cVar_init_f(&cVar_9qV7BG6D, 1.0f);
  numBytes += cVar_init_f(&cVar_d2dtSroW, 1.0f);
  numBytes += cVar_init_f(&cVar_JEZDaTC2, 0.0f);
  numBytes += cVar_init_s(&cVar_T6z3idai, "floatatom");
  numBytes += sVarf_init(&sVarf_S6qETae3, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_hXwmUOgE, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_dLRBKQAm, 1, -1);
  numBytes += cSlice_init(&cSlice_AWidPyVT, 1, -1);
  numBytes += cSlice_init(&cSlice_qbPYWHJj, 1, -1);
  numBytes += cSlice_init(&cSlice_29f26OMb, 1, -1);
  numBytes += cSlice_init(&cSlice_bJKtANpa, 1, -1);
  numBytes += cSlice_init(&cSlice_G0k9Kkia, 1, -1);
  numBytes += cSlice_init(&cSlice_0imL1O3T, 1, -1);
  numBytes += cSlice_init(&cSlice_XmZqA0C9, 1, -1);
  numBytes += cSlice_init(&cSlice_Xr7pJEHt, 1, -1);
  numBytes += cSlice_init(&cSlice_hekWBl6X, 1, -1);
  numBytes += cPack_init(&cPack_WEl0yrGq, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_UUsz8VYP, 1, -1);
  numBytes += cPack_init(&cPack_Js8sjAH0, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_KDEPBvjR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_lQTjixvu, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_kQPpssRS, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_JkJcJTgY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NdRfeLn3, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NtLDlFwQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WvnECfNw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_epHzvFVv, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_YEBn3xam, 1.0f);
  numBytes += cIf_init(&cIf_d2uYi1Bu, false);
  numBytes += cVar_init_f(&cVar_9MnPbIo9, 1.0f);
  numBytes += cPack_init(&cPack_AAejWCOy, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_zx8a9Wax, 1, 1);
  numBytes += cSlice_init(&cSlice_RlURvp4e, 0, 1);
  numBytes += cVar_init_f(&cVar_pvemYhFw, 0.0f);
  numBytes += cIf_init(&cIf_wEMLh0A8, false);
  numBytes += cIf_init(&cIf_0WMevAJ6, false);
  numBytes += cIf_init(&cIf_ph6V7rw0, false);
  numBytes += cIf_init(&cIf_qeVZ1Z0u, false);
  numBytes += cIf_init(&cIf_l9ccZzQb, false);
  numBytes += cBinop_init(&cBinop_VTHNhVRQ, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_N0ALUgmd, "floatatom");
  numBytes += cSlice_init(&cSlice_h81hYabQ, 1, 1);
  numBytes += cSlice_init(&cSlice_iHPzUXWs, 0, 1);
  numBytes += cVar_init_f(&cVar_daUZ72Nt, 1.0f);
  numBytes += cVar_init_f(&cVar_P1VueFE3, 1.0f);
  numBytes += cVar_init_f(&cVar_rgtD5JyF, 1.0f);
  numBytes += cVar_init_f(&cVar_5VcJzmxC, 0.0f);
  numBytes += cVar_init_s(&cVar_DUhf0TmH, "floatatom");
  numBytes += sVarf_init(&sVarf_zm9iVCVJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_PVK129YD, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_Aj99U7C1, 1, -1);
  numBytes += cSlice_init(&cSlice_xfbeRZKC, 1, -1);
  numBytes += cSlice_init(&cSlice_pAaEJsIN, 1, -1);
  numBytes += cSlice_init(&cSlice_HtdO3k50, 1, -1);
  numBytes += cSlice_init(&cSlice_mG6tAsjZ, 1, -1);
  numBytes += cSlice_init(&cSlice_M4WUuV8m, 1, -1);
  numBytes += cSlice_init(&cSlice_vX1eS8iE, 1, -1);
  numBytes += cSlice_init(&cSlice_M2qaumfU, 1, -1);
  numBytes += cSlice_init(&cSlice_9eLqMCLN, 1, -1);
  numBytes += cSlice_init(&cSlice_UjJmZDbb, 1, -1);
  numBytes += cPack_init(&cPack_QL8tQpyZ, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_smy1c9SC, 1, -1);
  numBytes += cPack_init(&cPack_wIfxoX9a, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_qcTGpxXc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YhNAf26i, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_eelQHj0I, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_G6Qw1z3k, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bGqkhqET, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_1v6udkQo, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_75p50Ovd, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Wm1wq5c1, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_yKgF51ZX, 1, -1);
  numBytes += cSlice_init(&cSlice_kE89B6Yy, 1, -1);
  numBytes += cVar_init_f(&cVar_GX7D0OWJ, 1.0f);
  numBytes += cIf_init(&cIf_N9Sup1dy, false);
  numBytes += cVar_init_f(&cVar_56T67YCv, 1.0f);
  numBytes += cPack_init(&cPack_uRQaqjAm, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_DOD9KU08, 1, 1);
  numBytes += cSlice_init(&cSlice_oJgYkUT4, 0, 1);
  numBytes += cVar_init_f(&cVar_FixwDbXA, 0.0f);
  numBytes += cIf_init(&cIf_vsvHR2Nw, false);
  numBytes += cIf_init(&cIf_OytzyvLz, false);
  numBytes += cIf_init(&cIf_8fRngFMz, false);
  numBytes += cIf_init(&cIf_e6UjV6UN, false);
  numBytes += cIf_init(&cIf_vmezOIaR, false);
  numBytes += cBinop_init(&cBinop_5NlKp31i, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_VPU2WO7c, "floatatom");
  numBytes += cSlice_init(&cSlice_jLIfgE0j, 1, 1);
  numBytes += cSlice_init(&cSlice_iYnHgHyK, 0, 1);
  numBytes += cVar_init_f(&cVar_bP2jCENp, 1.0f);
  numBytes += cVar_init_f(&cVar_vhi2kXTz, 1.0f);
  numBytes += cVar_init_f(&cVar_EZBN40Dd, 1.0f);
  numBytes += cVar_init_f(&cVar_bdmRPMUG, 0.0f);
  numBytes += cVar_init_s(&cVar_nBhniSew, "floatatom");
  numBytes += sVarf_init(&sVarf_1AjNWAgV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_W4zxyIcy, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_4JfWom68, 1, -1);
  numBytes += cSlice_init(&cSlice_ylS2pv22, 1, -1);
  numBytes += cSlice_init(&cSlice_SfOwGpN6, 1, -1);
  numBytes += cSlice_init(&cSlice_LvsKy5Ki, 1, -1);
  numBytes += cSlice_init(&cSlice_VYlDWkiP, 1, -1);
  numBytes += cSlice_init(&cSlice_6COpBpCh, 1, -1);
  numBytes += cSlice_init(&cSlice_2dWa8IB5, 1, -1);
  numBytes += cSlice_init(&cSlice_6b1JYrFb, 1, -1);
  numBytes += cSlice_init(&cSlice_A8CuP2ln, 1, -1);
  numBytes += cSlice_init(&cSlice_UIAnof1P, 1, -1);
  numBytes += cPack_init(&cPack_ePsUrgfZ, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_0QUVEwcA, 1, -1);
  numBytes += cPack_init(&cPack_QV2YCfQm, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_6HjJAOft, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ur4vfbIM, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_s4rN62Gr, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_F6H9JpCa, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ABi4QhT4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_1yjXCpCJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_unvIab3l, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_PQChtMgV, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ZiKx4Wwe, 1.0f);
  numBytes += cIf_init(&cIf_NMElIoEx, false);
  numBytes += cVar_init_f(&cVar_Mn3cFg8R, 1.0f);
  numBytes += cPack_init(&cPack_oP0pUKdr, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_to6bR4at, 1, 1);
  numBytes += cSlice_init(&cSlice_yhra3fVS, 0, 1);
  numBytes += cVar_init_f(&cVar_S66gRHEi, 0.0f);
  numBytes += cIf_init(&cIf_xRxjmsIt, false);
  numBytes += cIf_init(&cIf_TPhseP2m, false);
  numBytes += cIf_init(&cIf_VfiSQgbJ, false);
  numBytes += cIf_init(&cIf_E7irgJpI, false);
  numBytes += cIf_init(&cIf_thoqJycW, false);
  numBytes += cBinop_init(&cBinop_wE2ueZu9, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_n2WO5o3g, "floatatom");
  numBytes += cSlice_init(&cSlice_u5hnQjls, 1, 1);
  numBytes += cSlice_init(&cSlice_KdCzROMa, 0, 1);
  numBytes += cVar_init_f(&cVar_7Mi2xqLl, 1.0f);
  numBytes += cVar_init_f(&cVar_e8wR84bO, 1.0f);
  numBytes += cVar_init_f(&cVar_32uvkLHt, 1.0f);
  numBytes += cVar_init_f(&cVar_ItIRHEbG, 0.0f);
  numBytes += cVar_init_s(&cVar_WoCtAXav, "floatatom");
  numBytes += sVarf_init(&sVarf_jFm5catj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fh9tKgau, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_yh7F24Oo, 1, -1);
  numBytes += cSlice_init(&cSlice_CFrRwTMB, 1, -1);
  numBytes += cSlice_init(&cSlice_YpAhoW1l, 1, -1);
  numBytes += cSlice_init(&cSlice_D4sghae2, 1, -1);
  numBytes += cSlice_init(&cSlice_rrqV1q9k, 1, -1);
  numBytes += cSlice_init(&cSlice_YZ55p3WP, 1, -1);
  numBytes += cSlice_init(&cSlice_9YeQsBuv, 1, -1);
  numBytes += cSlice_init(&cSlice_9DfA4dbL, 1, -1);
  numBytes += cSlice_init(&cSlice_AGBEyFj0, 1, -1);
  numBytes += cSlice_init(&cSlice_tEOrnlYU, 1, -1);
  numBytes += cPack_init(&cPack_gw7QDuDy, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_7Af7EYRH, 1, -1);
  numBytes += cPack_init(&cPack_TDA44rWH, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_V91XEMIz, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_cXhSZULd, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_R3xQMPK8, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_paNU3VfV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2u3sTigZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LPq9nC6e, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LoItmH1V, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yMAE3s9Z, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_KTVJSRwc, 1, -1);
  numBytes += cSlice_init(&cSlice_KHauJDoA, 1, -1);
  numBytes += cVar_init_f(&cVar_xvpRkzEG, 0.0f);
  numBytes += cVar_init_f(&cVar_eGfEkAme, 0.0f);
  numBytes += cSlice_init(&cSlice_1jnUeKqd, 1, -1);
  numBytes += cSlice_init(&cSlice_v22fqbiP, 1, -1);
  numBytes += cSlice_init(&cSlice_ktLxIqK2, 1, 1);
  numBytes += cSlice_init(&cSlice_Hb0l6sWi, 0, 1);
  numBytes += cVar_init_f(&cVar_bRvOad2A, 0.0f);
  numBytes += cIf_init(&cIf_UrJE1AFi, false);
  numBytes += cIf_init(&cIf_MZUhK1hh, false);
  numBytes += cIf_init(&cIf_EqVyOrHa, false);
  numBytes += cVar_init_f(&cVar_GSFIIDhh, 0.0f);
  numBytes += cIf_init(&cIf_JwWyX3YE, false);
  numBytes += cVar_init_f(&cVar_yBZ8Rr9q, 0.0f);
  numBytes += cIf_init(&cIf_9IXt8ClH, false);
  numBytes += cBinop_init(&cBinop_lQhGwFVu, 0.0f); // __lt
  numBytes += cVar_init_f(&cVar_d9skxfiC, 8.0f);
  numBytes += cTabread_init(&cTabread_tFxo0eD4, &hTable_1CJAv4mb); // 1551-used
  numBytes += cSlice_init(&cSlice_RD3mBw1a, 1, -1);
  numBytes += cVar_init_s(&cVar_Pg25i3zv, "1551-used");
  numBytes += cBinop_init(&cBinop_heR07fCI, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_ksLxEfjn, &hTable_TVJ0157f); // 1551-ids
  numBytes += cSlice_init(&cSlice_eSu4tsxf, 1, -1);
  numBytes += cVar_init_s(&cVar_1YaAO02p, "1551-ids");
  numBytes += cBinop_init(&cBinop_3QumybJq, 0.0f); // __min
  numBytes += cVar_init_f(&cVar_ecOPRlSG, 0.0f);
  numBytes += cSlice_init(&cSlice_3HWHlAk2, 1, 1);
  numBytes += cSlice_init(&cSlice_0ipxnk33, 0, 1);
  numBytes += cTabread_init(&cTabread_dYLtp878, &hTable_yzGZsCzt); // 1551-pitches
  numBytes += cSlice_init(&cSlice_KzRsIXOj, 1, -1);
  numBytes += cVar_init_s(&cVar_TuY9vG5A, "1551-pitches");
  numBytes += cBinop_init(&cBinop_IdrSAtgv, 0.0f); // __min
  numBytes += cVar_init_f(&cVar_ygKDTdkj, 0.0f);
  numBytes += cVar_init_f(&cVar_xf10YEOw, 0.0f);
  numBytes += cIf_init(&cIf_HCeIN9w2, false);
  numBytes += cTabwrite_init(&cTabwrite_wTXiABb8, &hTable_1CJAv4mb); // 1551-used
  numBytes += cSlice_init(&cSlice_p0SBYesY, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_B9gugEvj, &hTable_TVJ0157f); // 1551-ids
  numBytes += cSlice_init(&cSlice_Q7yZ3ZIJ, 1, -1);
  numBytes += cVar_init_f(&cVar_mHaEzPdM, 0.0f);
  numBytes += cVar_init_f(&cVar_OLWP9Fp6, 0.0f);
  numBytes += cSlice_init(&cSlice_Lxvek0ti, 1, 1);
  numBytes += cSlice_init(&cSlice_yZxrDg7L, 0, 1);
  numBytes += cPack_init(&cPack_N1tG0Nyf, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_q2U4xCQm, 0.0f); // __eq
  numBytes += cBinop_init(&cBinop_X5aP7myU, 0.0f); // __logand
  numBytes += cBinop_init(&cBinop_3W7qtrEK, 0.0f); // __logand
  numBytes += cBinop_init(&cBinop_lsFSutHW, 0.0f); // __lt
  numBytes += cIf_init(&cIf_amxCcbMf, false);
  numBytes += cVar_init_f(&cVar_HpBxoV3r, 0.0f);
  numBytes += cIf_init(&cIf_pXX8KEEm, false);
  numBytes += cVar_init_f(&cVar_fpxCZfvt, 0.0f);
  numBytes += cIf_init(&cIf_eL6Hrr2v, false);
  numBytes += cBinop_init(&cBinop_vEuM2YF5, 0.0f); // __lt
  numBytes += cVar_init_f(&cVar_tKNp0bRO, 8.0f);
  numBytes += cTabwrite_init(&cTabwrite_EKvvyDhf, &hTable_1CJAv4mb); // 1551-used
  numBytes += cSlice_init(&cSlice_vZzIWhYL, 1, -1);
  numBytes += cTabread_init(&cTabread_m5Bg50wm, &hTable_1CJAv4mb); // 1551-used
  numBytes += cSlice_init(&cSlice_5UlX8X6W, 1, -1);
  numBytes += cVar_init_s(&cVar_wTy0SC7G, "1551-used");
  numBytes += cBinop_init(&cBinop_ZJMPWZB2, 0.0f); // __min
  numBytes += cIf_init(&cIf_psb2ULCB, false);
  numBytes += cTabread_init(&cTabread_eLh1bNxJ, &hTable_yzGZsCzt); // 1551-pitches
  numBytes += cSlice_init(&cSlice_FsDftiHS, 1, -1);
  numBytes += cVar_init_s(&cVar_epGL60ip, "1551-pitches");
  numBytes += cBinop_init(&cBinop_sE4egqL1, 0.0f); // __min
  numBytes += cIf_init(&cIf_S01BeoN0, false);
  numBytes += cVar_init_f(&cVar_GD1G4vnv, 0.0f);
  numBytes += cIf_init(&cIf_nRzgXrVd, false);
  numBytes += cVar_init_f(&cVar_GpwqTJLF, 0.0f);
  numBytes += cIf_init(&cIf_tFs2QY7r, false);
  numBytes += cBinop_init(&cBinop_DaTKfBfA, 0.0f); // __lt
  numBytes += cVar_init_f(&cVar_94XOzQZY, 8.0f);
  numBytes += cTabwrite_init(&cTabwrite_VoASWy6m, &hTable_1CJAv4mb); // 1551-used
  numBytes += cSlice_init(&cSlice_Lh63dQyz, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_GFD1bArG, &hTable_TVJ0157f); // 1551-ids
  numBytes += cSlice_init(&cSlice_hMwYR9L4, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_bxdiMqLw, &hTable_yzGZsCzt); // 1551-pitches
  numBytes += cSlice_init(&cSlice_6yakZT19, 1, -1);
  numBytes += cIf_init(&cIf_YPm6ChEh, false);
  numBytes += cVar_init_f(&cVar_4d2bqPpa, 0.0f);
  numBytes += cIf_init(&cIf_VEgd7F78, false);
  numBytes += cVar_init_f(&cVar_YUBZsWRG, 0.0f);
  numBytes += cIf_init(&cIf_qY4H3yct, false);
  numBytes += cBinop_init(&cBinop_XPQQC1kC, 0.0f); // __lt
  numBytes += cVar_init_f(&cVar_2fXwzPC4, 8.0f);
  numBytes += cVar_init_f(&cVar_Pk9cnYBF, 0.0f);
  numBytes += cIf_init(&cIf_GxJbTmhV, false);
  numBytes += cVar_init_f(&cVar_dQVgCckU, 0.0f);
  numBytes += cVar_init_f(&cVar_jqMkPLyv, 0.0f);
  numBytes += cVar_init_f(&cVar_xISby9fl, 0.0f);
  numBytes += cIf_init(&cIf_f2H0755F, false);
  numBytes += cIf_init(&cIf_NnePgBI4, false);
  numBytes += cPack_init(&cPack_s1qHK7bi, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_psoJlvXW, 0.0f);
  numBytes += cSlice_init(&cSlice_sJrNCzo7, 1, 1);
  numBytes += cSlice_init(&cSlice_DBJKF5bq, 0, 1);
  numBytes += cVar_init_f(&cVar_KbwvmGi3, 0.0f);
  numBytes += cIf_init(&cIf_tO8YC0jz, false);
  numBytes += cVar_init_f(&cVar_tyBMIoav, 0.0f);
  numBytes += cVar_init_f(&cVar_KCuB7toO, 0.0f);
  numBytes += cTabread_init(&cTabread_MKawrwcM, &hTable_1CJAv4mb); // 1551-used
  numBytes += cSlice_init(&cSlice_uB4Y9cn5, 1, -1);
  numBytes += cVar_init_s(&cVar_90jh40hV, "1551-used");
  numBytes += cBinop_init(&cBinop_iILUDKeE, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_Nt71fgma, &hTable_TVJ0157f); // 1551-ids
  numBytes += cSlice_init(&cSlice_juHGo8sT, 1, -1);
  numBytes += cVar_init_s(&cVar_JJlZAkrK, "1551-ids");
  numBytes += cBinop_init(&cBinop_qfvna1ya, 0.0f); // __min
  numBytes += cTabwrite_init(&cTabwrite_pUc4SrXg, &hTable_yzGZsCzt); // 1551-pitches
  numBytes += cSlice_init(&cSlice_Q8Z65ii4, 1, -1);
  numBytes += cTabread_init(&cTabread_A7WmWLwB, &hTable_yzGZsCzt); // 1551-pitches
  numBytes += cSlice_init(&cSlice_8s4G52Od, 1, -1);
  numBytes += cVar_init_s(&cVar_f7Mp5ED8, "1551-pitches");
  numBytes += cBinop_init(&cBinop_KbMvoThg, 0.0f); // __min
  numBytes += cTabwrite_init(&cTabwrite_r1MvUxfI, &hTable_yzGZsCzt); // 1551-pitches
  numBytes += cSlice_init(&cSlice_K8Lsd6m8, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_yRAQhZV7, &hTable_1CJAv4mb); // 1551-used
  numBytes += cSlice_init(&cSlice_1oKoHWEu, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_nKNA232x, &hTable_TVJ0157f); // 1551-ids
  numBytes += cSlice_init(&cSlice_etcFWKZg, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_G8H1C4Yp, &hTable_TVJ0157f); // 1551-ids
  numBytes += cSlice_init(&cSlice_DJjnT04z, 1, -1);
  numBytes += cVar_init_f(&cVar_wfHA9BG5, 0.0f);
  numBytes += cTabwrite_init(&cTabwrite_Kl78IjB2, &hTable_1CJAv4mb); // 1551-used
  numBytes += cSlice_init(&cSlice_Rb8ZQHCW, 1, -1);
  numBytes += cVar_init_f(&cVar_w9NwxkNW, 0.0f);
  numBytes += cSlice_init(&cSlice_SbMg3Ukw, 1, 1);
  numBytes += cSlice_init(&cSlice_fvjPldMP, 0, 1);
  numBytes += cVar_init_f(&cVar_LSZfgo2r, 0.0f);
  numBytes += cBinop_init(&cBinop_nwbFzRaC, 0.0f); // __logand
  numBytes += cBinop_init(&cBinop_rA1YSuqe, 0.0f); // __lt
  numBytes += cBinop_init(&cBinop_hqXUhKRW, 0.0f); // __logand
  numBytes += cBinop_init(&cBinop_WPzZlGyE, 0.0f); // __lt
  numBytes += cBinop_init(&cBinop_lnNw57i5, 0.0f); // __logand
  numBytes += cBinop_init(&cBinop_wwy5j0MH, 65535.0f); // __unimod
  numBytes += hTable_init(&hTable_yzGZsCzt, 8);
  numBytes += hTable_init(&hTable_1CJAv4mb, 8);
  numBytes += hTable_init(&hTable_TVJ0157f, 8);
  numBytes += cVar_init_f(&cVar_xDpvG2BH, 1.0f);
  numBytes += cIf_init(&cIf_23eomtGF, false);
  numBytes += cVar_init_f(&cVar_tM2bGRon, 1.0f);
  numBytes += cPack_init(&cPack_QbXZSEFl, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_JonYBon0, 1, 1);
  numBytes += cSlice_init(&cSlice_Ua6omJ3y, 0, 1);
  numBytes += cVar_init_f(&cVar_oJr9KyJL, 0.0f);
  numBytes += cIf_init(&cIf_mfPd2Uk3, false);
  numBytes += cIf_init(&cIf_8X2zYq0i, false);
  numBytes += cIf_init(&cIf_0Ag6p8Wp, false);
  numBytes += cIf_init(&cIf_RJ4aIYvT, false);
  numBytes += cIf_init(&cIf_9OFabHBN, false);
  numBytes += cBinop_init(&cBinop_CNSGPZUH, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_GAUBQLrO, "floatatom");
  numBytes += cSlice_init(&cSlice_9Cl5p0cD, 1, 1);
  numBytes += cSlice_init(&cSlice_Zl1HlYug, 0, 1);
  numBytes += cVar_init_f(&cVar_ZzCQ7aZp, 1.0f);
  numBytes += cVar_init_f(&cVar_U8R0zCDr, 1.0f);
  numBytes += cVar_init_f(&cVar_4skQDTpC, 1.0f);
  numBytes += cVar_init_f(&cVar_xn80Lnbp, 0.0f);
  numBytes += cVar_init_s(&cVar_OmfIOXuk, "floatatom");
  numBytes += sVarf_init(&sVarf_iDEcza7Z, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jpFaYw3l, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_kOrPgCUQ, 1, -1);
  numBytes += cSlice_init(&cSlice_GD2WjntJ, 1, -1);
  numBytes += cSlice_init(&cSlice_6EiRi7lt, 1, -1);
  numBytes += cSlice_init(&cSlice_LHp64jY6, 1, -1);
  numBytes += cSlice_init(&cSlice_VLsXX47A, 1, -1);
  numBytes += cSlice_init(&cSlice_R5rTDpF2, 1, -1);
  numBytes += cSlice_init(&cSlice_mh8FWYLV, 1, -1);
  numBytes += cSlice_init(&cSlice_UUf4fyHb, 1, -1);
  numBytes += cSlice_init(&cSlice_QXZbgiXG, 1, -1);
  numBytes += cSlice_init(&cSlice_gYsVpRun, 1, -1);
  numBytes += cPack_init(&cPack_4UudeMfo, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_QObORVG6, 1, -1);
  numBytes += cPack_init(&cPack_1mIauuRP, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_lAJTqkZW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_08pU2lv2, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_b6s9hZC0, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_6Z1aW35e, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tzCnj0IM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_uvmOGlWp, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6ddiEHh4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xoHTgvCF, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_gtD2AWZ3, 1.0f);
  numBytes += cIf_init(&cIf_WIN34lcw, false);
  numBytes += cVar_init_f(&cVar_tyBqUqFp, 1.0f);
  numBytes += cPack_init(&cPack_cx6gT1zH, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_227n5T6F, 1, 1);
  numBytes += cSlice_init(&cSlice_uwCKxtsO, 0, 1);
  numBytes += cVar_init_f(&cVar_4z0BTbF3, 0.0f);
  numBytes += cIf_init(&cIf_g9diwvDb, false);
  numBytes += cIf_init(&cIf_14HZcSLu, false);
  numBytes += cIf_init(&cIf_IymvnsBS, false);
  numBytes += cIf_init(&cIf_xaygRGNj, false);
  numBytes += cIf_init(&cIf_6qKbWYmr, false);
  numBytes += cBinop_init(&cBinop_IX5XyKqn, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_HtG61Gdm, "floatatom");
  numBytes += cSlice_init(&cSlice_XqLb57BZ, 1, 1);
  numBytes += cSlice_init(&cSlice_mdUdXXOJ, 0, 1);
  numBytes += cVar_init_f(&cVar_SkvJ109S, 1.0f);
  numBytes += cVar_init_f(&cVar_nBqG35VT, 1.0f);
  numBytes += cVar_init_f(&cVar_a5KbCQqQ, 1.0f);
  numBytes += cVar_init_f(&cVar_zsZMdo5f, 0.0f);
  numBytes += cVar_init_s(&cVar_5BkE3RQ1, "floatatom");
  numBytes += sVarf_init(&sVarf_WvsXoMEW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vqRPKfJY, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_tjF78wM1, 1, -1);
  numBytes += cSlice_init(&cSlice_bIjdOMix, 1, -1);
  numBytes += cSlice_init(&cSlice_Vh2itSGm, 1, -1);
  numBytes += cSlice_init(&cSlice_lRZT3Xtp, 1, -1);
  numBytes += cSlice_init(&cSlice_Yj2jhRKy, 1, -1);
  numBytes += cSlice_init(&cSlice_Uob1ZVx9, 1, -1);
  numBytes += cSlice_init(&cSlice_2H15Mb2y, 1, -1);
  numBytes += cSlice_init(&cSlice_ISKOZ4iv, 1, -1);
  numBytes += cSlice_init(&cSlice_aLpKPJ8l, 1, -1);
  numBytes += cSlice_init(&cSlice_4gDNZYJ2, 1, -1);
  numBytes += cPack_init(&cPack_iMJWrA0d, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_MsCVUwW0, 1, -1);
  numBytes += cPack_init(&cPack_LKwnwYgB, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_paNbZdPb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zSuec1u8, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_kp19ddPr, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_rDsXkGqI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UjApd58n, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_nlTDH2a4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TdWWjeUj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KLd23hfC, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_P7EOgLDf, 1, -1);
  numBytes += cSlice_init(&cSlice_MepY6dbC, 1, -1);
  numBytes += cVar_init_f(&cVar_r7AnVJu0, 1.0f);
  numBytes += cIf_init(&cIf_Fg9lxMEJ, false);
  numBytes += cVar_init_f(&cVar_UwtjzTdf, 1.0f);
  numBytes += cPack_init(&cPack_PZinLSmG, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_xEpavzLn, 1, 1);
  numBytes += cSlice_init(&cSlice_vlBrDppn, 0, 1);
  numBytes += cVar_init_f(&cVar_BYSN50Gd, 0.0f);
  numBytes += cIf_init(&cIf_T38LVdAd, false);
  numBytes += cIf_init(&cIf_P0GFgEuo, false);
  numBytes += cIf_init(&cIf_frjPC7Il, false);
  numBytes += cIf_init(&cIf_xoFY5A2s, false);
  numBytes += cIf_init(&cIf_qeEneN2W, false);
  numBytes += cBinop_init(&cBinop_4MMF1602, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_js2H1Aig, "floatatom");
  numBytes += cSlice_init(&cSlice_qmL7hBuF, 1, 1);
  numBytes += cSlice_init(&cSlice_s4usmkGe, 0, 1);
  numBytes += cVar_init_f(&cVar_AS0PGvte, 1.0f);
  numBytes += cVar_init_f(&cVar_HFqNaDwT, 1.0f);
  numBytes += cVar_init_f(&cVar_Tsk2ycJO, 1.0f);
  numBytes += cVar_init_f(&cVar_44qJZC6w, 0.0f);
  numBytes += cVar_init_s(&cVar_jyWaYIKi, "floatatom");
  numBytes += sVarf_init(&sVarf_LIsai2m0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CaYVHYNo, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_7VM0Peog, 1, -1);
  numBytes += cSlice_init(&cSlice_O7Wgx6EV, 1, -1);
  numBytes += cSlice_init(&cSlice_euMw2VVp, 1, -1);
  numBytes += cSlice_init(&cSlice_LmGU8UCf, 1, -1);
  numBytes += cSlice_init(&cSlice_6jVsR4qA, 1, -1);
  numBytes += cSlice_init(&cSlice_kkz7IRVr, 1, -1);
  numBytes += cSlice_init(&cSlice_t9MpBWt4, 1, -1);
  numBytes += cSlice_init(&cSlice_k44aAMCH, 1, -1);
  numBytes += cSlice_init(&cSlice_lFYhh61A, 1, -1);
  numBytes += cSlice_init(&cSlice_0YmCXHCm, 1, -1);
  numBytes += cPack_init(&cPack_jmpPUtnZ, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_tUtWc8td, 1, -1);
  numBytes += cPack_init(&cPack_WH48RlD3, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_8rSpnYK9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7fw6jKmB, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_OMhGOqM2, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_UU9jSQT1, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QaWNg4dk, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_mVlzXWrG, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2kg7Mb5t, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0Agf9l8P, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Mdjtiue2, 1.0f);
  numBytes += cIf_init(&cIf_x7ZGuxf2, false);
  numBytes += cVar_init_f(&cVar_Qz6RD2tk, 1.0f);
  numBytes += cPack_init(&cPack_3X1Duqq7, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_foRmkhEN, 1, 1);
  numBytes += cSlice_init(&cSlice_q9fM4m75, 0, 1);
  numBytes += cVar_init_f(&cVar_hcZMmU1n, 0.0f);
  numBytes += cIf_init(&cIf_nJudrAqf, false);
  numBytes += cIf_init(&cIf_W10XEzu5, false);
  numBytes += cIf_init(&cIf_RYO2fyPg, false);
  numBytes += cIf_init(&cIf_Yw4QzBgT, false);
  numBytes += cIf_init(&cIf_V2DGXwsr, false);
  numBytes += cBinop_init(&cBinop_rA72VmAd, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_kmb8KAeB, "floatatom");
  numBytes += cSlice_init(&cSlice_u1uyufGo, 1, 1);
  numBytes += cSlice_init(&cSlice_rdWCnXVe, 0, 1);
  numBytes += cVar_init_f(&cVar_3eoFNm7j, 1.0f);
  numBytes += cVar_init_f(&cVar_0TrsKcVA, 1.0f);
  numBytes += cVar_init_f(&cVar_fjU4UvGa, 1.0f);
  numBytes += cVar_init_f(&cVar_6jaxRw8p, 0.0f);
  numBytes += cVar_init_s(&cVar_0r4X3doq, "floatatom");
  numBytes += sVarf_init(&sVarf_W81XXPCw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ELsNqxIo, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_1LKqXRTE, 1, -1);
  numBytes += cSlice_init(&cSlice_neZ6xdS7, 1, -1);
  numBytes += cSlice_init(&cSlice_gdAsEzmn, 1, -1);
  numBytes += cSlice_init(&cSlice_ETX12NBd, 1, -1);
  numBytes += cSlice_init(&cSlice_KTKhwd1R, 1, -1);
  numBytes += cSlice_init(&cSlice_yMytJhMD, 1, -1);
  numBytes += cSlice_init(&cSlice_bgFhgtQM, 1, -1);
  numBytes += cSlice_init(&cSlice_5cUq8NC9, 1, -1);
  numBytes += cSlice_init(&cSlice_iT2oWoML, 1, -1);
  numBytes += cSlice_init(&cSlice_5L5ut3Ei, 1, -1);
  numBytes += cPack_init(&cPack_gnGIRCMh, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_ZPPPVgSL, 1, -1);
  numBytes += cPack_init(&cPack_Bb0jevoi, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_0uPLnlQ8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MvJ3Cq9E, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_z05RfaJf, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_w2vgR8Wn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9dVZiC85, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_cov8rsmQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_P6Gq71ID, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_twB05mzi, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_DMDRXy2N, 1, -1);
  numBytes += cSlice_init(&cSlice_Af3QigZi, 1, -1);
  numBytes += cVar_init_f(&cVar_NNZ9ArtD, 1.0f);
  numBytes += cIf_init(&cIf_naBuOW8G, false);
  numBytes += cVar_init_f(&cVar_qEJ1hXqd, 1.0f);
  numBytes += cPack_init(&cPack_LQsI6nq9, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_QVXgL2S6, 1, 1);
  numBytes += cSlice_init(&cSlice_EfoTYKrb, 0, 1);
  numBytes += cVar_init_f(&cVar_9IGf1yZR, 0.0f);
  numBytes += cIf_init(&cIf_xNrAC0Io, false);
  numBytes += cIf_init(&cIf_oL1M0HUJ, false);
  numBytes += cIf_init(&cIf_kJKwa0zH, false);
  numBytes += cIf_init(&cIf_VPdbqSG7, false);
  numBytes += cIf_init(&cIf_Uv7sAoWs, false);
  numBytes += cBinop_init(&cBinop_Hr6fJHk6, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_RNAMLvJ5, "floatatom");
  numBytes += cSlice_init(&cSlice_IwEVXzny, 1, 1);
  numBytes += cSlice_init(&cSlice_Oq24lKO4, 0, 1);
  numBytes += cVar_init_f(&cVar_3kz29J4c, 1.0f);
  numBytes += cVar_init_f(&cVar_UFaX89U1, 1.0f);
  numBytes += cVar_init_f(&cVar_eld0OHey, 1.0f);
  numBytes += cVar_init_f(&cVar_5IExxcYD, 0.0f);
  numBytes += cVar_init_s(&cVar_0PvWzZd7, "floatatom");
  numBytes += sVarf_init(&sVarf_Ghs2jpIE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_m4kSCGK5, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_dbVN1WPY, 1, -1);
  numBytes += cSlice_init(&cSlice_YmGr0oy6, 1, -1);
  numBytes += cSlice_init(&cSlice_EC2ocbgr, 1, -1);
  numBytes += cSlice_init(&cSlice_fN0fm5Sa, 1, -1);
  numBytes += cSlice_init(&cSlice_lfiznssZ, 1, -1);
  numBytes += cSlice_init(&cSlice_8RdBmSac, 1, -1);
  numBytes += cSlice_init(&cSlice_Oc0gjtAv, 1, -1);
  numBytes += cSlice_init(&cSlice_bgcOj4eL, 1, -1);
  numBytes += cSlice_init(&cSlice_r6UozrK3, 1, -1);
  numBytes += cSlice_init(&cSlice_q7lsVNr2, 1, -1);
  numBytes += cPack_init(&cPack_nmIfIyAI, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_42at2TGp, 1, -1);
  numBytes += cPack_init(&cPack_J2eVXCqg, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_b3mRdrJ9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_olkPUiJW, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_BqIEt6aU, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_INJmOl8q, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9tLpUqLR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wAgQ15Zu, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_cPPi2bHO, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_SrocAAvI, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_e2sB8L0i, 1.0f);
  numBytes += cIf_init(&cIf_yztp4TEq, false);
  numBytes += cVar_init_f(&cVar_FC3CUnf5, 1.0f);
  numBytes += cPack_init(&cPack_4BMLkARK, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_HxQtIkQd, 1, 1);
  numBytes += cSlice_init(&cSlice_stFSzL51, 0, 1);
  numBytes += cVar_init_f(&cVar_9WmUTDJQ, 0.0f);
  numBytes += cIf_init(&cIf_nLsJyPXO, false);
  numBytes += cIf_init(&cIf_GW3S1Fh9, false);
  numBytes += cIf_init(&cIf_AQ9kFQ7Y, false);
  numBytes += cIf_init(&cIf_kId4Pbj6, false);
  numBytes += cIf_init(&cIf_SpGc11S7, false);
  numBytes += cBinop_init(&cBinop_WKNu07jA, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_BSpNs9Td, "floatatom");
  numBytes += cSlice_init(&cSlice_yTlHD2iS, 1, 1);
  numBytes += cSlice_init(&cSlice_Smrpi4UX, 0, 1);
  numBytes += cVar_init_f(&cVar_MKG6Hcmu, 1.0f);
  numBytes += cVar_init_f(&cVar_tCdvK8kB, 1.0f);
  numBytes += cVar_init_f(&cVar_4PqPv9g4, 1.0f);
  numBytes += cVar_init_f(&cVar_hulzbDvv, 0.0f);
  numBytes += cVar_init_s(&cVar_pSEryr89, "floatatom");
  numBytes += sVarf_init(&sVarf_skDEKbB7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JbdvNABy, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_vnYPwbE4, 1, -1);
  numBytes += cSlice_init(&cSlice_vsdzZ5ro, 1, -1);
  numBytes += cSlice_init(&cSlice_PKVTOYOv, 1, -1);
  numBytes += cSlice_init(&cSlice_IVRxcdo7, 1, -1);
  numBytes += cSlice_init(&cSlice_vrU9XxXq, 1, -1);
  numBytes += cSlice_init(&cSlice_sVSHeSiq, 1, -1);
  numBytes += cSlice_init(&cSlice_l6Uci7Qg, 1, -1);
  numBytes += cSlice_init(&cSlice_KVEdpQu5, 1, -1);
  numBytes += cSlice_init(&cSlice_JvFFa0N8, 1, -1);
  numBytes += cSlice_init(&cSlice_mp3ENMrx, 1, -1);
  numBytes += cPack_init(&cPack_XNGGWn3X, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_TYMcxbHg, 1, -1);
  numBytes += cPack_init(&cPack_ozxL4htI, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_tzoqWO7H, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_OlSj51w0, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_twAWR3WU, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_kMgiwvct, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_eSAHdzGy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_d7f71WlD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Q6sFgKqr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZN0mDRGw, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_W8SacLKi, 1, -1);
  numBytes += cSlice_init(&cSlice_1cIMwpby, 1, -1);
  numBytes += cVar_init_f(&cVar_05hMRZ7I, 1.0f);
  numBytes += cIf_init(&cIf_QBNXtwke, false);
  numBytes += cVar_init_f(&cVar_0qxAMtoI, 1.0f);
  numBytes += cPack_init(&cPack_lpQo7VQr, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_Af9gpXbc, 1, 1);
  numBytes += cSlice_init(&cSlice_JDxErB3q, 0, 1);
  numBytes += cVar_init_f(&cVar_WaiUB1pW, 0.0f);
  numBytes += cIf_init(&cIf_bqjbCzZp, false);
  numBytes += cIf_init(&cIf_Zqm3WHfW, false);
  numBytes += cIf_init(&cIf_HPl0X6SD, false);
  numBytes += cIf_init(&cIf_wbGEP4lR, false);
  numBytes += cIf_init(&cIf_aeLnGyq9, false);
  numBytes += cBinop_init(&cBinop_O0cx8PaX, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_gft4yZSL, "floatatom");
  numBytes += cSlice_init(&cSlice_NUNgYMhw, 1, 1);
  numBytes += cSlice_init(&cSlice_B8acZ3W3, 0, 1);
  numBytes += cVar_init_f(&cVar_PGTHVbKI, 1.0f);
  numBytes += cVar_init_f(&cVar_9C9pEKZe, 1.0f);
  numBytes += cVar_init_f(&cVar_t2aO2psJ, 1.0f);
  numBytes += cVar_init_f(&cVar_eaYFzTBY, 0.0f);
  numBytes += cVar_init_s(&cVar_FKQEaHNg, "floatatom");
  numBytes += sVarf_init(&sVarf_elgvhwVh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fawqHQoI, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_DhlFrhqt, 1, -1);
  numBytes += cSlice_init(&cSlice_bbTCIPxy, 1, -1);
  numBytes += cSlice_init(&cSlice_yNkndgYT, 1, -1);
  numBytes += cSlice_init(&cSlice_HegKYtbM, 1, -1);
  numBytes += cSlice_init(&cSlice_4b4lWI0h, 1, -1);
  numBytes += cSlice_init(&cSlice_NbQ3iCNA, 1, -1);
  numBytes += cSlice_init(&cSlice_v0F6MraE, 1, -1);
  numBytes += cSlice_init(&cSlice_xrnnsVqg, 1, -1);
  numBytes += cSlice_init(&cSlice_syMHocvb, 1, -1);
  numBytes += cSlice_init(&cSlice_RN7S9hQo, 1, -1);
  numBytes += cPack_init(&cPack_hDNBCkFt, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_n8NopJbi, 1, -1);
  numBytes += cPack_init(&cPack_sVnZDkc8, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_icuUklYR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QIIKATsa, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_5uuKPZOy, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_grbKgKrQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_r2wpaeT5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4wkZXWdO, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_70tHdQIF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_aroe2NJf, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_5Ha2vFNy, 1.0f);
  numBytes += cIf_init(&cIf_knKe3Lfj, false);
  numBytes += cVar_init_f(&cVar_6cgUlokf, 1.0f);
  numBytes += cPack_init(&cPack_hmAB8tzt, 3, 0.0f, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_rWUPsnzM, 1, 1);
  numBytes += cSlice_init(&cSlice_s1wQR12M, 0, 1);
  numBytes += cVar_init_f(&cVar_M3l3tjnP, 0.0f);
  numBytes += cIf_init(&cIf_kWSAzHd1, false);
  numBytes += cIf_init(&cIf_XWvZVRNv, false);
  numBytes += cIf_init(&cIf_GO4oeD3R, false);
  numBytes += cIf_init(&cIf_vqIsRg2Q, false);
  numBytes += cIf_init(&cIf_x3ViPF1F, false);
  numBytes += cBinop_init(&cBinop_ymObLcLQ, 0.0f); // __eq
  numBytes += cVar_init_s(&cVar_JePpbRaE, "floatatom");
  numBytes += cSlice_init(&cSlice_X3TNztXG, 1, 1);
  numBytes += cSlice_init(&cSlice_N77bmg8l, 0, 1);
  numBytes += cVar_init_f(&cVar_CD3KrNBc, 1.0f);
  numBytes += cVar_init_f(&cVar_d2HNI7d3, 1.0f);
  numBytes += cVar_init_f(&cVar_Ucmvo8zf, 1.0f);
  numBytes += cVar_init_f(&cVar_YpdH2HMR, 0.0f);
  numBytes += cVar_init_s(&cVar_OP6OEFj1, "floatatom");
  numBytes += sVarf_init(&sVarf_Z8kiRdiD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_318npeAw, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_so1qGSL0, 1, -1);
  numBytes += cSlice_init(&cSlice_mnKOW7Hk, 1, -1);
  numBytes += cSlice_init(&cSlice_ZIA2WVFS, 1, -1);
  numBytes += cSlice_init(&cSlice_xZIBc808, 1, -1);
  numBytes += cSlice_init(&cSlice_oaLK7HzS, 1, -1);
  numBytes += cSlice_init(&cSlice_akzwM44p, 1, -1);
  numBytes += cSlice_init(&cSlice_vF9zNMUC, 1, -1);
  numBytes += cSlice_init(&cSlice_966UpVfc, 1, -1);
  numBytes += cSlice_init(&cSlice_d7L6dISa, 1, -1);
  numBytes += cSlice_init(&cSlice_FZSe3mW9, 1, -1);
  numBytes += cPack_init(&cPack_GdfJvlyh, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_P3v6NFOH, 1, -1);
  numBytes += cPack_init(&cPack_vED1Ybna, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_yGsr6RLI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9fmY7yR6, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_Cv1dDpV4, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_iAjC31u8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Urue7WXU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VhG5Kz7l, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_meZvB6MF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jE36np7U, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_egeQv1iL, 1, -1);
  numBytes += cSlice_init(&cSlice_QRpJAP07, 1, -1);
  numBytes += cSlice_init(&cSlice_9SxVDptL, 1, -1);
  numBytes += cSlice_init(&cSlice_tgnZoDJu, 1, -1);
  numBytes += cSlice_init(&cSlice_Rjxc0pYy, 1, -1);
  numBytes += cSlice_init(&cSlice_oiZjGzWn, 1, -1);
  numBytes += cSlice_init(&cSlice_H5k04Fto, 1, -1);
  numBytes += cSlice_init(&cSlice_qeeByfym, 1, -1);
  numBytes += cSlice_init(&cSlice_Vps5Km60, 1, -1);
  numBytes += cSlice_init(&cSlice_ehgQfEOQ, 1, -1);
  numBytes += sVarf_init(&sVarf_U2baHhbY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_SVRaYmMd, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RBLHUtht, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XfanOuS8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rLYxPhwj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_HioGV8zn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oIgqQSB1, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_IRTytDTK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VzrPYTPy, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_hHhZ2LVk, 2, 1);
  numBytes += cSlice_init(&cSlice_97oCxuhE, 1, 1);
  numBytes += cSlice_init(&cSlice_1dDWIbUh, 0, 1);
  numBytes += cVar_init_f(&cVar_q7IjFj0S, 0.0f);
  numBytes += cIf_init(&cIf_2pkFKzhh, false);
  numBytes += cIf_init(&cIf_o5LNOmfX, false);
  numBytes += cIf_init(&cIf_bfbTxEu4, false);
  numBytes += cIf_init(&cIf_mNVlnEET, false);
  numBytes += cIf_init(&cIf_xQy6RNPo, false);
  numBytes += cBinop_init(&cBinop_PVgTc17q, 0.0f); // __eq
  numBytes += cPack_init(&cPack_S5yGOLUF, 2, 0.0f, 0.0f);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Untitled::~Heavy_Untitled() {
  cPack_free(&cPack_ms4tJCZS);
  cPack_free(&cPack_nYfhRJ6u);
  cPack_free(&cPack_41ReFKJm);
  cPack_free(&cPack_4Zx38EEy);
  cPack_free(&cPack_Wy5U85Ed);
  cPack_free(&cPack_6PQ5EIfR);
  cPack_free(&cPack_qHnpBnyQ);
  cPack_free(&cPack_Isik922q);
  cPack_free(&cPack_V2tEQBKh);
  cPack_free(&cPack_iZgNvEyi);
  cPack_free(&cPack_Mrj18aeE);
  cPack_free(&cPack_2BjkCsnQ);
  cPack_free(&cPack_TD05bBC7);
  cPack_free(&cPack_QBCg2nrR);
  cPack_free(&cPack_WEl0yrGq);
  cPack_free(&cPack_Js8sjAH0);
  cPack_free(&cPack_AAejWCOy);
  cPack_free(&cPack_QL8tQpyZ);
  cPack_free(&cPack_wIfxoX9a);
  cPack_free(&cPack_uRQaqjAm);
  cPack_free(&cPack_ePsUrgfZ);
  cPack_free(&cPack_QV2YCfQm);
  cPack_free(&cPack_oP0pUKdr);
  cPack_free(&cPack_gw7QDuDy);
  cPack_free(&cPack_TDA44rWH);
  cPack_free(&cPack_N1tG0Nyf);
  cPack_free(&cPack_s1qHK7bi);
  hTable_free(&hTable_yzGZsCzt);
  hTable_free(&hTable_1CJAv4mb);
  hTable_free(&hTable_TVJ0157f);
  cPack_free(&cPack_QbXZSEFl);
  cPack_free(&cPack_4UudeMfo);
  cPack_free(&cPack_1mIauuRP);
  cPack_free(&cPack_cx6gT1zH);
  cPack_free(&cPack_iMJWrA0d);
  cPack_free(&cPack_LKwnwYgB);
  cPack_free(&cPack_PZinLSmG);
  cPack_free(&cPack_jmpPUtnZ);
  cPack_free(&cPack_WH48RlD3);
  cPack_free(&cPack_3X1Duqq7);
  cPack_free(&cPack_gnGIRCMh);
  cPack_free(&cPack_Bb0jevoi);
  cPack_free(&cPack_LQsI6nq9);
  cPack_free(&cPack_nmIfIyAI);
  cPack_free(&cPack_J2eVXCqg);
  cPack_free(&cPack_4BMLkARK);
  cPack_free(&cPack_XNGGWn3X);
  cPack_free(&cPack_ozxL4htI);
  cPack_free(&cPack_lpQo7VQr);
  cPack_free(&cPack_hDNBCkFt);
  cPack_free(&cPack_sVnZDkc8);
  cPack_free(&cPack_hmAB8tzt);
  cPack_free(&cPack_GdfJvlyh);
  cPack_free(&cPack_vED1Ybna);
  cPack_free(&cPack_S5yGOLUF);
}

HvTable *Heavy_Untitled::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x5CDF1FF2: return &hTable_yzGZsCzt; // 1551-pitches
    case 0xB8FA17E8: return &hTable_1CJAv4mb; // 1551-used
    case 0x4EE5D6C5: return &hTable_TVJ0157f; // 1551-ids
    default: return nullptr;
  }
}

void Heavy_Untitled::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x8DBFA023: { // 1032_midi_msg_1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pvNbjQsr_sendMessage);
      break;
    }
    case 0xBEE4262C: { // 1032_midi_msg_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fjZ1Mrri_sendMessage);
      break;
    }
    case 0xC5A6D720: { // 1032_midi_msg_3
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZLcfojeK_sendMessage);
      break;
    }
    case 0x8CC4457C: { // 1032_midi_msg_4
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_rIG8He9V_sendMessage);
      break;
    }
    case 0x82FD3CC6: { // 1032_midi_msg_5
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_W5rxwpqC_sendMessage);
      break;
    }
    case 0xD3F57E2F: { // 1032_midi_msg_6
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8OzdpKTf_sendMessage);
      break;
    }
    case 0x1490F36F: { // 1032_midi_msg_7
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kstLSRVh_sendMessage);
      break;
    }
    case 0xF87DC3AE: { // 1032_midi_msg_8
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AayLHd4V_sendMessage);
      break;
    }
    case 0xF0237322: { // 1032_voice_presets
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_m3VhSH08_sendMessage);
      break;
    }
    case 0x8AC569C2: { // 1035_presets_1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Pz0XiGkS_sendMessage);
      break;
    }
    case 0x2CA3557F: { // 1035_presets_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pnL96Z0M_sendMessage);
      break;
    }
    case 0x9279BD06: { // 1035_presets_g
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4QYg6ncf_sendMessage);
      break;
    }
    case 0xB22A4A51: { // 1036_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sWPri9Qw_sendMessage);
      break;
    }
    case 0x65891C66: { // 1036_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_G9QFjqHd_sendMessage);
      break;
    }
    case 0xAFCC79B0: { // 1036_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_h6PZrm0M_sendMessage);
      break;
    }
    case 0x261B73C8: { // 1036_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mBAHuBvr_sendMessage);
      break;
    }
    case 0x3EAECA04: { // 1036_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_N0Rb75o6_sendMessage);
      break;
    }
    case 0x38E769D2: { // 1036_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tt2c1oOw_sendMessage);
      break;
    }
    case 0x79F09524: { // 1036_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xDvzGs8u_sendMessage);
      break;
    }
    case 0x4FC799D8: { // 1036_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jxWVlGm0_sendMessage);
      break;
    }
    case 0xB769978E: { // 1036_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fn9PCI5i_sendMessage);
      break;
    }
    case 0x22DD4E1: { // 1036_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qxk3lOpY_sendMessage);
      break;
    }
    case 0xE60C9C70: { // 1036_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OT9ciWmO_sendMessage);
      break;
    }
    case 0x307EE4E7: { // 1100_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QhUJydKS_sendMessage);
      break;
    }
    case 0xBFF5ED0: { // 1100_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XW1aYSNd_sendMessage);
      break;
    }
    case 0xC1DE305E: { // 1100_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xwRruQmN_sendMessage);
      break;
    }
    case 0xE6A9779F: { // 1100_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kNCihHjM_sendMessage);
      break;
    }
    case 0xEF2F4A37: { // 1100_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Kca98wH8_sendMessage);
      break;
    }
    case 0xA8C77247: { // 1100_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uvJWEGDZ_sendMessage);
      break;
    }
    case 0xC48D2787: { // 1100_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jHOFZFDt_sendMessage);
      break;
    }
    case 0x10B530E: { // 1100_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AiA7ggEN_sendMessage);
      break;
    }
    case 0x6C7DB0EE: { // 1100_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mjrctxxa_sendMessage);
      break;
    }
    case 0xD26B1AD1: { // 1100_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sYGCclTH_sendMessage);
      break;
    }
    case 0x2839E06C: { // 1100_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lRWSoASh_sendMessage);
      break;
    }
    case 0x68F9DA6C: { // 1164_presets_1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_x6HmGCRH_sendMessage);
      break;
    }
    case 0x2331CFF: { // 1164_presets_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pnsypTrc_sendMessage);
      break;
    }
    case 0x8D7474D3: { // 1164_presets_g
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zbgUyudN_sendMessage);
      break;
    }
    case 0xE0DBF835: { // 1165_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_s478T6Gh_sendMessage);
      break;
    }
    case 0x62781DBC: { // 1165_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Yr8BgsuX_sendMessage);
      break;
    }
    case 0x16F2F1AF: { // 1165_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ep2LyQ8R_sendMessage);
      break;
    }
    case 0x14207C72: { // 1165_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VGAXsYg7_sendMessage);
      break;
    }
    case 0x7C48377F: { // 1165_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GRQnmAxC_sendMessage);
      break;
    }
    case 0x71B953EC: { // 1165_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bdVjrez0_sendMessage);
      break;
    }
    case 0xB84E43E9: { // 1165_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_f6vzeKju_sendMessage);
      break;
    }
    case 0xB6A22334: { // 1165_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7KgeBsws_sendMessage);
      break;
    }
    case 0xA4DE523A: { // 1165_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UtLcwFIR_sendMessage);
      break;
    }
    case 0x23C6CD1C: { // 1165_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RvNZRcY3_sendMessage);
      break;
    }
    case 0xF7FC235B: { // 1165_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5SKZonon_sendMessage);
      break;
    }
    case 0x7A398E80: { // 1229_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OYlFVCfF_sendMessage);
      break;
    }
    case 0xBB5CA297: { // 1229_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ray7d9XJ_sendMessage);
      break;
    }
    case 0xC3A89E35: { // 1229_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ugkgPAY7_sendMessage);
      break;
    }
    case 0x8152F161: { // 1229_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZeehLNiU_sendMessage);
      break;
    }
    case 0xF48801CA: { // 1229_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zBUMVjQ4_sendMessage);
      break;
    }
    case 0xF12C3452: { // 1229_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RYtbb2nJ_sendMessage);
      break;
    }
    case 0x8B756B24: { // 1229_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UJntILxE_sendMessage);
      break;
    }
    case 0x196DC1F5: { // 1229_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dkGECHM1_sendMessage);
      break;
    }
    case 0xD7BC6908: { // 1229_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1U1ttR6n_sendMessage);
      break;
    }
    case 0x94F8DE40: { // 1229_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aMyLYAMS_sendMessage);
      break;
    }
    case 0xABDE1EFD: { // 1229_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UurKUdrz_sendMessage);
      break;
    }
    case 0xA63A59E2: { // 1293_presets_1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0PZqkoHM_sendMessage);
      break;
    }
    case 0x3707A999: { // 1293_presets_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FJXyOwsj_sendMessage);
      break;
    }
    case 0x20F8C4C6: { // 1293_presets_g
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wqHTL2as_sendMessage);
      break;
    }
    case 0xC7508EAD: { // 1294_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nY89Kmuk_sendMessage);
      break;
    }
    case 0x4DAC05B4: { // 1294_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lRkeYTZW_sendMessage);
      break;
    }
    case 0x2FAFD057: { // 1294_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HL0ZsO5f_sendMessage);
      break;
    }
    case 0x1EBFF4AC: { // 1294_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8nWzEmbo_sendMessage);
      break;
    }
    case 0xBCEBA17D: { // 1294_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VAqqPQWm_sendMessage);
      break;
    }
    case 0xC4FDD3A8: { // 1294_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_eBOSVi4P_sendMessage);
      break;
    }
    case 0xB26BDBD5: { // 1294_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hGRB3r7j_sendMessage);
      break;
    }
    case 0x3625269C: { // 1294_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_rgEASNsG_sendMessage);
      break;
    }
    case 0x1F5D6C8B: { // 1294_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_cpjieji4_sendMessage);
      break;
    }
    case 0xFD7580E9: { // 1294_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4hvNAuoU_sendMessage);
      break;
    }
    case 0x5A87D398: { // 1294_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_cceREs6N_sendMessage);
      break;
    }
    case 0x2F791AC8: { // 1358_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_goq80Tmn_sendMessage);
      break;
    }
    case 0x79758850: { // 1358_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5TAuI9MJ_sendMessage);
      break;
    }
    case 0x123530F0: { // 1358_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_V7Rfbn4i_sendMessage);
      break;
    }
    case 0x9E193F07: { // 1358_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uTZ5vkzH_sendMessage);
      break;
    }
    case 0xE4AA61C0: { // 1358_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_EJAKKF79_sendMessage);
      break;
    }
    case 0x33142AF9: { // 1358_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_K7gXbUth_sendMessage);
      break;
    }
    case 0xA2377889: { // 1358_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_iWd3gysd_sendMessage);
      break;
    }
    case 0x58A60163: { // 1358_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FeeABZSy_sendMessage);
      break;
    }
    case 0x30D8F9E4: { // 1358_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yD28zahH_sendMessage);
      break;
    }
    case 0xC48E49CA: { // 1358_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FCN7s31U_sendMessage);
      break;
    }
    case 0x96B67A99: { // 1358_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dnp1qlPK_sendMessage);
      break;
    }
    case 0x41B2A1B9: { // 1422_presets_1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VYbQ71tp_sendMessage);
      break;
    }
    case 0x2952630B: { // 1422_presets_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bUwPJUFD_sendMessage);
      break;
    }
    case 0x8010AA3E: { // 1422_presets_g
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FdJW9KBc_sendMessage);
      break;
    }
    case 0xFDC5A0AE: { // 1423_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gczRzVNo_sendMessage);
      break;
    }
    case 0xA0B5F602: { // 1423_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_V6dh2Kss_sendMessage);
      break;
    }
    case 0x834AA3F4: { // 1423_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WRlWTpQx_sendMessage);
      break;
    }
    case 0x8F1E22F: { // 1423_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OmcwYAir_sendMessage);
      break;
    }
    case 0xC68F0207: { // 1423_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ctDTLeiD_sendMessage);
      break;
    }
    case 0x674B2482: { // 1423_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xiHKTZYj_sendMessage);
      break;
    }
    case 0xF35FD6AE: { // 1423_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_B1AupDJz_sendMessage);
      break;
    }
    case 0x7B4AEA23: { // 1423_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_S8PmQ37o_sendMessage);
      break;
    }
    case 0x7AA56CAF: { // 1423_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SdX4Od82_sendMessage);
      break;
    }
    case 0xAD914DB6: { // 1423_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fHSU41JL_sendMessage);
      break;
    }
    case 0x9EBE5494: { // 1423_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2YE5Ddrl_sendMessage);
      break;
    }
    case 0x6803970: { // 1487_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dJkcIYSv_sendMessage);
      break;
    }
    case 0xE1D56A59: { // 1487_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_w2kGSjLx_sendMessage);
      break;
    }
    case 0x19E3869: { // 1487_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_eq8iY4pJ_sendMessage);
      break;
    }
    case 0xC9BA29EC: { // 1487_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RBQXIGpe_sendMessage);
      break;
    }
    case 0x8607AF29: { // 1487_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OWQJX8AB_sendMessage);
      break;
    }
    case 0x7C02EBB: { // 1487_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_71MvUvx2_sendMessage);
      break;
    }
    case 0xA339BEB1: { // 1487_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1oq4n42U_sendMessage);
      break;
    }
    case 0x698E9202: { // 1487_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gxVFgBS8_sendMessage);
      break;
    }
    case 0xE41E46B1: { // 1487_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Q6zzcLYU_sendMessage);
      break;
    }
    case 0x11EC1B8A: { // 1487_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dYBCd65l_sendMessage);
      break;
    }
    case 0x9CF9F8C: { // 1487_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_u2dLeBix_sendMessage);
      break;
    }
    case 0xF1D3D9B7: { // 1551-currentVoiceId
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xbMxawFB_sendMessage);
      break;
    }
    case 0xECB3CC39: { // 1551-indexOff
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mzlyeRHz_sendMessage);
      break;
    }
    case 0x15B56E2D: { // 1551-indexOn
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_K7XRV2jC_sendMessage);
      break;
    }
    case 0x8AD04B8A: { // 1551-isFirstOff
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0uRV4xwd_sendMessage);
      break;
    }
    case 0xAEC152C2: { // 1551-isFirstOn
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_iATENhU1_sendMessage);
      break;
    }
    case 0x7768E351: { // 1551-maxVoiceId
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_x6mk0LQo_sendMessage);
      break;
    }
    case 0x91B50A34: { // 1551-shouldSteal
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xstzFzZ3_sendMessage);
      break;
    }
    case 0x1E46DE1E: { // 1551-voiceId++
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jtRs8vkx_sendMessage);
      break;
    }
    case 0x29669454: { // 1627_presets_1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lhKEbms1_sendMessage);
      break;
    }
    case 0xB51C4331: { // 1627_presets_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bbPUVqdQ_sendMessage);
      break;
    }
    case 0x950B93A0: { // 1627_presets_g
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NJjcF6Ax_sendMessage);
      break;
    }
    case 0x2E83C4C8: { // 1628_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_amriBnAQ_sendMessage);
      break;
    }
    case 0x822701E7: { // 1628_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_alxFZCMi_sendMessage);
      break;
    }
    case 0x39F14341: { // 1628_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4HVnENc3_sendMessage);
      break;
    }
    case 0x56596162: { // 1628_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_I2Mbv6YN_sendMessage);
      break;
    }
    case 0x508B04B6: { // 1628_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4RAU41uv_sendMessage);
      break;
    }
    case 0xCA99E6B7: { // 1628_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QVCVoUgg_sendMessage);
      break;
    }
    case 0xD132B5F7: { // 1628_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9Ei8mCAL_sendMessage);
      break;
    }
    case 0x4F8EF5D2: { // 1628_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_t8FcDJqk_sendMessage);
      break;
    }
    case 0x483F4E5F: { // 1628_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2d9wmi2n_sendMessage);
      break;
    }
    case 0x6738BF34: { // 1628_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_MGKtMHPt_sendMessage);
      break;
    }
    case 0x2856497C: { // 1628_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kOLnqRN5_sendMessage);
      break;
    }
    case 0xCD634DC3: { // 1692_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_oIdjvBsP_sendMessage);
      break;
    }
    case 0x9B89999E: { // 1692_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3rtVjkuF_sendMessage);
      break;
    }
    case 0xE49286B7: { // 1692_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_f1MmvNrP_sendMessage);
      break;
    }
    case 0xD6B79EB7: { // 1692_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LEUQyyi4_sendMessage);
      break;
    }
    case 0x6330EB28: { // 1692_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_YQqvAyAi_sendMessage);
      break;
    }
    case 0x39B261BE: { // 1692_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mzF1lPi0_sendMessage);
      break;
    }
    case 0x7849E663: { // 1692_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HRkzPdBF_sendMessage);
      break;
    }
    case 0x5FF8EB4D: { // 1692_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VDikrZjj_sendMessage);
      break;
    }
    case 0x42D5B45A: { // 1692_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WDOnjyKs_sendMessage);
      break;
    }
    case 0x13CB6D7A: { // 1692_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PTl9FZFq_sendMessage);
      break;
    }
    case 0x2B0D2E05: { // 1692_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ssyf6iw0_sendMessage);
      break;
    }
    case 0xE8404537: { // 1756_presets_1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VKfz8Njt_sendMessage);
      break;
    }
    case 0xE1E431A: { // 1756_presets_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1zMuBmuS_sendMessage);
      break;
    }
    case 0x8297B561: { // 1756_presets_g
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1EzvYyDI_sendMessage);
      break;
    }
    case 0xC207CD3B: { // 1757_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3J5aIxzw_sendMessage);
      break;
    }
    case 0x21639FB9: { // 1757_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_iIP57MZj_sendMessage);
      break;
    }
    case 0x41D4380A: { // 1757_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fDoMek6Q_sendMessage);
      break;
    }
    case 0x225E6889: { // 1757_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ad1mZhrB_sendMessage);
      break;
    }
    case 0xF2B81D8E: { // 1757_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PK1woDXd_sendMessage);
      break;
    }
    case 0x5501D9D4: { // 1757_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_klxI3ITb_sendMessage);
      break;
    }
    case 0x8807D6D0: { // 1757_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GT9za2es_sendMessage);
      break;
    }
    case 0x71D4D637: { // 1757_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SzGuBqom_sendMessage);
      break;
    }
    case 0x47DD52DB: { // 1757_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_81gi2F8B_sendMessage);
      break;
    }
    case 0xC10790DD: { // 1757_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DgKepLan_sendMessage);
      break;
    }
    case 0xEBA1B942: { // 1757_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7mmQLkkf_sendMessage);
      break;
    }
    case 0x5B510141: { // 1821_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_F3Wv7Jal_sendMessage);
      break;
    }
    case 0x838362BA: { // 1821_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_suASLOVa_sendMessage);
      break;
    }
    case 0xE9CE3073: { // 1821_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_f4Ubmbga_sendMessage);
      break;
    }
    case 0xC0D61BB6: { // 1821_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_V8WDwH5m_sendMessage);
      break;
    }
    case 0x77AB4EE0: { // 1821_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_p8CezAoV_sendMessage);
      break;
    }
    case 0xF279EDE8: { // 1821_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VetqLdSh_sendMessage);
      break;
    }
    case 0xA5FE4A2A: { // 1821_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ndm7W1KJ_sendMessage);
      break;
    }
    case 0x4B38BDC2: { // 1821_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_H6ad9qAK_sendMessage);
      break;
    }
    case 0xE78E5F87: { // 1821_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dRRJfJcq_sendMessage);
      break;
    }
    case 0x6F644AD6: { // 1821_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SGFuwjPo_sendMessage);
      break;
    }
    case 0x6403BE37: { // 1821_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0I5WdysI_sendMessage);
      break;
    }
    case 0x439A1668: { // 1885_presets_1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ldsNFcNC_sendMessage);
      break;
    }
    case 0xA7D85B53: { // 1885_presets_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_U8Lar2r6_sendMessage);
      break;
    }
    case 0x72B0E7E1: { // 1885_presets_g
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_p1yi4RWk_sendMessage);
      break;
    }
    case 0xF101DAE1: { // 1886_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3NYw92uR_sendMessage);
      break;
    }
    case 0x95B9247F: { // 1886_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7JKF3pJp_sendMessage);
      break;
    }
    case 0x27E7726C: { // 1886_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9GP7OyhF_sendMessage);
      break;
    }
    case 0x752B4453: { // 1886_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2Z1iGdWi_sendMessage);
      break;
    }
    case 0xA485A385: { // 1886_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ujiIC2J7_sendMessage);
      break;
    }
    case 0xF7A5E5D6: { // 1886_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_srw9wTOZ_sendMessage);
      break;
    }
    case 0xA893FB53: { // 1886_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_l74ny3jc_sendMessage);
      break;
    }
    case 0x4F996CA7: { // 1886_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1NHArLCk_sendMessage);
      break;
    }
    case 0x44DDB4DF: { // 1886_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OByuP7Eo_sendMessage);
      break;
    }
    case 0xC8B9A0B0: { // 1886_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yQMaiAD8_sendMessage);
      break;
    }
    case 0xC18BA551: { // 1886_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fThrOeAa_sendMessage);
      break;
    }
    case 0x7B6933F8: { // 1950_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AugloDxk_sendMessage);
      break;
    }
    case 0xA0B523E9: { // 1950_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QhXexdrq_sendMessage);
      break;
    }
    case 0xE5E67AB5: { // 1950_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ru5HoshC_sendMessage);
      break;
    }
    case 0x988FD1C3: { // 1950_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3qkhwjYg_sendMessage);
      break;
    }
    case 0x9D105406: { // 1950_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_JkycOjKC_sendMessage);
      break;
    }
    case 0x8B8FE107: { // 1950_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_C0kVY3hi_sendMessage);
      break;
    }
    case 0x670A7FEA: { // 1950_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Hq3quGwK_sendMessage);
      break;
    }
    case 0x821036B0: { // 1950_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_h0zyme5Y_sendMessage);
      break;
    }
    case 0x696AF4B3: { // 1950_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9ZZwCy5t_sendMessage);
      break;
    }
    case 0x46A60FED: { // 1950_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2X930Jt3_sendMessage);
      break;
    }
    case 0xF5E10367: { // 1950_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_JBIN0Nea_sendMessage);
      break;
    }
    case 0x36681C5E: { // 2014_presets_1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9hlyOgXG_sendMessage);
      break;
    }
    case 0x1716374B: { // 2014_presets_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Tid3Fdtz_sendMessage);
      break;
    }
    case 0x3724BBE9: { // 2014_presets_g
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PFJrkzwr_sendMessage);
      break;
    }
    case 0x302F886F: { // 2015_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0UHLmAMK_sendMessage);
      break;
    }
    case 0xC6503A27: { // 2015_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kjtoRtcL_sendMessage);
      break;
    }
    case 0x40A59F9D: { // 2015_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OaDdFmfW_sendMessage);
      break;
    }
    case 0x9D78E39A: { // 2015_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pTPleUgG_sendMessage);
      break;
    }
    case 0xE2568165: { // 2015_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ma7O8xMx_sendMessage);
      break;
    }
    case 0x7C5371E5: { // 2015_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_V2N2xsPS_sendMessage);
      break;
    }
    case 0xF32E4EF: { // 2015_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SxcDGTov_sendMessage);
      break;
    }
    case 0x93B89BD5: { // 2015_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PFlN9q31_sendMessage);
      break;
    }
    case 0x5C4AE43A: { // 2015_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wfRDQd1P_sendMessage);
      break;
    }
    case 0xD840BA0A: { // 2015_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_J9vo5L9F_sendMessage);
      break;
    }
    case 0xDF40F2F1: { // 2015_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_rQKlmpCi_sendMessage);
      break;
    }
    case 0xE7B4C36: { // 2079_attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AF2ALf1m_sendMessage);
      break;
    }
    case 0xF227E64B: { // 2079_detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_doxgUVfT_sendMessage);
      break;
    }
    case 0xCEF289D1: { // 2079_lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yzh3VN89_sendMessage);
      break;
    }
    case 0xF31932C0: { // 2079_midi_note
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mRlqCrMk_sendMessage);
      break;
    }
    case 0x53E44AD9: { // 2079_midi_vel
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ngqET1tY_sendMessage);
      break;
    }
    case 0x711BB414: { // 2079_octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Gj5OR2ib_sendMessage);
      break;
    }
    case 0x9383B42C: { // 2079_pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_g9w4zcLU_sendMessage);
      break;
    }
    case 0x13EDF95C: { // 2079_release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_smLu2wiE_sendMessage);
      break;
    }
    case 0xCE460956: { // 2079_time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vQ4b0nZX_sendMessage);
      break;
    }
    case 0x5F6E5691: { // 2079_volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lDOGSK0N_sendMessage);
      break;
    }
    case 0x44CCF2CC: { // 2079_waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_h9MSdh2z_sendMessage);
      break;
    }
    case 0x3083F0F7: { // __hv_bendin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VrWb35jf_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_oPKNuXaR_sendMessage);
      break;
    }
    case 0x67E37CA3: { // __hv_notein
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_egIclm4Y_sendMessage);
      break;
    }
    case 0xEB9639BF: { // attack
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_EPrwLsyU_sendMessage);
      break;
    }
    case 0x3861AA6D: { // detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_c3XGOhuw_sendMessage);
      break;
    }
    case 0xF2EC2814: { // detune_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1jaa6YZf_sendMessage);
      break;
    }
    case 0x1205EA9B: { // lfo_amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AKws1oXh_sendMessage);
      break;
    }
    case 0xDB26136B: { // lfo_amount_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_33USMx9y_sendMessage);
      break;
    }
    case 0x67847FF9: { // lfo_freq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_x47lDcoV_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // octave
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qeHbXAYY_sendMessage);
      break;
    }
    case 0x3CEAEB41: { // octave_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_h5WJw1JZ_sendMessage);
      break;
    }
    case 0xEE6E7B8: { // pitch_env
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hMe7PGxx_sendMessage);
      break;
    }
    case 0xAC1A91AF: { // pitch_env_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_BtfpbEBc_sendMessage);
      break;
    }
    case 0x34A8D635: { // release
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_I78xt0KX_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZPhvGKpL_sendMessage);
      break;
    }
    case 0x7F681128: { // time_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_q7RUK0SS_sendMessage);
      break;
    }
    case 0xB05914D: { // voice_presets
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IzovBtTm_sendMessage);
      break;
    }
    case 0xB1642755: { // volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ry9yxjV0_sendMessage);
      break;
    }
    case 0x779CA79A: { // volume_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6bjpiw4p_sendMessage);
      break;
    }
    case 0x6D413ECE: { // waveshape
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_d5feZlk9_sendMessage);
      break;
    }
    case 0x4A169D8C: { // waveshape_2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XuT1YHTM_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_Untitled::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "attack";
        info->hash = 0xEB9639BF;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 1: {
        info->name = "detune";
        info->hash = 0x3861AA6D;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 2: {
        info->name = "detune_2";
        info->hash = 0xF2EC2814;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 3: {
        info->name = "lfo_amount";
        info->hash = 0x1205EA9B;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 4: {
        info->name = "lfo_amount_2";
        info->hash = 0xDB26136B;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 5: {
        info->name = "lfo_freq";
        info->hash = 0x67847FF9;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 6: {
        info->name = "octave";
        info->hash = 0xBE95A6F8;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 7: {
        info->name = "octave_2";
        info->hash = 0x3CEAEB41;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 8: {
        info->name = "pitch_env";
        info->hash = 0xEE6E7B8;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 9: {
        info->name = "pitch_env_2";
        info->hash = 0xAC1A91AF;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 10: {
        info->name = "release";
        info->hash = 0x34A8D635;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 11: {
        info->name = "time";
        info->hash = 0x8E55AA5F;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 12: {
        info->name = "time_2";
        info->hash = 0x7F681128;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 13: {
        info->name = "volume";
        info->hash = 0xB1642755;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 14: {
        info->name = "volume_2";
        info->hash = 0x779CA79A;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 15: {
        info->name = "waveshape";
        info->hash = 0x6D413ECE;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 16: {
        info->name = "waveshape_2";
        info->hash = 0x4A169D8C;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 17;
}



/*
 * Send Function Implementations
 */


void Heavy_Untitled::cVar_8hwBDaR1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VXMDfoKL_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_aRfpLERf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f1J9vBEO_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_E0be3iPi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LcH9hYBk_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_cm1Gzd8C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PulrAWP6_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_Fv5xgjmL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JzVPeG6P_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_tVeQJVEI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HzrcGfgS_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_WDuRPF4n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_V6lagKnt_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_nRemtf7I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ocfyt4CJ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_K7O8mIQ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ORzBJ6HN_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_X2jbbUPs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4ZINuUn6_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_XffgEhuw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JBTYrsUn_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_iIDA6JTg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3iBkufFi_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_3pOwWtlG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TwamFP2I_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_SQS2tnpp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SIGX7k0n_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_aEJwSe8z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8zVhOYPY_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_jbpZq4pP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FaZgNIZN_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_jfMleBYg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oazcbNDk_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cPack_ms4tJCZS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ZbqcIOMS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSlice_WHvdGrCf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cVar_onMessage(_c, &Context(_c)->cVar_bRvOad2A, 0, m, &cVar_bRvOad2A_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_8W7UeSR5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSwitchcase_sytcxcbH_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSwitchcase_QUT4EKz3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x209E13EA: { // "midi_msg"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Sq2BGlIk, 0, m, &cSlice_Sq2BGlIk_sendMessage);
      break;
    }
    case 0x67847FF9: { // "lfo_freq"
      cSlice_onMessage(_c, &Context(_c)->cSlice_69hLcVjm, 0, m, &cSlice_69hLcVjm_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_Sq2BGlIk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_WHvdGrCf, 0, m, &cSlice_WHvdGrCf_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_8W7UeSR5, 0, m, &cSlice_8W7UeSR5_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_WHvdGrCf, 0, m, &cSlice_WHvdGrCf_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_8W7UeSR5, 0, m, &cSlice_8W7UeSR5_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_69hLcVjm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_dssQD7Sh_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_dssQD7Sh_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_q6gSBU4A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_ZK2xFCnz_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_BGdojeJQ_sendMessage);
}

void Heavy_Untitled::cBinop_ZK2xFCnz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_q6gSBU4A, 1, m, &cVar_q6gSBU4A_sendMessage);
}

void Heavy_Untitled::cIf_82ENoIDz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_nYfhRJ6u, 0, m, &cPack_nYfhRJ6u_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_EjHtBhDq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_8IsE14QU_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_82ENoIDz, 1, m, &cIf_82ENoIDz_sendMessage);
}

void Heavy_Untitled::cBinop_8IsE14QU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EjHtBhDq, 1, m, &cVar_EjHtBhDq_sendMessage);
}

void Heavy_Untitled::cPack_nYfhRJ6u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kdx5lKim_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_nWDER41e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_5h7w5wrk_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_RR8pHges_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_Wncw5Jpr, 0, m, &cIf_Wncw5Jpr_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_Mk5Ru78g, 0, m, &cIf_Mk5Ru78g_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_FDb6S0CW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_EaOQkvoi_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_h79F0ZZS, 0, m, &cIf_h79F0ZZS_sendMessage);
}

void Heavy_Untitled::cUnop_3Gdd0I1N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_mItzoeOZ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vtO2LepK, HV_BINOP_EQ, 1, m, &cBinop_vtO2LepK_sendMessage);
}

void Heavy_Untitled::cUnop_f00jx2EK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_mItzoeOZ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vtO2LepK, HV_BINOP_EQ, 1, m, &cBinop_vtO2LepK_sendMessage);
}

void Heavy_Untitled::cIf_h79F0ZZS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_f00jx2EK_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_3Gdd0I1N_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_EaOQkvoi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_h79F0ZZS, 1, m, &cIf_h79F0ZZS_sendMessage);
}

void Heavy_Untitled::cIf_Mk5Ru78g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_5def1ZeP_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_7BswA0Tx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_2sRQxGyo_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_Wncw5Jpr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_5def1ZeP_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_p4sd4Vsr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_2sRQxGyo_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_mItzoeOZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w6YNr5Gr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0lUKNmjl_sendMessage);
}

void Heavy_Untitled::cBinop_5h7w5wrk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vtO2LepK, HV_BINOP_EQ, 0, m, &cBinop_vtO2LepK_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_p4sd4Vsr, 0, m, &cIf_p4sd4Vsr_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_7BswA0Tx, 0, m, &cIf_7BswA0Tx_sendMessage);
}

void Heavy_Untitled::cBinop_vtO2LepK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LXZhgiyE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OJcwGiOq_sendMessage);
}

void Heavy_Untitled::cCast_OJcwGiOq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Wncw5Jpr, 1, m, &cIf_Wncw5Jpr_sendMessage);
}

void Heavy_Untitled::cCast_LXZhgiyE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_7BswA0Tx, 1, m, &cIf_7BswA0Tx_sendMessage);
}

void Heavy_Untitled::cBinop_2sRQxGyo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_0lUKNmjl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Mk5Ru78g, 1, m, &cIf_Mk5Ru78g_sendMessage);
}

void Heavy_Untitled::cCast_w6YNr5Gr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_p4sd4Vsr, 1, m, &cIf_p4sd4Vsr_sendMessage);
}

void Heavy_Untitled::cVar_8dEXQcIu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_80VpjJ6F_sendMessage);
}

void Heavy_Untitled::cSlice_tGCzqbu7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EFag6xNh_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_FfMAvGsp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_PGaNkvvo_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_cP2kwGt7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_qKvufh3Y_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TIGnm9Jp, m);
}

void Heavy_Untitled::cBinop_qKvufh3Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cP2kwGt7, 1, m, &cVar_cP2kwGt7_sendMessage);
}

void Heavy_Untitled::cVar_eeeto0k9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_TwSrj3dy_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_HYGqqZ7z, m);
}

void Heavy_Untitled::cBinop_TwSrj3dy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eeeto0k9, 1, m, &cVar_eeeto0k9_sendMessage);
}

void Heavy_Untitled::cVar_qhKojoBS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_5i83UBBC_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Bk5IbEvT, m);
}

void Heavy_Untitled::cBinop_5i83UBBC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qhKojoBS, 1, m, &cVar_qhKojoBS_sendMessage);
}

void Heavy_Untitled::cCast_K9ieUwzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jxHtxwPY, 0, m, &cVar_jxHtxwPY_sendMessage);
}

void Heavy_Untitled::cVar_jxHtxwPY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_zhZQTYsp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_l0XDKgsu, 0, m, &cVar_l0XDKgsu_sendMessage);
}

void Heavy_Untitled::cVar_l0XDKgsu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_jxSLsrnX_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_mywHPGFQ_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_rPVJxIzi_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_jxSLsrnX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RAgwMumn_sendMessage);
      break;
    }
    default: {
      cMsg_lRd8fFFI_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_RAgwMumn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cP2kwGt7, 0, m, &cVar_cP2kwGt7_sendMessage);
}

void Heavy_Untitled::cSwitchcase_mywHPGFQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mYEuL9TW_sendMessage);
      break;
    }
    default: {
      cMsg_KSBe13cc_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_mYEuL9TW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eeeto0k9, 0, m, &cVar_eeeto0k9_sendMessage);
}

void Heavy_Untitled::cSwitchcase_rPVJxIzi_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wwSStLln_sendMessage);
      break;
    }
    default: {
      cMsg_yijuCoFy_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_wwSStLln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qhKojoBS, 0, m, &cVar_qhKojoBS_sendMessage);
}

void Heavy_Untitled::cMsg_zXWr9XVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sKrCRLDh_sendMessage);
}

void Heavy_Untitled::cSystem_sKrCRLDh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z0A1AnwX_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_z0A1AnwX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Ex3TAtj6_sendMessage);
}

void Heavy_Untitled::cBinop_Ex3TAtj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oP6nUbVn, m);
}

void Heavy_Untitled::cMsg_OBa0t9QO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aA95V2W8_sendMessage);
}

void Heavy_Untitled::cSystem_aA95V2W8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5oYHv4KX_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_5oYHv4KX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_tbcYL9mf_sendMessage);
}

void Heavy_Untitled::cBinop_tbcYL9mf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7XU05AA1, m);
}

void Heavy_Untitled::cSwitchcase_DsrR8Pmg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_yUN3J5kQ, 0, m, &cSlice_yUN3J5kQ_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Tf1DKFiA, 0, m, &cSlice_Tf1DKFiA_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_3IlcEzVP, 0, m, &cSlice_3IlcEzVP_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_SvoRTjC3, 0, m, &cSlice_SvoRTjC3_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VKAPmOuW, 0, m, &cSlice_VKAPmOuW_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YapBWgdw, 0, m, &cSlice_YapBWgdw_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_uLCjTP1p, 0, m, &cSlice_uLCjTP1p_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_BTgJikKM, 0, m, &cSlice_BTgJikKM_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_44YrrFox, 0, m, &cSlice_44YrrFox_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_cpJH9mkO, 0, m, &cSlice_cpJH9mkO_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_yUN3J5kQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_yKhrKehe_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_yKhrKehe_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Tf1DKFiA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_tGCzqbu7, 0, m, &cSlice_tGCzqbu7_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_FfMAvGsp, 0, m, &cSlice_FfMAvGsp_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_tGCzqbu7, 0, m, &cSlice_tGCzqbu7_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_FfMAvGsp, 0, m, &cSlice_FfMAvGsp_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_3IlcEzVP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uAjdmlm9_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_uAjdmlm9_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_SvoRTjC3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_QflRW1MO_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_QflRW1MO_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_VKAPmOuW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_zlgnFMEA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_zlgnFMEA_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_YapBWgdw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_0EsUJYaZ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_0EsUJYaZ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_uLCjTP1p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lL70uLpo_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_lL70uLpo_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_BTgJikKM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_UVEWiPpf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_UVEWiPpf_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_44YrrFox_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_afovkD1V_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_afovkD1V_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_cpJH9mkO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_mKoHU5Df_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_mKoHU5Df_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_41ReFKJm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pW0sg1bR_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_XLBszqdo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2MXVSYb9, 0, m, &cSlice_2MXVSYb9_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_41ReFKJm, 0, m, &cPack_41ReFKJm_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_2MXVSYb9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_4Zx38EEy, 0, m, &cPack_4Zx38EEy_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_4Zx38EEy, 0, m, &cPack_4Zx38EEy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_4Zx38EEy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_86Eb08e0_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_BGdojeJQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zJcyMWIN, m);
}

void Heavy_Untitled::cBinop_ckhsgub6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_ZMSueo6I_sendMessage);
}

void Heavy_Untitled::cBinop_ZMSueo6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_H3xH3lpg, m);
}

void Heavy_Untitled::cMsg_kdx5lKim_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_PmsMC0KJ, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_PmsMC0KJ, 0, m, NULL);
}

void Heavy_Untitled::cBinop_JqZ1bf9e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_nYfhRJ6u, 1, m, &cPack_nYfhRJ6u_sendMessage);
}

void Heavy_Untitled::cCast_tniSKvNn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JqZ1bf9e, HV_BINOP_ADD, 0, m, &cBinop_JqZ1bf9e_sendMessage);
}

void Heavy_Untitled::cCast_gLMNFOd0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JqZ1bf9e, HV_BINOP_ADD, 1, m, &cBinop_JqZ1bf9e_sendMessage);
}

void Heavy_Untitled::cBinop_5def1ZeP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8dEXQcIu, 0, m, &cVar_8dEXQcIu_sendMessage);
}

void Heavy_Untitled::cBinop_80VpjJ6F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_uCM1phox_sendMessage);
}

void Heavy_Untitled::cBinop_uCM1phox_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_q7byj4PS_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_IhKsix6N, 0, m, NULL);
}

void Heavy_Untitled::cMsg_q7byj4PS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_IhKsix6N, 0, m, NULL);
}

void Heavy_Untitled::cSend_yKhrKehe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xDvzGs8u_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_PGaNkvvo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mBAHuBvr_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_EFag6xNh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_N0Rb75o6_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_uAjdmlm9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fn9PCI5i_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_QflRW1MO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tt2c1oOw_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_zlgnFMEA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_G9QFjqHd_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_0EsUJYaZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_h6PZrm0M_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_veURLP2R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_FdG4bUK9_sendMessage);
}

void Heavy_Untitled::cBinop_FdG4bUK9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_19Y1OOj2_sendMessage);
}

void Heavy_Untitled::cBinop_19Y1OOj2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gLMNFOd0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tniSKvNn_sendMessage);
}

void Heavy_Untitled::cBinop_sYE7l8Va_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_nYfhRJ6u, 2, m, &cPack_nYfhRJ6u_sendMessage);
}

void Heavy_Untitled::cSend_UVEWiPpf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jxWVlGm0_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_lL70uLpo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_sWPri9Qw_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_zhZQTYsp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_WGgo6YFO_sendMessage);
}

void Heavy_Untitled::cMsg_lRd8fFFI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_cP2kwGt7, 0, m, &cVar_cP2kwGt7_sendMessage);
}

void Heavy_Untitled::cMsg_KSBe13cc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_eeeto0k9, 0, m, &cVar_eeeto0k9_sendMessage);
}

void Heavy_Untitled::cMsg_yijuCoFy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_qhKojoBS, 0, m, &cVar_qhKojoBS_sendMessage);
}

void Heavy_Untitled::cBinop_WGgo6YFO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jxHtxwPY, 1, m, &cVar_jxHtxwPY_sendMessage);
}

void Heavy_Untitled::cBinop_GjFBo1wX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_41ReFKJm, 1, m, &cPack_41ReFKJm_sendMessage);
}

void Heavy_Untitled::cBinop_5T0Y3LWQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_4Zx38EEy, 1, m, &cPack_4Zx38EEy_sendMessage);
}

void Heavy_Untitled::cSend_afovkD1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OT9ciWmO_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_mKoHU5Df_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qxk3lOpY_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_GpTE1YYi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_XLBszqdo_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_pW0sg1bR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_zMfDgr78, 0, m, NULL);
}

void Heavy_Untitled::cMsg_86Eb08e0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_zMfDgr78, 0, m, NULL);
}

void Heavy_Untitled::cVar_fkSbbs5j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_fmH6d1Vu_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_u21SWUdi_sendMessage);
}

void Heavy_Untitled::cBinop_fmH6d1Vu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fkSbbs5j, 1, m, &cVar_fkSbbs5j_sendMessage);
}

void Heavy_Untitled::cIf_9PLUYGIV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_Wy5U85Ed, 0, m, &cPack_Wy5U85Ed_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_Y8Dvxb8n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_TyGsZBEU_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_9PLUYGIV, 1, m, &cIf_9PLUYGIV_sendMessage);
}

void Heavy_Untitled::cBinop_TyGsZBEU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Y8Dvxb8n, 1, m, &cVar_Y8Dvxb8n_sendMessage);
}

void Heavy_Untitled::cPack_Wy5U85Ed_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Rg7NLHs3_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_UcVQFB8Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_uJDvnZAJ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_6fPXXwVY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_c16kICSU, 0, m, &cIf_c16kICSU_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_GR1UZES4, 0, m, &cIf_GR1UZES4_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_4tCznaMI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_o5p7d1T2_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_pJbA4F6N, 0, m, &cIf_pJbA4F6N_sendMessage);
}

void Heavy_Untitled::cUnop_jI2kAszy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_mU65jxAX_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1ClOmHEa, HV_BINOP_EQ, 1, m, &cBinop_1ClOmHEa_sendMessage);
}

void Heavy_Untitled::cUnop_7TkUnspx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_mU65jxAX_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1ClOmHEa, HV_BINOP_EQ, 1, m, &cBinop_1ClOmHEa_sendMessage);
}

void Heavy_Untitled::cIf_pJbA4F6N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_7TkUnspx_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_jI2kAszy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_o5p7d1T2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_pJbA4F6N, 1, m, &cIf_pJbA4F6N_sendMessage);
}

void Heavy_Untitled::cIf_GR1UZES4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_zDcQBwbH_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_8FEu4y2n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_f1YdpJYh_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_c16kICSU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_zDcQBwbH_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_CIENsR06_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_f1YdpJYh_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_mU65jxAX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_89FK3VzQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EzENkRka_sendMessage);
}

void Heavy_Untitled::cBinop_uJDvnZAJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1ClOmHEa, HV_BINOP_EQ, 0, m, &cBinop_1ClOmHEa_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_CIENsR06, 0, m, &cIf_CIENsR06_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_8FEu4y2n, 0, m, &cIf_8FEu4y2n_sendMessage);
}

void Heavy_Untitled::cBinop_1ClOmHEa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Svv9rmeA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V9jwHL1U_sendMessage);
}

void Heavy_Untitled::cCast_Svv9rmeA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_8FEu4y2n, 1, m, &cIf_8FEu4y2n_sendMessage);
}

void Heavy_Untitled::cCast_V9jwHL1U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_c16kICSU, 1, m, &cIf_c16kICSU_sendMessage);
}

void Heavy_Untitled::cBinop_f1YdpJYh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_EzENkRka_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GR1UZES4, 1, m, &cIf_GR1UZES4_sendMessage);
}

void Heavy_Untitled::cCast_89FK3VzQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_CIENsR06, 1, m, &cIf_CIENsR06_sendMessage);
}

void Heavy_Untitled::cVar_li7TtFDm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_Fqf2p3wT_sendMessage);
}

void Heavy_Untitled::cSlice_bg7rYkc9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XKxF64Hw_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_bdAWN33d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_dzCugzdf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_jvcLtutK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_chiPww0N_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_yXfqWA6Y, m);
}

void Heavy_Untitled::cBinop_chiPww0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jvcLtutK, 1, m, &cVar_jvcLtutK_sendMessage);
}

void Heavy_Untitled::cVar_JLPODnPZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_5tlPwaZ4_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_PjsLP8fz, m);
}

void Heavy_Untitled::cBinop_5tlPwaZ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JLPODnPZ, 1, m, &cVar_JLPODnPZ_sendMessage);
}

void Heavy_Untitled::cVar_yFApSJ70_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_kDErQvTN_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_3SJhthoj, m);
}

void Heavy_Untitled::cBinop_kDErQvTN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yFApSJ70, 1, m, &cVar_yFApSJ70_sendMessage);
}

void Heavy_Untitled::cCast_RZ9YgnBv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XL3IBlWo, 0, m, &cVar_XL3IBlWo_sendMessage);
}

void Heavy_Untitled::cVar_XL3IBlWo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_dBYIefO8_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_3xIb0ZKL, 0, m, &cVar_3xIb0ZKL_sendMessage);
}

void Heavy_Untitled::cVar_3xIb0ZKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Sx1aMBln_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_lwCLZftd_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_2m5S6JtP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_Sx1aMBln_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yVTIP6Q1_sendMessage);
      break;
    }
    default: {
      cMsg_FsB7Fkyg_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_yVTIP6Q1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jvcLtutK, 0, m, &cVar_jvcLtutK_sendMessage);
}

void Heavy_Untitled::cSwitchcase_lwCLZftd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4riCLdFU_sendMessage);
      break;
    }
    default: {
      cMsg_HU0cKS5s_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_4riCLdFU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JLPODnPZ, 0, m, &cVar_JLPODnPZ_sendMessage);
}

void Heavy_Untitled::cSwitchcase_2m5S6JtP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RMYWC0kc_sendMessage);
      break;
    }
    default: {
      cMsg_3qdEo0EJ_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_RMYWC0kc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yFApSJ70, 0, m, &cVar_yFApSJ70_sendMessage);
}

void Heavy_Untitled::cMsg_xfbwMRSA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TSntaVpm_sendMessage);
}

void Heavy_Untitled::cSystem_TSntaVpm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_50vsA6SV_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_50vsA6SV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_QO4tlg0Z_sendMessage);
}

void Heavy_Untitled::cBinop_QO4tlg0Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_046xjfal, m);
}

void Heavy_Untitled::cMsg_lGrrG1QK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_iptDw2D3_sendMessage);
}

void Heavy_Untitled::cSystem_iptDw2D3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JkZ1IgYd_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_JkZ1IgYd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_PR9juJId_sendMessage);
}

void Heavy_Untitled::cBinop_PR9juJId_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MoEy4uIf, m);
}

void Heavy_Untitled::cSwitchcase_AnCHzcmY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oWUN5oMz, 0, m, &cSlice_oWUN5oMz_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_TdTXBmKB, 0, m, &cSlice_TdTXBmKB_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_FSgk0ZF1, 0, m, &cSlice_FSgk0ZF1_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_HlR60L1x, 0, m, &cSlice_HlR60L1x_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xsbaY9Yh, 0, m, &cSlice_xsbaY9Yh_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_h8o5QYql, 0, m, &cSlice_h8o5QYql_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_svT126hM, 0, m, &cSlice_svT126hM_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ktnu7xOc, 0, m, &cSlice_ktnu7xOc_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_WfKcjqL8, 0, m, &cSlice_WfKcjqL8_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2O9rTlYn, 0, m, &cSlice_2O9rTlYn_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_oWUN5oMz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ZCbXYBKV_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ZCbXYBKV_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_TdTXBmKB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_bg7rYkc9, 0, m, &cSlice_bg7rYkc9_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_bdAWN33d, 0, m, &cSlice_bdAWN33d_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_bg7rYkc9, 0, m, &cSlice_bg7rYkc9_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_bdAWN33d, 0, m, &cSlice_bdAWN33d_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_FSgk0ZF1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Q8KrkpSJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Q8KrkpSJ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_HlR60L1x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_mfgJIKv4_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_mfgJIKv4_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_xsbaY9Yh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_3qVHnifb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_3qVHnifb_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_h8o5QYql_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ZE0kr0eY_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ZE0kr0eY_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_svT126hM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_vD6RM1dZ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_vD6RM1dZ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_ktnu7xOc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_LjV0PYZ1_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_LjV0PYZ1_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_WfKcjqL8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Tn06tHFb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Tn06tHFb_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_2O9rTlYn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kkBkbuZd_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_kkBkbuZd_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_6PQ5EIfR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_69fKDr7n_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_XtK57K5W_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_JWvETIyj, 0, m, &cSlice_JWvETIyj_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_6PQ5EIfR, 0, m, &cPack_6PQ5EIfR_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_JWvETIyj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_qHnpBnyQ, 0, m, &cPack_qHnpBnyQ_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_qHnpBnyQ, 0, m, &cPack_qHnpBnyQ_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_qHnpBnyQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KqKEsj1Q_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_u21SWUdi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8xgRoS7N, m);
}

void Heavy_Untitled::cBinop_8fCyVk72_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_hN2KTWDm_sendMessage);
}

void Heavy_Untitled::cBinop_hN2KTWDm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_F32B556E, m);
}

void Heavy_Untitled::cMsg_Rg7NLHs3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_CQHcKh0V, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_CQHcKh0V, 0, m, NULL);
}

void Heavy_Untitled::cBinop_8ToBVNEF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Wy5U85Ed, 1, m, &cPack_Wy5U85Ed_sendMessage);
}

void Heavy_Untitled::cCast_Xt1XpDCV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8ToBVNEF, HV_BINOP_ADD, 1, m, &cBinop_8ToBVNEF_sendMessage);
}

void Heavy_Untitled::cCast_UVGXHuhV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8ToBVNEF, HV_BINOP_ADD, 0, m, &cBinop_8ToBVNEF_sendMessage);
}

void Heavy_Untitled::cBinop_zDcQBwbH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_li7TtFDm, 0, m, &cVar_li7TtFDm_sendMessage);
}

void Heavy_Untitled::cBinop_Fqf2p3wT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_tThh79uY_sendMessage);
}

void Heavy_Untitled::cBinop_tThh79uY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sshwBdmo_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_KDdJwPvd, 0, m, NULL);
}

void Heavy_Untitled::cMsg_sshwBdmo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_KDdJwPvd, 0, m, NULL);
}

void Heavy_Untitled::cSend_ZCbXYBKV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jHOFZFDt_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_dzCugzdf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kNCihHjM_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_XKxF64Hw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Kca98wH8_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Q8KrkpSJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mjrctxxa_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_mfgJIKv4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uvJWEGDZ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_3qVHnifb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XW1aYSNd_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_ZE0kr0eY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xwRruQmN_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_L2lK28Pt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_iwmjbiRD_sendMessage);
}

void Heavy_Untitled::cBinop_iwmjbiRD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_hRstlTUu_sendMessage);
}

void Heavy_Untitled::cBinop_hRstlTUu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Xt1XpDCV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UVGXHuhV_sendMessage);
}

void Heavy_Untitled::cBinop_3DDTvKmx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Wy5U85Ed, 2, m, &cPack_Wy5U85Ed_sendMessage);
}

void Heavy_Untitled::cSend_LjV0PYZ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AiA7ggEN_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_vD6RM1dZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QhUJydKS_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_dBYIefO8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_7AwcayMA_sendMessage);
}

void Heavy_Untitled::cMsg_FsB7Fkyg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_jvcLtutK, 0, m, &cVar_jvcLtutK_sendMessage);
}

void Heavy_Untitled::cMsg_HU0cKS5s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_JLPODnPZ, 0, m, &cVar_JLPODnPZ_sendMessage);
}

void Heavy_Untitled::cMsg_3qdEo0EJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_yFApSJ70, 0, m, &cVar_yFApSJ70_sendMessage);
}

void Heavy_Untitled::cBinop_7AwcayMA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XL3IBlWo, 1, m, &cVar_XL3IBlWo_sendMessage);
}

void Heavy_Untitled::cBinop_e6PJfM3x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_6PQ5EIfR, 1, m, &cPack_6PQ5EIfR_sendMessage);
}

void Heavy_Untitled::cBinop_tAlkjIZJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_qHnpBnyQ, 1, m, &cPack_qHnpBnyQ_sendMessage);
}

void Heavy_Untitled::cSend_Tn06tHFb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_lRWSoASh_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_kkBkbuZd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_sYGCclTH_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_zoWhXKqw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_XtK57K5W_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_69fKDr7n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_0dMvHCx0, 0, m, NULL);
}

void Heavy_Untitled::cMsg_KqKEsj1Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_0dMvHCx0, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_IYEqQOod_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_dyJvC86f, 0, m, &cSlice_dyJvC86f_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oM7YXdwk, 0, m, &cSlice_oM7YXdwk_sendMessage);
      break;
    }
    default: {
      cSend_XtHXfp0N_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_dyJvC86f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_UjMwuHER_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_UjMwuHER_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_oM7YXdwk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_U6FJ7xtm_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_U6FJ7xtm_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSend_UjMwuHER_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Pz0XiGkS_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_U6FJ7xtm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pnL96Z0M_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_XtHXfp0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4QYg6ncf_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_wqDEbLRj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Gm0UA9g7_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_jtennizo_sendMessage);
}

void Heavy_Untitled::cBinop_Gm0UA9g7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wqDEbLRj, 1, m, &cVar_wqDEbLRj_sendMessage);
}

void Heavy_Untitled::cIf_hBEBeEOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_Isik922q, 0, m, &cPack_Isik922q_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_lobgS3FS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_tZCtnUpp_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_hBEBeEOp, 1, m, &cIf_hBEBeEOp_sendMessage);
}

void Heavy_Untitled::cBinop_tZCtnUpp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lobgS3FS, 1, m, &cVar_lobgS3FS_sendMessage);
}

void Heavy_Untitled::cPack_Isik922q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_A5uFcjGO_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_MIDRRCgR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_j5xTCNeZ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_b0Sz0ZuQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_MkuRQSmv, 0, m, &cIf_MkuRQSmv_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_Bqg32ZdO, 0, m, &cIf_Bqg32ZdO_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_JOCTvkMZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_4FrLiLFW_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_cc2IrXGj, 0, m, &cIf_cc2IrXGj_sendMessage);
}

void Heavy_Untitled::cUnop_bR4UDYXs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_jamV6GYv_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yJbzGe7Q, HV_BINOP_EQ, 1, m, &cBinop_yJbzGe7Q_sendMessage);
}

void Heavy_Untitled::cUnop_tuueBPLx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_jamV6GYv_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yJbzGe7Q, HV_BINOP_EQ, 1, m, &cBinop_yJbzGe7Q_sendMessage);
}

void Heavy_Untitled::cIf_cc2IrXGj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_tuueBPLx_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_bR4UDYXs_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_4FrLiLFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_cc2IrXGj, 1, m, &cIf_cc2IrXGj_sendMessage);
}

void Heavy_Untitled::cIf_Bqg32ZdO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_cTDvRW6D_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_cWrHfSEF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_9vplmN9C_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_MkuRQSmv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_cTDvRW6D_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_IHQF4ypO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_9vplmN9C_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_jamV6GYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UBWNYtW0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_693RWiUK_sendMessage);
}

void Heavy_Untitled::cBinop_j5xTCNeZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yJbzGe7Q, HV_BINOP_EQ, 0, m, &cBinop_yJbzGe7Q_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_IHQF4ypO, 0, m, &cIf_IHQF4ypO_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_cWrHfSEF, 0, m, &cIf_cWrHfSEF_sendMessage);
}

void Heavy_Untitled::cBinop_yJbzGe7Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t7qSv16L_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RV8xCVwd_sendMessage);
}

void Heavy_Untitled::cCast_RV8xCVwd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_MkuRQSmv, 1, m, &cIf_MkuRQSmv_sendMessage);
}

void Heavy_Untitled::cCast_t7qSv16L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_cWrHfSEF, 1, m, &cIf_cWrHfSEF_sendMessage);
}

void Heavy_Untitled::cBinop_9vplmN9C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_693RWiUK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Bqg32ZdO, 1, m, &cIf_Bqg32ZdO_sendMessage);
}

void Heavy_Untitled::cCast_UBWNYtW0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_IHQF4ypO, 1, m, &cIf_IHQF4ypO_sendMessage);
}

void Heavy_Untitled::cVar_vUxxxDju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_ElXzbVyR_sendMessage);
}

void Heavy_Untitled::cSlice_EZKfnQFy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_U3POnmc8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_KbBZUmTl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FcTLHKK9_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_5dVyCVs4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_OrcIHw5t_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_UPTqzg7l, m);
}

void Heavy_Untitled::cBinop_OrcIHw5t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5dVyCVs4, 1, m, &cVar_5dVyCVs4_sendMessage);
}

void Heavy_Untitled::cVar_YqI14Z42_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_rtCnyiaa_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_3PK8ohpr, m);
}

void Heavy_Untitled::cBinop_rtCnyiaa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YqI14Z42, 1, m, &cVar_YqI14Z42_sendMessage);
}

void Heavy_Untitled::cVar_i1wkGUjX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_65r6W4Di_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_hCgaW25B, m);
}

void Heavy_Untitled::cBinop_65r6W4Di_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_i1wkGUjX, 1, m, &cVar_i1wkGUjX_sendMessage);
}

void Heavy_Untitled::cCast_of2gayZu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_78hGbhXr, 0, m, &cVar_78hGbhXr_sendMessage);
}

void Heavy_Untitled::cVar_78hGbhXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_7tKtYtb6_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_rLd9DwgB, 0, m, &cVar_rLd9DwgB_sendMessage);
}

void Heavy_Untitled::cVar_rLd9DwgB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Zc3xjDFQ_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_QQKPvdkK_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_apR2Ptew_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_Zc3xjDFQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t5uDX2Yt_sendMessage);
      break;
    }
    default: {
      cMsg_TXYpIJdT_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_t5uDX2Yt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5dVyCVs4, 0, m, &cVar_5dVyCVs4_sendMessage);
}

void Heavy_Untitled::cSwitchcase_QQKPvdkK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K1oZiM4e_sendMessage);
      break;
    }
    default: {
      cMsg_dMVWfvFM_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_K1oZiM4e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YqI14Z42, 0, m, &cVar_YqI14Z42_sendMessage);
}

void Heavy_Untitled::cSwitchcase_apR2Ptew_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NwQErgYO_sendMessage);
      break;
    }
    default: {
      cMsg_LrqUZClW_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_NwQErgYO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_i1wkGUjX, 0, m, &cVar_i1wkGUjX_sendMessage);
}

void Heavy_Untitled::cMsg_MyvjSfy7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_NsLZfhnj_sendMessage);
}

void Heavy_Untitled::cSystem_NsLZfhnj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n717eSZC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_n717eSZC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_IXGNGov3_sendMessage);
}

void Heavy_Untitled::cBinop_IXGNGov3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dZ0w2RFw, m);
}

void Heavy_Untitled::cMsg_66CVssXV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FhK33qFU_sendMessage);
}

void Heavy_Untitled::cSystem_FhK33qFU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IP1hom2R_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_IP1hom2R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1Cpkp7qm_sendMessage);
}

void Heavy_Untitled::cBinop_1Cpkp7qm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZqXFS7tC, m);
}

void Heavy_Untitled::cSwitchcase_ZB76NCpc_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_23B1xEFE, 0, m, &cSlice_23B1xEFE_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5OWmq88Y, 0, m, &cSlice_5OWmq88Y_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_aVLvwI1W, 0, m, &cSlice_aVLvwI1W_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vwdjnr5X, 0, m, &cSlice_vwdjnr5X_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_LKBwOcMJ, 0, m, &cSlice_LKBwOcMJ_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_R4ALUzHg, 0, m, &cSlice_R4ALUzHg_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_XtmDXTdV, 0, m, &cSlice_XtmDXTdV_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xEpvFWMQ, 0, m, &cSlice_xEpvFWMQ_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_fVZtcVzl, 0, m, &cSlice_fVZtcVzl_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_PM8XH7py, 0, m, &cSlice_PM8XH7py_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_23B1xEFE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fQbBv23m_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_fQbBv23m_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_5OWmq88Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_EZKfnQFy, 0, m, &cSlice_EZKfnQFy_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_KbBZUmTl, 0, m, &cSlice_KbBZUmTl_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_EZKfnQFy, 0, m, &cSlice_EZKfnQFy_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_KbBZUmTl, 0, m, &cSlice_KbBZUmTl_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_aVLvwI1W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_gE3aGOMH_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_gE3aGOMH_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_vwdjnr5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_NlvNP1Yl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_NlvNP1Yl_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_LKBwOcMJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_xJhb9Ghz_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_xJhb9Ghz_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_R4ALUzHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_oeDhvA1v_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_oeDhvA1v_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_XtmDXTdV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_P6d2vBWG_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_P6d2vBWG_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_xEpvFWMQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_3x0FZXmW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_3x0FZXmW_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_fVZtcVzl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_pvAgul08_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_pvAgul08_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_PM8XH7py_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XQ3je2UP_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_XQ3je2UP_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_V2tEQBKh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z6ofdmOx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_9TTY0ZOv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8YP6bA98, 0, m, &cSlice_8YP6bA98_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_V2tEQBKh, 0, m, &cPack_V2tEQBKh_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_8YP6bA98_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_iZgNvEyi, 0, m, &cPack_iZgNvEyi_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_iZgNvEyi, 0, m, &cPack_iZgNvEyi_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_iZgNvEyi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NHVtIqbk_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_jtennizo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OrgYdfCK, m);
}

void Heavy_Untitled::cBinop_35O5Jraa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_cxmhcMQa_sendMessage);
}

void Heavy_Untitled::cBinop_cxmhcMQa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8NSkn7Ns, m);
}

void Heavy_Untitled::cMsg_A5uFcjGO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_iuhJ2gXy, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_iuhJ2gXy, 0, m, NULL);
}

void Heavy_Untitled::cBinop_sa9FEwcJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Isik922q, 1, m, &cPack_Isik922q_sendMessage);
}

void Heavy_Untitled::cCast_dOkIPCyr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sa9FEwcJ, HV_BINOP_ADD, 0, m, &cBinop_sa9FEwcJ_sendMessage);
}

void Heavy_Untitled::cCast_lrqeXTAw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sa9FEwcJ, HV_BINOP_ADD, 1, m, &cBinop_sa9FEwcJ_sendMessage);
}

void Heavy_Untitled::cBinop_cTDvRW6D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vUxxxDju, 0, m, &cVar_vUxxxDju_sendMessage);
}

void Heavy_Untitled::cBinop_ElXzbVyR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_Nb0YabnW_sendMessage);
}

void Heavy_Untitled::cBinop_Nb0YabnW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aJd0RX9A_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_jIumIt7I, 0, m, NULL);
}

void Heavy_Untitled::cMsg_aJd0RX9A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_jIumIt7I, 0, m, NULL);
}

void Heavy_Untitled::cSend_fQbBv23m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_f6vzeKju_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_FcTLHKK9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VGAXsYg7_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_U3POnmc8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GRQnmAxC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_gE3aGOMH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UtLcwFIR_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_NlvNP1Yl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_bdVjrez0_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_xJhb9Ghz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Yr8BgsuX_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_oeDhvA1v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Ep2LyQ8R_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_YMW6tjuY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_KYZWM5MP_sendMessage);
}

void Heavy_Untitled::cBinop_KYZWM5MP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_ASEbJ1P6_sendMessage);
}

void Heavy_Untitled::cBinop_ASEbJ1P6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lrqeXTAw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dOkIPCyr_sendMessage);
}

void Heavy_Untitled::cBinop_Sxi7EST3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Isik922q, 2, m, &cPack_Isik922q_sendMessage);
}

void Heavy_Untitled::cSend_3x0FZXmW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7KgeBsws_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_P6d2vBWG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s478T6Gh_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_7tKtYtb6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_Cj5driG7_sendMessage);
}

void Heavy_Untitled::cMsg_TXYpIJdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_5dVyCVs4, 0, m, &cVar_5dVyCVs4_sendMessage);
}

void Heavy_Untitled::cMsg_dMVWfvFM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_YqI14Z42, 0, m, &cVar_YqI14Z42_sendMessage);
}

void Heavy_Untitled::cMsg_LrqUZClW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_i1wkGUjX, 0, m, &cVar_i1wkGUjX_sendMessage);
}

void Heavy_Untitled::cBinop_Cj5driG7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_78hGbhXr, 1, m, &cVar_78hGbhXr_sendMessage);
}

void Heavy_Untitled::cBinop_SC89ZqRb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_V2tEQBKh, 1, m, &cPack_V2tEQBKh_sendMessage);
}

void Heavy_Untitled::cBinop_4vZuhqLG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_iZgNvEyi, 1, m, &cPack_iZgNvEyi_sendMessage);
}

void Heavy_Untitled::cSend_pvAgul08_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5SKZonon_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_XQ3je2UP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_RvNZRcY3_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_9iVx35SN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_9TTY0ZOv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_z6ofdmOx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_86qnBhlM, 0, m, NULL);
}

void Heavy_Untitled::cMsg_NHVtIqbk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_86qnBhlM, 0, m, NULL);
}

void Heavy_Untitled::cVar_0eppjdlV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_OW8WpvSK_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_0sYlBDRw_sendMessage);
}

void Heavy_Untitled::cBinop_OW8WpvSK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0eppjdlV, 1, m, &cVar_0eppjdlV_sendMessage);
}

void Heavy_Untitled::cIf_p6yZA3NU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_Mrj18aeE, 0, m, &cPack_Mrj18aeE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_BQwFbWE2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_TENyk6j4_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_p6yZA3NU, 1, m, &cIf_p6yZA3NU_sendMessage);
}

void Heavy_Untitled::cBinop_TENyk6j4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BQwFbWE2, 1, m, &cVar_BQwFbWE2_sendMessage);
}

void Heavy_Untitled::cPack_Mrj18aeE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cRSn4Z6f_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_CooJrV4H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_7KWp2Smi_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Ls7cpEN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_lEeLgaHf, 0, m, &cIf_lEeLgaHf_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_wvmw7d3b, 0, m, &cIf_wvmw7d3b_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_ILktxGl6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_oJf3nZHC_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_mxP7M6Cm, 0, m, &cIf_mxP7M6Cm_sendMessage);
}

void Heavy_Untitled::cUnop_2UCsW19n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_pJoRSjjr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_lvJD4MFo, HV_BINOP_EQ, 1, m, &cBinop_lvJD4MFo_sendMessage);
}

void Heavy_Untitled::cUnop_rGjbOjJt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_pJoRSjjr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_lvJD4MFo, HV_BINOP_EQ, 1, m, &cBinop_lvJD4MFo_sendMessage);
}

void Heavy_Untitled::cIf_mxP7M6Cm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_rGjbOjJt_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_2UCsW19n_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_oJf3nZHC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mxP7M6Cm, 1, m, &cIf_mxP7M6Cm_sendMessage);
}

void Heavy_Untitled::cIf_wvmw7d3b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_1BuKoYfr_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_Mm7VbXtC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_wYUddlLt_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_lEeLgaHf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_1BuKoYfr_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_76oo7VCv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_wYUddlLt_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_pJoRSjjr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_d0HJpJd2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_drLSdcao_sendMessage);
}

void Heavy_Untitled::cBinop_7KWp2Smi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lvJD4MFo, HV_BINOP_EQ, 0, m, &cBinop_lvJD4MFo_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_76oo7VCv, 0, m, &cIf_76oo7VCv_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_Mm7VbXtC, 0, m, &cIf_Mm7VbXtC_sendMessage);
}

void Heavy_Untitled::cBinop_lvJD4MFo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SXFczaNz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Sd3Y8cHB_sendMessage);
}

void Heavy_Untitled::cCast_Sd3Y8cHB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_lEeLgaHf, 1, m, &cIf_lEeLgaHf_sendMessage);
}

void Heavy_Untitled::cCast_SXFczaNz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Mm7VbXtC, 1, m, &cIf_Mm7VbXtC_sendMessage);
}

void Heavy_Untitled::cBinop_wYUddlLt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_d0HJpJd2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_76oo7VCv, 1, m, &cIf_76oo7VCv_sendMessage);
}

void Heavy_Untitled::cCast_drLSdcao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wvmw7d3b, 1, m, &cIf_wvmw7d3b_sendMessage);
}

void Heavy_Untitled::cVar_uMCQFy2L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_nbr1Vt5Z_sendMessage);
}

void Heavy_Untitled::cSlice_7L8BNFn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qnezmL7f_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_ZwuKrGV5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_HBO3yEK8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_u6BdnOHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_rvEiWk9a_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_zXEys9sF, m);
}

void Heavy_Untitled::cBinop_rvEiWk9a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_u6BdnOHg, 1, m, &cVar_u6BdnOHg_sendMessage);
}

void Heavy_Untitled::cVar_Heo8UTdy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_rPRFusrj_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZFsXQIZy, m);
}

void Heavy_Untitled::cBinop_rPRFusrj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Heo8UTdy, 1, m, &cVar_Heo8UTdy_sendMessage);
}

void Heavy_Untitled::cVar_uFQvOcXv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_mFw3Fdch_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_sxInAC0y, m);
}

void Heavy_Untitled::cBinop_mFw3Fdch_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uFQvOcXv, 1, m, &cVar_uFQvOcXv_sendMessage);
}

void Heavy_Untitled::cCast_pWg0vxq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U4ygCAv9, 0, m, &cVar_U4ygCAv9_sendMessage);
}

void Heavy_Untitled::cVar_U4ygCAv9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_vfyAm6N1_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_0iMEwMOi, 0, m, &cVar_0iMEwMOi_sendMessage);
}

void Heavy_Untitled::cVar_0iMEwMOi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_TlWot319_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_N4D689sd_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_L46gvhHT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_TlWot319_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RsNaAtLv_sendMessage);
      break;
    }
    default: {
      cMsg_cDDk7JKg_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_RsNaAtLv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_u6BdnOHg, 0, m, &cVar_u6BdnOHg_sendMessage);
}

void Heavy_Untitled::cSwitchcase_N4D689sd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_V0xgLJ88_sendMessage);
      break;
    }
    default: {
      cMsg_aGAYq4Aj_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_V0xgLJ88_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Heo8UTdy, 0, m, &cVar_Heo8UTdy_sendMessage);
}

void Heavy_Untitled::cSwitchcase_L46gvhHT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ocomGyF6_sendMessage);
      break;
    }
    default: {
      cMsg_cOqGRfBm_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_ocomGyF6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uFQvOcXv, 0, m, &cVar_uFQvOcXv_sendMessage);
}

void Heavy_Untitled::cMsg_WIy9VEaD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EcObaxVG_sendMessage);
}

void Heavy_Untitled::cSystem_EcObaxVG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WuVkTXVh_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_WuVkTXVh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0Kbn9jRk_sendMessage);
}

void Heavy_Untitled::cBinop_0Kbn9jRk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_DwarooOM, m);
}

void Heavy_Untitled::cMsg_s3ijqdFG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_64FLlMlL_sendMessage);
}

void Heavy_Untitled::cSystem_64FLlMlL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OHSY08wO_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_OHSY08wO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_MQyFBJFc_sendMessage);
}

void Heavy_Untitled::cBinop_MQyFBJFc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Uvvwo6GU, m);
}

void Heavy_Untitled::cSwitchcase_AH79Lh6l_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_fcVFz358, 0, m, &cSlice_fcVFz358_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_e0fAFSt6, 0, m, &cSlice_e0fAFSt6_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mw83DgRG, 0, m, &cSlice_mw83DgRG_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_4vqo4ACF, 0, m, &cSlice_4vqo4ACF_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Ag6cJpYM, 0, m, &cSlice_Ag6cJpYM_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_yuiWTOk0, 0, m, &cSlice_yuiWTOk0_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_yrL7m686, 0, m, &cSlice_yrL7m686_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vPfRF3EI, 0, m, &cSlice_vPfRF3EI_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VpCFEowW, 0, m, &cSlice_VpCFEowW_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xFnypJ1Z, 0, m, &cSlice_xFnypJ1Z_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_fcVFz358_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_y80JvLmT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_y80JvLmT_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_e0fAFSt6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_7L8BNFn4, 0, m, &cSlice_7L8BNFn4_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZwuKrGV5, 0, m, &cSlice_ZwuKrGV5_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_7L8BNFn4, 0, m, &cSlice_7L8BNFn4_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZwuKrGV5, 0, m, &cSlice_ZwuKrGV5_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_mw83DgRG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_O7y5rtRq_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_O7y5rtRq_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_4vqo4ACF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ia8OJuOI_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ia8OJuOI_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Ag6cJpYM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_TpbIWMVB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_TpbIWMVB_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_yuiWTOk0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_d2DVywJh_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_d2DVywJh_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_yrL7m686_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uKGuKQty_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_uKGuKQty_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_vPfRF3EI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FxtFSlgd_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_FxtFSlgd_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_VpCFEowW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1QYXHPlh_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_1QYXHPlh_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_xFnypJ1Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_CEJ2tJci_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_CEJ2tJci_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_2BjkCsnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EKMEz6lK_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_MJYGQMun_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_GZ0lnR0t, 0, m, &cSlice_GZ0lnR0t_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_2BjkCsnQ, 0, m, &cPack_2BjkCsnQ_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_GZ0lnR0t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_TD05bBC7, 0, m, &cPack_TD05bBC7_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_TD05bBC7, 0, m, &cPack_TD05bBC7_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_TD05bBC7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lfbZSQHS_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_0sYlBDRw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zsXGmMCj, m);
}

void Heavy_Untitled::cBinop_ixIqk57X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_nXLnNQ72_sendMessage);
}

void Heavy_Untitled::cBinop_nXLnNQ72_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KmPm73fz, m);
}

void Heavy_Untitled::cMsg_cRSn4Z6f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_gclSMKpV, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_gclSMKpV, 0, m, NULL);
}

void Heavy_Untitled::cBinop_p8EcIigj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Mrj18aeE, 1, m, &cPack_Mrj18aeE_sendMessage);
}

void Heavy_Untitled::cCast_9IgdUL1s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p8EcIigj, HV_BINOP_ADD, 0, m, &cBinop_p8EcIigj_sendMessage);
}

void Heavy_Untitled::cCast_j1IMIRrv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p8EcIigj, HV_BINOP_ADD, 1, m, &cBinop_p8EcIigj_sendMessage);
}

void Heavy_Untitled::cBinop_1BuKoYfr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uMCQFy2L, 0, m, &cVar_uMCQFy2L_sendMessage);
}

void Heavy_Untitled::cBinop_nbr1Vt5Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_zAgjyB9H_sendMessage);
}

void Heavy_Untitled::cBinop_zAgjyB9H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_K73PBaGh_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_WRBx10c9, 0, m, NULL);
}

void Heavy_Untitled::cMsg_K73PBaGh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_WRBx10c9, 0, m, NULL);
}

void Heavy_Untitled::cSend_y80JvLmT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UJntILxE_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_HBO3yEK8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZeehLNiU_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_qnezmL7f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zBUMVjQ4_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_O7y5rtRq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1U1ttR6n_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_ia8OJuOI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_RYtbb2nJ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_TpbIWMVB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ray7d9XJ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_d2DVywJh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ugkgPAY7_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_dkqmsMXF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_fb5kJCOM_sendMessage);
}

void Heavy_Untitled::cBinop_fb5kJCOM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_MTRt0jc1_sendMessage);
}

void Heavy_Untitled::cBinop_MTRt0jc1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_j1IMIRrv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9IgdUL1s_sendMessage);
}

void Heavy_Untitled::cBinop_BukTnn3W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Mrj18aeE, 2, m, &cPack_Mrj18aeE_sendMessage);
}

void Heavy_Untitled::cSend_FxtFSlgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dkGECHM1_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_uKGuKQty_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OYlFVCfF_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_vfyAm6N1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_lYnzmvZi_sendMessage);
}

void Heavy_Untitled::cMsg_cDDk7JKg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_u6BdnOHg, 0, m, &cVar_u6BdnOHg_sendMessage);
}

void Heavy_Untitled::cMsg_aGAYq4Aj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Heo8UTdy, 0, m, &cVar_Heo8UTdy_sendMessage);
}

void Heavy_Untitled::cMsg_cOqGRfBm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_uFQvOcXv, 0, m, &cVar_uFQvOcXv_sendMessage);
}

void Heavy_Untitled::cBinop_lYnzmvZi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U4ygCAv9, 1, m, &cVar_U4ygCAv9_sendMessage);
}

void Heavy_Untitled::cBinop_KACz6nfQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_2BjkCsnQ, 1, m, &cPack_2BjkCsnQ_sendMessage);
}

void Heavy_Untitled::cBinop_PJpEuH7i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_TD05bBC7, 1, m, &cPack_TD05bBC7_sendMessage);
}

void Heavy_Untitled::cSend_1QYXHPlh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UurKUdrz_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_CEJ2tJci_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_aMyLYAMS_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_qd08Ypdz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_MJYGQMun_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_EKMEz6lK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_nTdq4Oq2, 0, m, NULL);
}

void Heavy_Untitled::cMsg_lfbZSQHS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_nTdq4Oq2, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_SAbJ3XtC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_1SIUk68a, 0, m, &cSlice_1SIUk68a_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_70K7iwAE, 0, m, &cSlice_70K7iwAE_sendMessage);
      break;
    }
    default: {
      cSend_hImtnzuA_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_1SIUk68a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Gw3TKouR_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Gw3TKouR_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_70K7iwAE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_MTubzGQR_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_MTubzGQR_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSend_Gw3TKouR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_x6HmGCRH_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_MTubzGQR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pnsypTrc_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_hImtnzuA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zbgUyudN_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_TzGRSzu1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_s9bY6HGI_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_xN6nRYRd_sendMessage);
}

void Heavy_Untitled::cBinop_s9bY6HGI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TzGRSzu1, 1, m, &cVar_TzGRSzu1_sendMessage);
}

void Heavy_Untitled::cIf_G3qaLhpI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_QBCg2nrR, 0, m, &cPack_QBCg2nrR_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_PJ9pBR1O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_XAz5gJsV_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_G3qaLhpI, 1, m, &cIf_G3qaLhpI_sendMessage);
}

void Heavy_Untitled::cBinop_XAz5gJsV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PJ9pBR1O, 1, m, &cVar_PJ9pBR1O_sendMessage);
}

void Heavy_Untitled::cPack_QBCg2nrR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7yvHgCcH_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_ZiAIfSV2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_dgxN4970_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_fHSMbU9W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_sN2Kn8Tf, 0, m, &cIf_sN2Kn8Tf_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_kh3kUL3s, 0, m, &cIf_kh3kUL3s_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_UEZfqvKi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_xk7Bgof3_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_F4Ts6nn3, 0, m, &cIf_F4Ts6nn3_sendMessage);
}

void Heavy_Untitled::cUnop_qLWdYFoG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_P9tTXcRA_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uXzNtsx7, HV_BINOP_EQ, 1, m, &cBinop_uXzNtsx7_sendMessage);
}

void Heavy_Untitled::cUnop_zNsT9oHW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_P9tTXcRA_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uXzNtsx7, HV_BINOP_EQ, 1, m, &cBinop_uXzNtsx7_sendMessage);
}

void Heavy_Untitled::cIf_F4Ts6nn3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_zNsT9oHW_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_qLWdYFoG_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_xk7Bgof3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_F4Ts6nn3, 1, m, &cIf_F4Ts6nn3_sendMessage);
}

void Heavy_Untitled::cIf_kh3kUL3s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_cR7lpOQj_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_cvYhiwUV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_9RUDWLXV_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_sN2Kn8Tf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_cR7lpOQj_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_03L9IJyW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_9RUDWLXV_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_P9tTXcRA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ydFrtQKI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QEnmiXvI_sendMessage);
}

void Heavy_Untitled::cBinop_dgxN4970_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uXzNtsx7, HV_BINOP_EQ, 0, m, &cBinop_uXzNtsx7_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_03L9IJyW, 0, m, &cIf_03L9IJyW_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_cvYhiwUV, 0, m, &cIf_cvYhiwUV_sendMessage);
}

void Heavy_Untitled::cBinop_uXzNtsx7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9zNGPcRF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vMI0jdRR_sendMessage);
}

void Heavy_Untitled::cCast_vMI0jdRR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_sN2Kn8Tf, 1, m, &cIf_sN2Kn8Tf_sendMessage);
}

void Heavy_Untitled::cCast_9zNGPcRF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_cvYhiwUV, 1, m, &cIf_cvYhiwUV_sendMessage);
}

void Heavy_Untitled::cBinop_9RUDWLXV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_ydFrtQKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_03L9IJyW, 1, m, &cIf_03L9IJyW_sendMessage);
}

void Heavy_Untitled::cCast_QEnmiXvI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_kh3kUL3s, 1, m, &cIf_kh3kUL3s_sendMessage);
}

void Heavy_Untitled::cVar_xHEAKxJk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_VZacrrVK_sendMessage);
}

void Heavy_Untitled::cSlice_0KZfj7My_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_QKiKYWQy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_qhbUXifT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_klKvlRIP_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_372n8XTM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_8qnAJnes_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_WvnECfNw, m);
}

void Heavy_Untitled::cBinop_8qnAJnes_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_372n8XTM, 1, m, &cVar_372n8XTM_sendMessage);
}

void Heavy_Untitled::cVar_9qV7BG6D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_CCYQQXqu_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NtLDlFwQ, m);
}

void Heavy_Untitled::cBinop_CCYQQXqu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9qV7BG6D, 1, m, &cVar_9qV7BG6D_sendMessage);
}

void Heavy_Untitled::cVar_d2dtSroW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_qx02HHMB_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NdRfeLn3, m);
}

void Heavy_Untitled::cBinop_qx02HHMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_d2dtSroW, 1, m, &cVar_d2dtSroW_sendMessage);
}

void Heavy_Untitled::cCast_tbovIii9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JEZDaTC2, 0, m, &cVar_JEZDaTC2_sendMessage);
}

void Heavy_Untitled::cVar_JEZDaTC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Bme0ZaPG_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_T6z3idai, 0, m, &cVar_T6z3idai_sendMessage);
}

void Heavy_Untitled::cVar_T6z3idai_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_EfFxLIvt_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_QsU52fkm_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_f9e4CLLX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_EfFxLIvt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MQirhDi2_sendMessage);
      break;
    }
    default: {
      cMsg_n5kfPfjZ_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_MQirhDi2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_372n8XTM, 0, m, &cVar_372n8XTM_sendMessage);
}

void Heavy_Untitled::cSwitchcase_QsU52fkm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zZXb3Oz4_sendMessage);
      break;
    }
    default: {
      cMsg_aSJYmfnt_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_zZXb3Oz4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9qV7BG6D, 0, m, &cVar_9qV7BG6D_sendMessage);
}

void Heavy_Untitled::cSwitchcase_f9e4CLLX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dQIwtxp7_sendMessage);
      break;
    }
    default: {
      cMsg_Q6eXeKH4_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_dQIwtxp7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_d2dtSroW, 0, m, &cVar_d2dtSroW_sendMessage);
}

void Heavy_Untitled::cMsg_BedEtWUD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WPwCHiKQ_sendMessage);
}

void Heavy_Untitled::cSystem_WPwCHiKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YcPgLhrC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_YcPgLhrC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_HcEbBBtz_sendMessage);
}

void Heavy_Untitled::cBinop_HcEbBBtz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_S6qETae3, m);
}

void Heavy_Untitled::cMsg_2ycmAyE3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_huJBxPea_sendMessage);
}

void Heavy_Untitled::cSystem_huJBxPea_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CD3xcerC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_CD3xcerC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_M6IcjRsC_sendMessage);
}

void Heavy_Untitled::cBinop_M6IcjRsC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_hXwmUOgE, m);
}

void Heavy_Untitled::cSwitchcase_58WcnDBh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_dLRBKQAm, 0, m, &cSlice_dLRBKQAm_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_AWidPyVT, 0, m, &cSlice_AWidPyVT_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_qbPYWHJj, 0, m, &cSlice_qbPYWHJj_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_29f26OMb, 0, m, &cSlice_29f26OMb_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bJKtANpa, 0, m, &cSlice_bJKtANpa_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_G0k9Kkia, 0, m, &cSlice_G0k9Kkia_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_0imL1O3T, 0, m, &cSlice_0imL1O3T_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_XmZqA0C9, 0, m, &cSlice_XmZqA0C9_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Xr7pJEHt, 0, m, &cSlice_Xr7pJEHt_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_hekWBl6X, 0, m, &cSlice_hekWBl6X_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_dLRBKQAm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Yn5okTjx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Yn5okTjx_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_AWidPyVT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_0KZfj7My, 0, m, &cSlice_0KZfj7My_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_qhbUXifT, 0, m, &cSlice_qhbUXifT_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_0KZfj7My, 0, m, &cSlice_0KZfj7My_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_qhbUXifT, 0, m, &cSlice_qhbUXifT_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_qbPYWHJj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Dq4I8sMl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Dq4I8sMl_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_29f26OMb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_YjPd63in_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_YjPd63in_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_bJKtANpa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8OSHukPX_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_8OSHukPX_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_G0k9Kkia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_v16oszn3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_v16oszn3_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_0imL1O3T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_aytIgjng_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_aytIgjng_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_XmZqA0C9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_maWT6jM8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_maWT6jM8_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Xr7pJEHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_WOuhFiRE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_WOuhFiRE_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_hekWBl6X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_dDJSza66_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_dDJSza66_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_WEl0yrGq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zuUBgZHU_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_FG58jYAE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UUsz8VYP, 0, m, &cSlice_UUsz8VYP_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_WEl0yrGq, 0, m, &cPack_WEl0yrGq_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_UUsz8VYP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_Js8sjAH0, 0, m, &cPack_Js8sjAH0_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_Js8sjAH0, 0, m, &cPack_Js8sjAH0_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_Js8sjAH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WmuL1Qkq_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_xN6nRYRd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lQTjixvu, m);
}

void Heavy_Untitled::cBinop_VVpcZ7nz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_RWtV0S78_sendMessage);
}

void Heavy_Untitled::cBinop_RWtV0S78_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KDEPBvjR, m);
}

void Heavy_Untitled::cMsg_7yvHgCcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_BBr0IaoC, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_BBr0IaoC, 0, m, NULL);
}

void Heavy_Untitled::cBinop_kQPpssRS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QBCg2nrR, 1, m, &cPack_QBCg2nrR_sendMessage);
}

void Heavy_Untitled::cCast_Un3z5lv6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kQPpssRS, HV_BINOP_ADD, 1, m, &cBinop_kQPpssRS_sendMessage);
}

void Heavy_Untitled::cCast_6i9opfjh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kQPpssRS, HV_BINOP_ADD, 0, m, &cBinop_kQPpssRS_sendMessage);
}

void Heavy_Untitled::cBinop_cR7lpOQj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xHEAKxJk, 0, m, &cVar_xHEAKxJk_sendMessage);
}

void Heavy_Untitled::cBinop_VZacrrVK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_WQ6MQgHU_sendMessage);
}

void Heavy_Untitled::cBinop_WQ6MQgHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wQ0MIt5V_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_JoGv6H0n, 0, m, NULL);
}

void Heavy_Untitled::cMsg_wQ0MIt5V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JoGv6H0n, 0, m, NULL);
}

void Heavy_Untitled::cSend_Yn5okTjx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hGRB3r7j_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_klKvlRIP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8nWzEmbo_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_QKiKYWQy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VAqqPQWm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Dq4I8sMl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_cpjieji4_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_YjPd63in_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_eBOSVi4P_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_8OSHukPX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_lRkeYTZW_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_v16oszn3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HL0ZsO5f_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_OUNKxNFX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_28iIwRbt_sendMessage);
}

void Heavy_Untitled::cBinop_28iIwRbt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_ZX8HcsqO_sendMessage);
}

void Heavy_Untitled::cBinop_ZX8HcsqO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Un3z5lv6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6i9opfjh_sendMessage);
}

void Heavy_Untitled::cBinop_azw9Li7x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QBCg2nrR, 2, m, &cPack_QBCg2nrR_sendMessage);
}

void Heavy_Untitled::cSend_maWT6jM8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_rgEASNsG_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_aytIgjng_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nY89Kmuk_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_Bme0ZaPG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_JrayGZin_sendMessage);
}

void Heavy_Untitled::cMsg_n5kfPfjZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_372n8XTM, 0, m, &cVar_372n8XTM_sendMessage);
}

void Heavy_Untitled::cMsg_aSJYmfnt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_9qV7BG6D, 0, m, &cVar_9qV7BG6D_sendMessage);
}

void Heavy_Untitled::cMsg_Q6eXeKH4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_d2dtSroW, 0, m, &cVar_d2dtSroW_sendMessage);
}

void Heavy_Untitled::cBinop_JrayGZin_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JEZDaTC2, 1, m, &cVar_JEZDaTC2_sendMessage);
}

void Heavy_Untitled::cBinop_v9EioLfy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_WEl0yrGq, 1, m, &cPack_WEl0yrGq_sendMessage);
}

void Heavy_Untitled::cBinop_TiDxp7ui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Js8sjAH0, 1, m, &cPack_Js8sjAH0_sendMessage);
}

void Heavy_Untitled::cSend_WOuhFiRE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_cceREs6N_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_dDJSza66_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4hvNAuoU_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_vpUZM6K9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_FG58jYAE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_zuUBgZHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_M6Ok85Bb, 0, m, NULL);
}

void Heavy_Untitled::cMsg_WmuL1Qkq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_M6Ok85Bb, 0, m, NULL);
}

void Heavy_Untitled::cVar_YEBn3xam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Meb5Y1Jl_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_1EwNuRse_sendMessage);
}

void Heavy_Untitled::cBinop_Meb5Y1Jl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YEBn3xam, 1, m, &cVar_YEBn3xam_sendMessage);
}

void Heavy_Untitled::cIf_d2uYi1Bu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_AAejWCOy, 0, m, &cPack_AAejWCOy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_9MnPbIo9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_tPVUjL3d_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_d2uYi1Bu, 1, m, &cIf_d2uYi1Bu_sendMessage);
}

void Heavy_Untitled::cBinop_tPVUjL3d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9MnPbIo9, 1, m, &cVar_9MnPbIo9_sendMessage);
}

void Heavy_Untitled::cPack_AAejWCOy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f5ltmFyN_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_zx8a9Wax_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_QkwEZrul_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_RlURvp4e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_qeVZ1Z0u, 0, m, &cIf_qeVZ1Z0u_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_0WMevAJ6, 0, m, &cIf_0WMevAJ6_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_pvemYhFw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_NFazqVeo_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_wEMLh0A8, 0, m, &cIf_wEMLh0A8_sendMessage);
}

void Heavy_Untitled::cUnop_O03VZGzu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_TwlXddWl_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VTHNhVRQ, HV_BINOP_EQ, 1, m, &cBinop_VTHNhVRQ_sendMessage);
}

void Heavy_Untitled::cUnop_F49IFMQ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_TwlXddWl_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VTHNhVRQ, HV_BINOP_EQ, 1, m, &cBinop_VTHNhVRQ_sendMessage);
}

void Heavy_Untitled::cIf_wEMLh0A8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_F49IFMQ7_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_O03VZGzu_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_NFazqVeo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wEMLh0A8, 1, m, &cIf_wEMLh0A8_sendMessage);
}

void Heavy_Untitled::cIf_0WMevAJ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_4sOXEPfM_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_ph6V7rw0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_fHCnNJzi_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_qeVZ1Z0u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_4sOXEPfM_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_l9ccZzQb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_fHCnNJzi_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_TwlXddWl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iTN6Xah1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AYAX0Vun_sendMessage);
}

void Heavy_Untitled::cBinop_QkwEZrul_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VTHNhVRQ, HV_BINOP_EQ, 0, m, &cBinop_VTHNhVRQ_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_l9ccZzQb, 0, m, &cIf_l9ccZzQb_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_ph6V7rw0, 0, m, &cIf_ph6V7rw0_sendMessage);
}

void Heavy_Untitled::cBinop_VTHNhVRQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_STetfS7S_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VmZUMw1P_sendMessage);
}

void Heavy_Untitled::cCast_VmZUMw1P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qeVZ1Z0u, 1, m, &cIf_qeVZ1Z0u_sendMessage);
}

void Heavy_Untitled::cCast_STetfS7S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ph6V7rw0, 1, m, &cIf_ph6V7rw0_sendMessage);
}

void Heavy_Untitled::cBinop_fHCnNJzi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_iTN6Xah1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_l9ccZzQb, 1, m, &cIf_l9ccZzQb_sendMessage);
}

void Heavy_Untitled::cCast_AYAX0Vun_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_0WMevAJ6, 1, m, &cIf_0WMevAJ6_sendMessage);
}

void Heavy_Untitled::cVar_N0ALUgmd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_NqWJsCfz_sendMessage);
}

void Heavy_Untitled::cSlice_h81hYabQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_nS39y0S8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_iHPzUXWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_CYJHyvOT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_daUZ72Nt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Yp2QFgjq_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_75p50Ovd, m);
}

void Heavy_Untitled::cBinop_Yp2QFgjq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_daUZ72Nt, 1, m, &cVar_daUZ72Nt_sendMessage);
}

void Heavy_Untitled::cVar_P1VueFE3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_E5g2l4fj_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_1v6udkQo, m);
}

void Heavy_Untitled::cBinop_E5g2l4fj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_P1VueFE3, 1, m, &cVar_P1VueFE3_sendMessage);
}

void Heavy_Untitled::cVar_rgtD5JyF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_nhM8XS6N_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_bGqkhqET, m);
}

void Heavy_Untitled::cBinop_nhM8XS6N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rgtD5JyF, 1, m, &cVar_rgtD5JyF_sendMessage);
}

void Heavy_Untitled::cCast_8fx4FG0A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5VcJzmxC, 0, m, &cVar_5VcJzmxC_sendMessage);
}

void Heavy_Untitled::cVar_5VcJzmxC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_0HbLDqyk_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_DUhf0TmH, 0, m, &cVar_DUhf0TmH_sendMessage);
}

void Heavy_Untitled::cVar_DUhf0TmH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_bSdfEefM_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_bf0YhmRn_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_wXytAK0r_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_bSdfEefM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nGdTt3Mt_sendMessage);
      break;
    }
    default: {
      cMsg_vSr576qj_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_nGdTt3Mt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_daUZ72Nt, 0, m, &cVar_daUZ72Nt_sendMessage);
}

void Heavy_Untitled::cSwitchcase_bf0YhmRn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S4EfEEpl_sendMessage);
      break;
    }
    default: {
      cMsg_XQT8hhZ0_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_S4EfEEpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_P1VueFE3, 0, m, &cVar_P1VueFE3_sendMessage);
}

void Heavy_Untitled::cSwitchcase_wXytAK0r_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0JyXc8XF_sendMessage);
      break;
    }
    default: {
      cMsg_1jXDRbcY_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_0JyXc8XF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rgtD5JyF, 0, m, &cVar_rgtD5JyF_sendMessage);
}

void Heavy_Untitled::cMsg_eHU2IMMi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZDLRf2Nu_sendMessage);
}

void Heavy_Untitled::cSystem_ZDLRf2Nu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dom69n7A_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_dom69n7A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Ng0IQQSL_sendMessage);
}

void Heavy_Untitled::cBinop_Ng0IQQSL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zm9iVCVJ, m);
}

void Heavy_Untitled::cMsg_cSuRRebp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_C9A7A6OB_sendMessage);
}

void Heavy_Untitled::cSystem_C9A7A6OB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UedOMRhn_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_UedOMRhn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_aR1lP3R1_sendMessage);
}

void Heavy_Untitled::cBinop_aR1lP3R1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PVK129YD, m);
}

void Heavy_Untitled::cSwitchcase_dWHm5Fw3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Aj99U7C1, 0, m, &cSlice_Aj99U7C1_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xfbeRZKC, 0, m, &cSlice_xfbeRZKC_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_pAaEJsIN, 0, m, &cSlice_pAaEJsIN_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_HtdO3k50, 0, m, &cSlice_HtdO3k50_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mG6tAsjZ, 0, m, &cSlice_mG6tAsjZ_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_M4WUuV8m, 0, m, &cSlice_M4WUuV8m_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vX1eS8iE, 0, m, &cSlice_vX1eS8iE_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_M2qaumfU, 0, m, &cSlice_M2qaumfU_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_9eLqMCLN, 0, m, &cSlice_9eLqMCLN_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UjJmZDbb, 0, m, &cSlice_UjJmZDbb_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_Aj99U7C1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Rd9kvBz6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Rd9kvBz6_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_xfbeRZKC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_h81hYabQ, 0, m, &cSlice_h81hYabQ_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_iHPzUXWs, 0, m, &cSlice_iHPzUXWs_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_h81hYabQ, 0, m, &cSlice_h81hYabQ_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_iHPzUXWs, 0, m, &cSlice_iHPzUXWs_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_pAaEJsIN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_CKd4PdGS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_CKd4PdGS_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_HtdO3k50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_quYsnriB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_quYsnriB_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_mG6tAsjZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_c1vb9NJv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_c1vb9NJv_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_M4WUuV8m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EpZ5uDfI_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_EpZ5uDfI_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_vX1eS8iE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_0rY0aHV9_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_0rY0aHV9_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_M2qaumfU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EBagSCVS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_EBagSCVS_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_9eLqMCLN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_RvWpoa3S_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_RvWpoa3S_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_UjJmZDbb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_10lV9Jvx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_10lV9Jvx_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_QL8tQpyZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DTkXis6k_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_g4d0dgn7_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_smy1c9SC, 0, m, &cSlice_smy1c9SC_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_QL8tQpyZ, 0, m, &cPack_QL8tQpyZ_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_smy1c9SC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_wIfxoX9a, 0, m, &cPack_wIfxoX9a_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_wIfxoX9a, 0, m, &cPack_wIfxoX9a_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_wIfxoX9a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oN1dzHOu_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_1EwNuRse_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YhNAf26i, m);
}

void Heavy_Untitled::cBinop_jqfi0n2p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_rZovV5Hk_sendMessage);
}

void Heavy_Untitled::cBinop_rZovV5Hk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qcTGpxXc, m);
}

void Heavy_Untitled::cMsg_f5ltmFyN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_NkRCyxr6, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_NkRCyxr6, 0, m, NULL);
}

void Heavy_Untitled::cBinop_eelQHj0I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_AAejWCOy, 1, m, &cPack_AAejWCOy_sendMessage);
}

void Heavy_Untitled::cCast_70g4ZIf4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eelQHj0I, HV_BINOP_ADD, 1, m, &cBinop_eelQHj0I_sendMessage);
}

void Heavy_Untitled::cCast_3EJG8eX5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eelQHj0I, HV_BINOP_ADD, 0, m, &cBinop_eelQHj0I_sendMessage);
}

void Heavy_Untitled::cBinop_4sOXEPfM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_N0ALUgmd, 0, m, &cVar_N0ALUgmd_sendMessage);
}

void Heavy_Untitled::cBinop_NqWJsCfz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_zTvosZUH_sendMessage);
}

void Heavy_Untitled::cBinop_zTvosZUH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wg7O75W3_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_5KTMThrA, 0, m, NULL);
}

void Heavy_Untitled::cMsg_wg7O75W3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_5KTMThrA, 0, m, NULL);
}

void Heavy_Untitled::cSend_Rd9kvBz6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_iWd3gysd_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_CYJHyvOT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uTZ5vkzH_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_nS39y0S8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_EJAKKF79_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_CKd4PdGS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yD28zahH_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_quYsnriB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_K7gXbUth_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_c1vb9NJv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5TAuI9MJ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_EpZ5uDfI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_V7Rfbn4i_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_3UhV713k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_VURGgor0_sendMessage);
}

void Heavy_Untitled::cBinop_VURGgor0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_kSMTL68M_sendMessage);
}

void Heavy_Untitled::cBinop_kSMTL68M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_70g4ZIf4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3EJG8eX5_sendMessage);
}

void Heavy_Untitled::cBinop_wmaBv48a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_AAejWCOy, 2, m, &cPack_AAejWCOy_sendMessage);
}

void Heavy_Untitled::cSend_EBagSCVS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FeeABZSy_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_0rY0aHV9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_goq80Tmn_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_0HbLDqyk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_TzvIWbm6_sendMessage);
}

void Heavy_Untitled::cMsg_vSr576qj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_daUZ72Nt, 0, m, &cVar_daUZ72Nt_sendMessage);
}

void Heavy_Untitled::cMsg_XQT8hhZ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_P1VueFE3, 0, m, &cVar_P1VueFE3_sendMessage);
}

void Heavy_Untitled::cMsg_1jXDRbcY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_rgtD5JyF, 0, m, &cVar_rgtD5JyF_sendMessage);
}

void Heavy_Untitled::cBinop_TzvIWbm6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5VcJzmxC, 1, m, &cVar_5VcJzmxC_sendMessage);
}

void Heavy_Untitled::cBinop_26FA4AaE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QL8tQpyZ, 1, m, &cPack_QL8tQpyZ_sendMessage);
}

void Heavy_Untitled::cBinop_v7hY9Ncp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_wIfxoX9a, 1, m, &cPack_wIfxoX9a_sendMessage);
}

void Heavy_Untitled::cSend_RvWpoa3S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dnp1qlPK_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_10lV9Jvx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FCN7s31U_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_IQeMk5aO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_g4d0dgn7_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_DTkXis6k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_fHuNcuMm, 0, m, NULL);
}

void Heavy_Untitled::cMsg_oN1dzHOu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_fHuNcuMm, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_Rg1JlhXx_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_yKgF51ZX, 0, m, &cSlice_yKgF51ZX_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_kE89B6Yy, 0, m, &cSlice_kE89B6Yy_sendMessage);
      break;
    }
    default: {
      cSend_cHjs7XZo_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_yKgF51ZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_q76i2NYv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_q76i2NYv_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_kE89B6Yy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_NZSbkOil_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_NZSbkOil_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSend_q76i2NYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0PZqkoHM_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_NZSbkOil_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FJXyOwsj_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_cHjs7XZo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wqHTL2as_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_GX7D0OWJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Xr676fEK_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_adjDIY5S_sendMessage);
}

void Heavy_Untitled::cBinop_Xr676fEK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GX7D0OWJ, 1, m, &cVar_GX7D0OWJ_sendMessage);
}

void Heavy_Untitled::cIf_N9Sup1dy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_uRQaqjAm, 0, m, &cPack_uRQaqjAm_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_56T67YCv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_M4kHqmzK_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_N9Sup1dy, 1, m, &cIf_N9Sup1dy_sendMessage);
}

void Heavy_Untitled::cBinop_M4kHqmzK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_56T67YCv, 1, m, &cVar_56T67YCv_sendMessage);
}

void Heavy_Untitled::cPack_uRQaqjAm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YvKYxrOW_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_DOD9KU08_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_rOIpH6d4_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_oJgYkUT4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_e6UjV6UN, 0, m, &cIf_e6UjV6UN_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_OytzyvLz, 0, m, &cIf_OytzyvLz_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_FixwDbXA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_q5ULXYiH_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_vsvHR2Nw, 0, m, &cIf_vsvHR2Nw_sendMessage);
}

void Heavy_Untitled::cUnop_rQWrYaFy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_cGHJR5LF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_5NlKp31i, HV_BINOP_EQ, 1, m, &cBinop_5NlKp31i_sendMessage);
}

void Heavy_Untitled::cUnop_93tAfW8p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_cGHJR5LF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_5NlKp31i, HV_BINOP_EQ, 1, m, &cBinop_5NlKp31i_sendMessage);
}

void Heavy_Untitled::cIf_vsvHR2Nw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_93tAfW8p_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_rQWrYaFy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_q5ULXYiH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_vsvHR2Nw, 1, m, &cIf_vsvHR2Nw_sendMessage);
}

void Heavy_Untitled::cIf_OytzyvLz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_cfdlby8H_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_8fRngFMz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_awBgKSqV_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_e6UjV6UN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_cfdlby8H_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_vmezOIaR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_awBgKSqV_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_cGHJR5LF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ih3uWtEv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fIlzIwXe_sendMessage);
}

void Heavy_Untitled::cBinop_rOIpH6d4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5NlKp31i, HV_BINOP_EQ, 0, m, &cBinop_5NlKp31i_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_vmezOIaR, 0, m, &cIf_vmezOIaR_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_8fRngFMz, 0, m, &cIf_8fRngFMz_sendMessage);
}

void Heavy_Untitled::cBinop_5NlKp31i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ejCB6Dyc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1D31IsQ8_sendMessage);
}

void Heavy_Untitled::cCast_1D31IsQ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_e6UjV6UN, 1, m, &cIf_e6UjV6UN_sendMessage);
}

void Heavy_Untitled::cCast_ejCB6Dyc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_8fRngFMz, 1, m, &cIf_8fRngFMz_sendMessage);
}

void Heavy_Untitled::cBinop_awBgKSqV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_fIlzIwXe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_OytzyvLz, 1, m, &cIf_OytzyvLz_sendMessage);
}

void Heavy_Untitled::cCast_Ih3uWtEv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_vmezOIaR, 1, m, &cIf_vmezOIaR_sendMessage);
}

void Heavy_Untitled::cVar_VPU2WO7c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_4we6z5jv_sendMessage);
}

void Heavy_Untitled::cSlice_jLIfgE0j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_KpnZAztN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_iYnHgHyK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_wUwjNtbc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_bP2jCENp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_dWMcB4Kz_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_unvIab3l, m);
}

void Heavy_Untitled::cBinop_dWMcB4Kz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bP2jCENp, 1, m, &cVar_bP2jCENp_sendMessage);
}

void Heavy_Untitled::cVar_vhi2kXTz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_fseukmyW_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_1yjXCpCJ, m);
}

void Heavy_Untitled::cBinop_fseukmyW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vhi2kXTz, 1, m, &cVar_vhi2kXTz_sendMessage);
}

void Heavy_Untitled::cVar_EZBN40Dd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_HTtB6HUW_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ABi4QhT4, m);
}

void Heavy_Untitled::cBinop_HTtB6HUW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EZBN40Dd, 1, m, &cVar_EZBN40Dd_sendMessage);
}

void Heavy_Untitled::cCast_k8cyzhWR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bdmRPMUG, 0, m, &cVar_bdmRPMUG_sendMessage);
}

void Heavy_Untitled::cVar_bdmRPMUG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_hArKVO4j_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_nBhniSew, 0, m, &cVar_nBhniSew_sendMessage);
}

void Heavy_Untitled::cVar_nBhniSew_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_YNnktzUc_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_nQ6koxxo_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_xgBerlgd_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_YNnktzUc_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Y72dJI5b_sendMessage);
      break;
    }
    default: {
      cMsg_wPSRRchy_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_Y72dJI5b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bP2jCENp, 0, m, &cVar_bP2jCENp_sendMessage);
}

void Heavy_Untitled::cSwitchcase_nQ6koxxo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WPvoofV9_sendMessage);
      break;
    }
    default: {
      cMsg_YPGllY60_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_WPvoofV9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vhi2kXTz, 0, m, &cVar_vhi2kXTz_sendMessage);
}

void Heavy_Untitled::cSwitchcase_xgBerlgd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zGEpuJrz_sendMessage);
      break;
    }
    default: {
      cMsg_X8EZP6n3_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_zGEpuJrz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EZBN40Dd, 0, m, &cVar_EZBN40Dd_sendMessage);
}

void Heavy_Untitled::cMsg_GY3zG8DT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tQUUTnEf_sendMessage);
}

void Heavy_Untitled::cSystem_tQUUTnEf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RlsVrGMK_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_RlsVrGMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Idlf6KJp_sendMessage);
}

void Heavy_Untitled::cBinop_Idlf6KJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_1AjNWAgV, m);
}

void Heavy_Untitled::cMsg_YtePwG67_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WyGR8Jvx_sendMessage);
}

void Heavy_Untitled::cSystem_WyGR8Jvx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R9HBuzZx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_R9HBuzZx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_HZ8qM8YX_sendMessage);
}

void Heavy_Untitled::cBinop_HZ8qM8YX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_W4zxyIcy, m);
}

void Heavy_Untitled::cSwitchcase_Ggjlf2P7_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_4JfWom68, 0, m, &cSlice_4JfWom68_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ylS2pv22, 0, m, &cSlice_ylS2pv22_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_SfOwGpN6, 0, m, &cSlice_SfOwGpN6_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_LvsKy5Ki, 0, m, &cSlice_LvsKy5Ki_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VYlDWkiP, 0, m, &cSlice_VYlDWkiP_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6COpBpCh, 0, m, &cSlice_6COpBpCh_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2dWa8IB5, 0, m, &cSlice_2dWa8IB5_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6b1JYrFb, 0, m, &cSlice_6b1JYrFb_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_A8CuP2ln, 0, m, &cSlice_A8CuP2ln_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UIAnof1P, 0, m, &cSlice_UIAnof1P_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_4JfWom68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_RvJ4JPop_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_RvJ4JPop_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_ylS2pv22_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_jLIfgE0j, 0, m, &cSlice_jLIfgE0j_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_iYnHgHyK, 0, m, &cSlice_iYnHgHyK_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_jLIfgE0j, 0, m, &cSlice_jLIfgE0j_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_iYnHgHyK, 0, m, &cSlice_iYnHgHyK_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_SfOwGpN6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_TFOIVl0U_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_TFOIVl0U_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_LvsKy5Ki_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_icNQ6Fve_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_icNQ6Fve_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_VYlDWkiP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_WwATasYJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_WwATasYJ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_6COpBpCh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_sCXhzQXG_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_sCXhzQXG_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_2dWa8IB5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_KAuvbBxO_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_KAuvbBxO_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_6b1JYrFb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ne2VpRK0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ne2VpRK0_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_A8CuP2ln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ihFE4yXE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ihFE4yXE_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_UIAnof1P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_16LG7kVJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_16LG7kVJ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_ePsUrgfZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pJP42QTP_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_t8VSNuUO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_0QUVEwcA, 0, m, &cSlice_0QUVEwcA_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_ePsUrgfZ, 0, m, &cPack_ePsUrgfZ_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_0QUVEwcA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_QV2YCfQm, 0, m, &cPack_QV2YCfQm_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_QV2YCfQm, 0, m, &cPack_QV2YCfQm_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_QV2YCfQm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ENT5xw8E_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_adjDIY5S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ur4vfbIM, m);
}

void Heavy_Untitled::cBinop_pk19KVPK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_qroIz9Bv_sendMessage);
}

void Heavy_Untitled::cBinop_qroIz9Bv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6HjJAOft, m);
}

void Heavy_Untitled::cMsg_YvKYxrOW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_bA4KDyH0, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_bA4KDyH0, 0, m, NULL);
}

void Heavy_Untitled::cBinop_s4rN62Gr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_uRQaqjAm, 1, m, &cPack_uRQaqjAm_sendMessage);
}

void Heavy_Untitled::cCast_a9Oj8xlJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_s4rN62Gr, HV_BINOP_ADD, 0, m, &cBinop_s4rN62Gr_sendMessage);
}

void Heavy_Untitled::cCast_NjsrTLvB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_s4rN62Gr, HV_BINOP_ADD, 1, m, &cBinop_s4rN62Gr_sendMessage);
}

void Heavy_Untitled::cBinop_cfdlby8H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VPU2WO7c, 0, m, &cVar_VPU2WO7c_sendMessage);
}

void Heavy_Untitled::cBinop_4we6z5jv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_EHGrDu72_sendMessage);
}

void Heavy_Untitled::cBinop_EHGrDu72_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5YzxjL2c_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_ciQ8Ruek, 0, m, NULL);
}

void Heavy_Untitled::cMsg_5YzxjL2c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ciQ8Ruek, 0, m, NULL);
}

void Heavy_Untitled::cSend_RvJ4JPop_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_B1AupDJz_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_wUwjNtbc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OmcwYAir_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_KpnZAztN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ctDTLeiD_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_TFOIVl0U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SdX4Od82_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_icNQ6Fve_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xiHKTZYj_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_WwATasYJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_V6dh2Kss_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_sCXhzQXG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WRlWTpQx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_CYxb1MYB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_TXyTNwFx_sendMessage);
}

void Heavy_Untitled::cBinop_TXyTNwFx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_GH0aPoBS_sendMessage);
}

void Heavy_Untitled::cBinop_GH0aPoBS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NjsrTLvB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_a9Oj8xlJ_sendMessage);
}

void Heavy_Untitled::cBinop_fsRH3IZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_uRQaqjAm, 2, m, &cPack_uRQaqjAm_sendMessage);
}

void Heavy_Untitled::cSend_ne2VpRK0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_S8PmQ37o_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_KAuvbBxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_gczRzVNo_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_hArKVO4j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_2f7p9Fkt_sendMessage);
}

void Heavy_Untitled::cMsg_wPSRRchy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_bP2jCENp, 0, m, &cVar_bP2jCENp_sendMessage);
}

void Heavy_Untitled::cMsg_YPGllY60_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_vhi2kXTz, 0, m, &cVar_vhi2kXTz_sendMessage);
}

void Heavy_Untitled::cMsg_X8EZP6n3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_EZBN40Dd, 0, m, &cVar_EZBN40Dd_sendMessage);
}

void Heavy_Untitled::cBinop_2f7p9Fkt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bdmRPMUG, 1, m, &cVar_bdmRPMUG_sendMessage);
}

void Heavy_Untitled::cBinop_wGdB9niz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ePsUrgfZ, 1, m, &cPack_ePsUrgfZ_sendMessage);
}

void Heavy_Untitled::cBinop_2H0YPO9w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QV2YCfQm, 1, m, &cPack_QV2YCfQm_sendMessage);
}

void Heavy_Untitled::cSend_ihFE4yXE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2YE5Ddrl_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_16LG7kVJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fHSU41JL_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_uG1f7e4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_t8VSNuUO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_pJP42QTP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_ePKyky3u, 0, m, NULL);
}

void Heavy_Untitled::cMsg_ENT5xw8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_ePKyky3u, 0, m, NULL);
}

void Heavy_Untitled::cVar_ZiKx4Wwe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_LWVwQBN6_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_HNp0Jg1m_sendMessage);
}

void Heavy_Untitled::cBinop_LWVwQBN6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZiKx4Wwe, 1, m, &cVar_ZiKx4Wwe_sendMessage);
}

void Heavy_Untitled::cIf_NMElIoEx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_oP0pUKdr, 0, m, &cPack_oP0pUKdr_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_Mn3cFg8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_1gsGt61k_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_NMElIoEx, 1, m, &cIf_NMElIoEx_sendMessage);
}

void Heavy_Untitled::cBinop_1gsGt61k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Mn3cFg8R, 1, m, &cVar_Mn3cFg8R_sendMessage);
}

void Heavy_Untitled::cPack_oP0pUKdr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kyA54GcG_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_to6bR4at_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_XpxvwWs6_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_yhra3fVS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_E7irgJpI, 0, m, &cIf_E7irgJpI_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_TPhseP2m, 0, m, &cIf_TPhseP2m_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_S66gRHEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_DljCAVyU_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_xRxjmsIt, 0, m, &cIf_xRxjmsIt_sendMessage);
}

void Heavy_Untitled::cUnop_02eBWZvt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_qxLopBQY_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wE2ueZu9, HV_BINOP_EQ, 1, m, &cBinop_wE2ueZu9_sendMessage);
}

void Heavy_Untitled::cUnop_PELggNae_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_qxLopBQY_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wE2ueZu9, HV_BINOP_EQ, 1, m, &cBinop_wE2ueZu9_sendMessage);
}

void Heavy_Untitled::cIf_xRxjmsIt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_PELggNae_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_02eBWZvt_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_DljCAVyU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_xRxjmsIt, 1, m, &cIf_xRxjmsIt_sendMessage);
}

void Heavy_Untitled::cIf_TPhseP2m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_M5gPpH5k_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_VfiSQgbJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_3PRpK8LA_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_E7irgJpI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_M5gPpH5k_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_thoqJycW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_3PRpK8LA_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_qxLopBQY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Yg8bzuUr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_g2AXqIiL_sendMessage);
}

void Heavy_Untitled::cBinop_XpxvwWs6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wE2ueZu9, HV_BINOP_EQ, 0, m, &cBinop_wE2ueZu9_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_thoqJycW, 0, m, &cIf_thoqJycW_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_VfiSQgbJ, 0, m, &cIf_VfiSQgbJ_sendMessage);
}

void Heavy_Untitled::cBinop_wE2ueZu9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_n9R7K1xH_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kpJvowun_sendMessage);
}

void Heavy_Untitled::cCast_n9R7K1xH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_VfiSQgbJ, 1, m, &cIf_VfiSQgbJ_sendMessage);
}

void Heavy_Untitled::cCast_kpJvowun_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_E7irgJpI, 1, m, &cIf_E7irgJpI_sendMessage);
}

void Heavy_Untitled::cBinop_3PRpK8LA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_Yg8bzuUr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_thoqJycW, 1, m, &cIf_thoqJycW_sendMessage);
}

void Heavy_Untitled::cCast_g2AXqIiL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_TPhseP2m, 1, m, &cIf_TPhseP2m_sendMessage);
}

void Heavy_Untitled::cVar_n2WO5o3g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_Ffxs8BKm_sendMessage);
}

void Heavy_Untitled::cSlice_u5hnQjls_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_AhY8ynlc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_KdCzROMa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Ie8zMp5s_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_7Mi2xqLl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_VpVzktDB_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_LoItmH1V, m);
}

void Heavy_Untitled::cBinop_VpVzktDB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7Mi2xqLl, 1, m, &cVar_7Mi2xqLl_sendMessage);
}

void Heavy_Untitled::cVar_e8wR84bO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Mu3D4BT4_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_LPq9nC6e, m);
}

void Heavy_Untitled::cBinop_Mu3D4BT4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_e8wR84bO, 1, m, &cVar_e8wR84bO_sendMessage);
}

void Heavy_Untitled::cVar_32uvkLHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_QfqQ3yVm_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_2u3sTigZ, m);
}

void Heavy_Untitled::cBinop_QfqQ3yVm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_32uvkLHt, 1, m, &cVar_32uvkLHt_sendMessage);
}

void Heavy_Untitled::cCast_j4Ctz6Q2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ItIRHEbG, 0, m, &cVar_ItIRHEbG_sendMessage);
}

void Heavy_Untitled::cVar_ItIRHEbG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_csaEguDH_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WoCtAXav, 0, m, &cVar_WoCtAXav_sendMessage);
}

void Heavy_Untitled::cVar_WoCtAXav_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_g90XCW1V_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_2w6TXa02_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Rxr3kwsq_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_g90XCW1V_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qeiSxWDZ_sendMessage);
      break;
    }
    default: {
      cMsg_yV2hTAUr_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_qeiSxWDZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7Mi2xqLl, 0, m, &cVar_7Mi2xqLl_sendMessage);
}

void Heavy_Untitled::cSwitchcase_2w6TXa02_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vYYFW30A_sendMessage);
      break;
    }
    default: {
      cMsg_3iChdWMO_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_vYYFW30A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_e8wR84bO, 0, m, &cVar_e8wR84bO_sendMessage);
}

void Heavy_Untitled::cSwitchcase_Rxr3kwsq_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zkZRYzju_sendMessage);
      break;
    }
    default: {
      cMsg_wOcsaLaR_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_zkZRYzju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_32uvkLHt, 0, m, &cVar_32uvkLHt_sendMessage);
}

void Heavy_Untitled::cMsg_ca8cYSq1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ifUp2bJe_sendMessage);
}

void Heavy_Untitled::cSystem_ifUp2bJe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_coyhsHbF_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_coyhsHbF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_JRMQlxPQ_sendMessage);
}

void Heavy_Untitled::cBinop_JRMQlxPQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jFm5catj, m);
}

void Heavy_Untitled::cMsg_LSfQfTKW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xxzn0Q5H_sendMessage);
}

void Heavy_Untitled::cSystem_xxzn0Q5H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0tfqpBFR_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_0tfqpBFR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_tBfBZfmI_sendMessage);
}

void Heavy_Untitled::cBinop_tBfBZfmI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fh9tKgau, m);
}

void Heavy_Untitled::cSwitchcase_W4cBaA7Q_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_yh7F24Oo, 0, m, &cSlice_yh7F24Oo_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_CFrRwTMB, 0, m, &cSlice_CFrRwTMB_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YpAhoW1l, 0, m, &cSlice_YpAhoW1l_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_D4sghae2, 0, m, &cSlice_D4sghae2_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_rrqV1q9k, 0, m, &cSlice_rrqV1q9k_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YZ55p3WP, 0, m, &cSlice_YZ55p3WP_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_9YeQsBuv, 0, m, &cSlice_9YeQsBuv_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_9DfA4dbL, 0, m, &cSlice_9DfA4dbL_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_AGBEyFj0, 0, m, &cSlice_AGBEyFj0_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tEOrnlYU, 0, m, &cSlice_tEOrnlYU_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_yh7F24Oo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8HNHFo9A_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_8HNHFo9A_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_CFrRwTMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_u5hnQjls, 0, m, &cSlice_u5hnQjls_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_KdCzROMa, 0, m, &cSlice_KdCzROMa_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_u5hnQjls, 0, m, &cSlice_u5hnQjls_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_KdCzROMa, 0, m, &cSlice_KdCzROMa_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_YpAhoW1l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_YZJc4TfW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_YZJc4TfW_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_D4sghae2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_7qvgdUuq_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_7qvgdUuq_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_rrqV1q9k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lweNK4uh_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_lweNK4uh_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_YZ55p3WP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_cCaUR7E6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_cCaUR7E6_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_9YeQsBuv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_xfwoGSwS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_xfwoGSwS_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_9DfA4dbL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_AXSoinH1_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_AXSoinH1_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_AGBEyFj0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_p5H5tVse_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_p5H5tVse_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_tEOrnlYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_MGhlMdXk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_MGhlMdXk_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_gw7QDuDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hpwm8ZD6_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_qRgYOe8u_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7Af7EYRH, 0, m, &cSlice_7Af7EYRH_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_gw7QDuDy, 0, m, &cPack_gw7QDuDy_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_7Af7EYRH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_TDA44rWH, 0, m, &cPack_TDA44rWH_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_TDA44rWH, 0, m, &cPack_TDA44rWH_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_TDA44rWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rRd3mx9P_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_HNp0Jg1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_cXhSZULd, m);
}

void Heavy_Untitled::cBinop_C7rIHNOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_S6hMkjyA_sendMessage);
}

void Heavy_Untitled::cBinop_S6hMkjyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_V91XEMIz, m);
}

void Heavy_Untitled::cMsg_kyA54GcG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_PiXOJm8p, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_PiXOJm8p, 0, m, NULL);
}

void Heavy_Untitled::cBinop_R3xQMPK8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_oP0pUKdr, 1, m, &cPack_oP0pUKdr_sendMessage);
}

void Heavy_Untitled::cCast_cIuftXXT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R3xQMPK8, HV_BINOP_ADD, 0, m, &cBinop_R3xQMPK8_sendMessage);
}

void Heavy_Untitled::cCast_hW25uThT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R3xQMPK8, HV_BINOP_ADD, 1, m, &cBinop_R3xQMPK8_sendMessage);
}

void Heavy_Untitled::cBinop_M5gPpH5k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_n2WO5o3g, 0, m, &cVar_n2WO5o3g_sendMessage);
}

void Heavy_Untitled::cBinop_Ffxs8BKm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_6EFnNgp8_sendMessage);
}

void Heavy_Untitled::cBinop_6EFnNgp8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_frqfkDyB_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_oNNXdS7Z, 0, m, NULL);
}

void Heavy_Untitled::cMsg_frqfkDyB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_oNNXdS7Z, 0, m, NULL);
}

void Heavy_Untitled::cSend_8HNHFo9A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1oq4n42U_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Ie8zMp5s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_RBQXIGpe_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_AhY8ynlc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OWQJX8AB_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_YZJc4TfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Q6zzcLYU_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_7qvgdUuq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_71MvUvx2_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_lweNK4uh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_w2kGSjLx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_cCaUR7E6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_eq8iY4pJ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_dyiMSbee_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_TGaiYCYT_sendMessage);
}

void Heavy_Untitled::cBinop_TGaiYCYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_BIh97QjT_sendMessage);
}

void Heavy_Untitled::cBinop_BIh97QjT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hW25uThT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cIuftXXT_sendMessage);
}

void Heavy_Untitled::cBinop_2DJSfFkC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_oP0pUKdr, 2, m, &cPack_oP0pUKdr_sendMessage);
}

void Heavy_Untitled::cSend_AXSoinH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_gxVFgBS8_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_xfwoGSwS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dJkcIYSv_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_csaEguDH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_PwJpwF4s_sendMessage);
}

void Heavy_Untitled::cMsg_yV2hTAUr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_7Mi2xqLl, 0, m, &cVar_7Mi2xqLl_sendMessage);
}

void Heavy_Untitled::cMsg_3iChdWMO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_e8wR84bO, 0, m, &cVar_e8wR84bO_sendMessage);
}

void Heavy_Untitled::cMsg_wOcsaLaR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_32uvkLHt, 0, m, &cVar_32uvkLHt_sendMessage);
}

void Heavy_Untitled::cBinop_PwJpwF4s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ItIRHEbG, 1, m, &cVar_ItIRHEbG_sendMessage);
}

void Heavy_Untitled::cBinop_nwNMaOcn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_gw7QDuDy, 1, m, &cPack_gw7QDuDy_sendMessage);
}

void Heavy_Untitled::cBinop_gn7Z8QXd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_TDA44rWH, 1, m, &cPack_TDA44rWH_sendMessage);
}

void Heavy_Untitled::cSend_p5H5tVse_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_u2dLeBix_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_MGhlMdXk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dYBCd65l_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_3YvC2G07_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qRgYOe8u_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_hpwm8ZD6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_8qsnd4FU, 0, m, NULL);
}

void Heavy_Untitled::cMsg_rRd3mx9P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_8qsnd4FU, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_ISnfPaqC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KTVJSRwc, 0, m, &cSlice_KTVJSRwc_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KHauJDoA, 0, m, &cSlice_KHauJDoA_sendMessage);
      break;
    }
    default: {
      cSend_22TLiT8g_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_KTVJSRwc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_CDoZMSar_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_CDoZMSar_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_KHauJDoA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FgcMK9rc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_FgcMK9rc_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSend_CDoZMSar_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VYbQ71tp_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_FgcMK9rc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_bUwPJUFD_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_22TLiT8g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FdJW9KBc_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_xvpRkzEG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_NEQ, 0.0f, 0, m, &cBinop_3PqpHXAQ_sendMessage);
}

void Heavy_Untitled::cVar_eGfEkAme_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wwy5j0MH, HV_BINOP_MOD_UNIPOLAR, 0, m, &cBinop_wwy5j0MH_sendMessage);
}

void Heavy_Untitled::cSwitchcase_sytcxcbH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_1jnUeKqd, 0, m, &cSlice_1jnUeKqd_sendMessage);
      break;
    }
    case 0x47BE8354: { // "clear"
      cSlice_onMessage(_c, &Context(_c)->cSlice_v22fqbiP, 0, m, &cSlice_v22fqbiP_sendMessage);
      break;
    }
    default: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_ktLxIqK2, 0, m, &cSlice_ktLxIqK2_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Hb0l6sWi, 0, m, &cSlice_Hb0l6sWi_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_1jnUeKqd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sW097EZV_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JfwdJZ2a_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sW097EZV_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JfwdJZ2a_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_v22fqbiP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_00LYYIOI_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0oGxOoAd_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_00LYYIOI_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0oGxOoAd_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_ktLxIqK2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cVar_onMessage(_c, &Context(_c)->cVar_bRvOad2A, 0, m, &cVar_bRvOad2A_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Hb0l6sWi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_UrJE1AFi, 0, m, &cIf_UrJE1AFi_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_MZUhK1hh, 0, m, &cIf_MZUhK1hh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_bRvOad2A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_s1qHK7bi, 1, m, &cPack_s1qHK7bi_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_N1tG0Nyf, 1, m, &cPack_N1tG0Nyf_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_JJiGv52s_sendMessage);
}

void Heavy_Untitled::cIf_UrJE1AFi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jObTFSqE_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vOMYe3fU_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aLZCVuA1_sendMessage);
      cPack_onMessage(_c, &Context(_c)->cPack_s1qHK7bi, 0, m, &cPack_s1qHK7bi_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_MZUhK1hh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_N1tG0Nyf, 0, m, &cPack_N1tG0Nyf_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_EqVyOrHa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oDc9knA5_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yEJIEa41_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_GSFIIDhh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qB9pQSRx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tln2pMSB_sendMessage);
}

void Heavy_Untitled::cIf_JwWyX3YE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3T4cOiup_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Bn0cbul8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_ytBZJmfS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_JwWyX3YE, 1, m, &cIf_JwWyX3YE_sendMessage);
}

void Heavy_Untitled::cVar_yBZ8Rr9q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_yhfe2jx3_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_9IXt8ClH, 0, m, &cIf_9IXt8ClH_sendMessage);
}

void Heavy_Untitled::cUnop_vvaqhW9f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_ytBZJmfS_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_JwWyX3YE, 0, m, &cIf_JwWyX3YE_sendMessage);
}

void Heavy_Untitled::cUnop_KgsNgrq3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_ytBZJmfS_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_JwWyX3YE, 0, m, &cIf_JwWyX3YE_sendMessage);
}

void Heavy_Untitled::cIf_9IXt8ClH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_KgsNgrq3_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_vvaqhW9f_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_yhfe2jx3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_9IXt8ClH, 1, m, &cIf_9IXt8ClH_sendMessage);
}

void Heavy_Untitled::cCast_tln2pMSB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_EqVyOrHa, 0, m, &cIf_EqVyOrHa_sendMessage);
}

void Heavy_Untitled::cCast_qB9pQSRx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lQhGwFVu, HV_BINOP_LESS_THAN, 0, m, &cBinop_lQhGwFVu_sendMessage);
}

void Heavy_Untitled::cBinop_lQhGwFVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_EqVyOrHa, 1, m, &cIf_EqVyOrHa_sendMessage);
}

void Heavy_Untitled::cCast_3T4cOiup_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lQhGwFVu, HV_BINOP_LESS_THAN, 1, m, &cBinop_lQhGwFVu_sendMessage);
}

void Heavy_Untitled::cCast_Bn0cbul8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JVRZFUUs_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_ZZb712zz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GSFIIDhh, 0, m, &cVar_GSFIIDhh_sendMessage);
}

void Heavy_Untitled::cMsg_JVRZFUUs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_GSFIIDhh, 0, m, &cVar_GSFIIDhh_sendMessage);
}

void Heavy_Untitled::cCast_yEJIEa41_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ZZb712zz_sendMessage);
}

void Heavy_Untitled::cCast_oDc9knA5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GH2FtkL1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WobYB3rL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_69LuKC9R_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_arK5u2fj_sendMessage);
}

void Heavy_Untitled::cVar_d9skxfiC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yBZ8Rr9q, 0, m, &cVar_yBZ8Rr9q_sendMessage);
}

void Heavy_Untitled::cTabread_tFxo0eD4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3W7qtrEK, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_3W7qtrEK_sendMessage);
}

void Heavy_Untitled::cSwitchcase_4bYKYCDr_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_RD3mBw1a, 0, m, &cSlice_RD3mBw1a_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FzjgeIN5_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VPelXH2L_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_RD3mBw1a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_tFxo0eD4, 1, m, &cTabread_tFxo0eD4_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_tFxo0eD4, 1, m, &cTabread_tFxo0eD4_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_Pg25i3zv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yMVqgiYL_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSystem_nQeB7Ysv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_FtArrGed_sendMessage);
}

void Heavy_Untitled::cBinop_ebIjhq2l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_heR07fCI, HV_BINOP_MIN, 0, m, &cBinop_heR07fCI_sendMessage);
}

void Heavy_Untitled::cCast_FzjgeIN5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Pg25i3zv, 0, m, &cVar_Pg25i3zv_sendMessage);
}

void Heavy_Untitled::cCast_VPelXH2L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ebIjhq2l_sendMessage);
}

void Heavy_Untitled::cBinop_heR07fCI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_tFxo0eD4, 0, m, &cTabread_tFxo0eD4_sendMessage);
}

void Heavy_Untitled::cMsg_yMVqgiYL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nQeB7Ysv_sendMessage);
}

void Heavy_Untitled::cBinop_FtArrGed_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_heR07fCI, HV_BINOP_MIN, 1, m, &cBinop_heR07fCI_sendMessage);
}

void Heavy_Untitled::cTabread_ksLxEfjn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bzlLBzKp_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0sv9ZOMR_sendMessage);
}

void Heavy_Untitled::cSwitchcase_nmGyr64f_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_eSu4tsxf, 0, m, &cSlice_eSu4tsxf_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xJfVN9ct_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KleTW2SG_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_eSu4tsxf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_ksLxEfjn, 1, m, &cTabread_ksLxEfjn_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_ksLxEfjn, 1, m, &cTabread_ksLxEfjn_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_1YaAO02p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EakvVsvf_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSystem_kiB2RKfr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_S4dC22By_sendMessage);
}

void Heavy_Untitled::cBinop_iQmXkHIE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3QumybJq, HV_BINOP_MIN, 0, m, &cBinop_3QumybJq_sendMessage);
}

void Heavy_Untitled::cCast_KleTW2SG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_iQmXkHIE_sendMessage);
}

void Heavy_Untitled::cCast_xJfVN9ct_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1YaAO02p, 0, m, &cVar_1YaAO02p_sendMessage);
}

void Heavy_Untitled::cBinop_3QumybJq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_ksLxEfjn, 0, m, &cTabread_ksLxEfjn_sendMessage);
}

void Heavy_Untitled::cMsg_EakvVsvf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kiB2RKfr_sendMessage);
}

void Heavy_Untitled::cBinop_S4dC22By_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3QumybJq, HV_BINOP_MIN, 1, m, &cBinop_3QumybJq_sendMessage);
}

void Heavy_Untitled::cVar_ecOPRlSG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_wTXiABb8, 1, m, &cTabwrite_wTXiABb8_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_B9gugEvj, 1, m, &cTabwrite_B9gugEvj_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_OLWP9Fp6, 1, m, &cVar_OLWP9Fp6_sendMessage);
}

void Heavy_Untitled::cSlice_3HWHlAk2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_0ipxnk33_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dIgY3Ckn_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uOHabO2G_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabread_dYLtp878_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q2U4xCQm, HV_BINOP_EQ, 0, m, &cBinop_q2U4xCQm_sendMessage);
}

void Heavy_Untitled::cSwitchcase_Jf8gOecZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KzRsIXOj, 0, m, &cSlice_KzRsIXOj_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9ditu9i9_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_owA0MaQ2_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_KzRsIXOj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_dYLtp878, 1, m, &cTabread_dYLtp878_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_dYLtp878, 1, m, &cTabread_dYLtp878_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_TuY9vG5A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_u1KQAleV_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSystem_cOWkhTsA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_MiAdaH3z_sendMessage);
}

void Heavy_Untitled::cBinop_1vXBafz4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IdrSAtgv, HV_BINOP_MIN, 0, m, &cBinop_IdrSAtgv_sendMessage);
}

void Heavy_Untitled::cCast_owA0MaQ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_1vXBafz4_sendMessage);
}

void Heavy_Untitled::cCast_9ditu9i9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TuY9vG5A, 0, m, &cVar_TuY9vG5A_sendMessage);
}

void Heavy_Untitled::cBinop_IdrSAtgv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_dYLtp878, 0, m, &cTabread_dYLtp878_sendMessage);
}

void Heavy_Untitled::cMsg_u1KQAleV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cOWkhTsA_sendMessage);
}

void Heavy_Untitled::cBinop_MiAdaH3z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IdrSAtgv, HV_BINOP_MIN, 1, m, &cBinop_IdrSAtgv_sendMessage);
}

void Heavy_Untitled::cVar_ygKDTdkj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lsFSutHW, HV_BINOP_LESS_THAN, 1, m, &cBinop_lsFSutHW_sendMessage);
}

void Heavy_Untitled::cSwitchcase_JnPjrJdg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8NTYBGG8_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cCast_8NTYBGG8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wgs6XWI2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I0lyxVSy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_x45WrqLD_sendMessage);
}

void Heavy_Untitled::cVar_xf10YEOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lsFSutHW, HV_BINOP_LESS_THAN, 1, m, &cBinop_lsFSutHW_sendMessage);
}

void Heavy_Untitled::cIf_HCeIN9w2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yTbL6eMt_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5vAsxjni_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0ppCp9as_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Lxvek0ti, 0, m, &cSlice_Lxvek0ti_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_yZxrDg7L, 0, m, &cSlice_yZxrDg7L_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TfrESj2U_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabwrite_wTXiABb8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_mvhnIj2w_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_p0SBYesY, 0, m, &cSlice_p0SBYesY_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_wTXiABb8, 0, m, &cTabwrite_wTXiABb8_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_p0SBYesY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_wTXiABb8, 2, m, &cTabwrite_wTXiABb8_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_wTXiABb8, 2, m, &cTabwrite_wTXiABb8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabwrite_B9gugEvj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_a2oKoCXY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Q7yZ3ZIJ, 0, m, &cSlice_Q7yZ3ZIJ_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_B9gugEvj, 0, m, &cTabwrite_B9gugEvj_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_Q7yZ3ZIJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_B9gugEvj, 2, m, &cTabwrite_B9gugEvj_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_B9gugEvj, 2, m, &cTabwrite_B9gugEvj_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_mHaEzPdM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_a2oKoCXY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cVar_OLWP9Fp6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_SXnKr07Q_sendMessage);
}

void Heavy_Untitled::cSlice_Lxvek0ti_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_yZxrDg7L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 1, m, &cPack_ms4tJCZS_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_N1tG0Nyf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fEjvf4Ar_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PyFkmZ0i_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3HWHlAk2, 0, m, &cSlice_3HWHlAk2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_0ipxnk33, 0, m, &cSlice_0ipxnk33_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_HCeIN9w2, 0, m, &cIf_HCeIN9w2_sendMessage);
}

void Heavy_Untitled::cCast_WobYB3rL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_nmGyr64f_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_69LuKC9R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_4bYKYCDr_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_arK5u2fj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Jf8gOecZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_GH2FtkL1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ecOPRlSG, 1, m, &cVar_ecOPRlSG_sendMessage);
}

void Heavy_Untitled::cMsg_5jv94VYu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_HCeIN9w2, 1, m, &cIf_HCeIN9w2_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ecOPRlSG, 0, m, &cVar_ecOPRlSG_sendMessage);
}

void Heavy_Untitled::cMsg_iQ2onDBo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_HCeIN9w2, 1, m, &cIf_HCeIN9w2_sendMessage);
}

void Heavy_Untitled::cCast_fEjvf4Ar_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ygKDTdkj, 0, m, &cVar_ygKDTdkj_sendMessage);
}

void Heavy_Untitled::cCast_PyFkmZ0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5jv94VYu_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_uOHabO2G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_d9skxfiC, 0, m, &cVar_d9skxfiC_sendMessage);
}

void Heavy_Untitled::cCast_dIgY3Ckn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q2U4xCQm, HV_BINOP_EQ, 1, m, &cBinop_q2U4xCQm_sendMessage);
}

void Heavy_Untitled::cBinop_q2U4xCQm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X5aP7myU, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_X5aP7myU_sendMessage);
}

void Heavy_Untitled::cBinop_X5aP7myU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_JnPjrJdg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cBinop_3W7qtrEK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X5aP7myU, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_X5aP7myU_sendMessage);
}

void Heavy_Untitled::cBinop_lsFSutHW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3W7qtrEK, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_3W7qtrEK_sendMessage);
}

void Heavy_Untitled::cCast_x45WrqLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ecOPRlSG, 0, m, &cVar_ecOPRlSG_sendMessage);
}

void Heavy_Untitled::cCast_wgs6XWI2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xf10YEOw, 0, m, &cVar_xf10YEOw_sendMessage);
}

void Heavy_Untitled::cCast_I0lyxVSy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iQ2onDBo_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_0sv9ZOMR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lsFSutHW, HV_BINOP_LESS_THAN, 0, m, &cBinop_lsFSutHW_sendMessage);
}

void Heavy_Untitled::cCast_bzlLBzKp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xf10YEOw, 1, m, &cVar_xf10YEOw_sendMessage);
}

void Heavy_Untitled::cCast_mohsKVp9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_pq4kClLT_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_0lG3LL67_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mHaEzPdM, 0, m, &cVar_mHaEzPdM_sendMessage);
}

void Heavy_Untitled::cSend_pq4kClLT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jtRs8vkx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_yTbL6eMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Uw4XSLhW_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_5vAsxjni_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mohsKVp9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0lG3LL67_sendMessage);
}

void Heavy_Untitled::cMsg_Uw4XSLhW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_mvhnIj2w_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_0ppCp9as_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FXX3mPVc_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_TfrESj2U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OLWP9Fp6, 0, m, &cVar_OLWP9Fp6_sendMessage);
}

void Heavy_Untitled::cMsg_FXX3mPVc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 2, m, &cPack_ms4tJCZS_sendMessage);
}

void Heavy_Untitled::cIf_amxCcbMf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YJ68WBp4_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Tqhp5lgE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_HpBxoV3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3zsEsyvD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AoJOEBMV_sendMessage);
}

void Heavy_Untitled::cIf_pXX8KEEm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YDwpgKdw_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KIN4ExJX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_UOfhrUqh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_pXX8KEEm, 1, m, &cIf_pXX8KEEm_sendMessage);
}

void Heavy_Untitled::cVar_fpxCZfvt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_tfB1CuiV_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_eL6Hrr2v, 0, m, &cIf_eL6Hrr2v_sendMessage);
}

void Heavy_Untitled::cUnop_82H53ycz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_UOfhrUqh_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_pXX8KEEm, 0, m, &cIf_pXX8KEEm_sendMessage);
}

void Heavy_Untitled::cUnop_ZfUKlMCQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_UOfhrUqh_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_pXX8KEEm, 0, m, &cIf_pXX8KEEm_sendMessage);
}

void Heavy_Untitled::cIf_eL6Hrr2v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_ZfUKlMCQ_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_82H53ycz_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_tfB1CuiV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_eL6Hrr2v, 1, m, &cIf_eL6Hrr2v_sendMessage);
}

void Heavy_Untitled::cCast_AoJOEBMV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_amxCcbMf, 0, m, &cIf_amxCcbMf_sendMessage);
}

void Heavy_Untitled::cCast_3zsEsyvD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vEuM2YF5, HV_BINOP_LESS_THAN, 0, m, &cBinop_vEuM2YF5_sendMessage);
}

void Heavy_Untitled::cBinop_vEuM2YF5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_amxCcbMf, 1, m, &cIf_amxCcbMf_sendMessage);
}

void Heavy_Untitled::cCast_KIN4ExJX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gJh1YEMx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_YDwpgKdw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vEuM2YF5, HV_BINOP_LESS_THAN, 1, m, &cBinop_vEuM2YF5_sendMessage);
}

void Heavy_Untitled::cBinop_pbUChynO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HpBxoV3r, 0, m, &cVar_HpBxoV3r_sendMessage);
}

void Heavy_Untitled::cMsg_gJh1YEMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_HpBxoV3r, 0, m, &cVar_HpBxoV3r_sendMessage);
}

void Heavy_Untitled::cCast_Tqhp5lgE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_pbUChynO_sendMessage);
}

void Heavy_Untitled::cCast_YJ68WBp4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ezvHRmFv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9cG5JUym_sendMessage);
}

void Heavy_Untitled::cVar_tKNp0bRO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fpxCZfvt, 0, m, &cVar_fpxCZfvt_sendMessage);
}

void Heavy_Untitled::cTabwrite_EKvvyDhf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_yOZc1dia_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vZzIWhYL, 0, m, &cSlice_vZzIWhYL_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_EKvvyDhf, 0, m, &cTabwrite_EKvvyDhf_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_vZzIWhYL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_EKvvyDhf, 2, m, &cTabwrite_EKvvyDhf_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_EKvvyDhf, 2, m, &cTabwrite_EKvvyDhf_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabread_m5Bg50wm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_NEQ, 0.0f, 0, m, &cBinop_OWHlDRpO_sendMessage);
}

void Heavy_Untitled::cSwitchcase_e0IDno86_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5UlX8X6W, 0, m, &cSlice_5UlX8X6W_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ws5COI8Q_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_44akAmVQ_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_5UlX8X6W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_m5Bg50wm, 1, m, &cTabread_m5Bg50wm_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_m5Bg50wm, 1, m, &cTabread_m5Bg50wm_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_wTy0SC7G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DK68zaL9_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSystem_RDoCDh5y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_XMl04IP7_sendMessage);
}

void Heavy_Untitled::cBinop_ucPohb5S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZJMPWZB2, HV_BINOP_MIN, 0, m, &cBinop_ZJMPWZB2_sendMessage);
}

void Heavy_Untitled::cCast_44akAmVQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ucPohb5S_sendMessage);
}

void Heavy_Untitled::cCast_ws5COI8Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wTy0SC7G, 0, m, &cVar_wTy0SC7G_sendMessage);
}

void Heavy_Untitled::cBinop_ZJMPWZB2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_m5Bg50wm, 0, m, &cTabread_m5Bg50wm_sendMessage);
}

void Heavy_Untitled::cMsg_DK68zaL9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RDoCDh5y_sendMessage);
}

void Heavy_Untitled::cBinop_XMl04IP7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZJMPWZB2, HV_BINOP_MIN, 1, m, &cBinop_ZJMPWZB2_sendMessage);
}

void Heavy_Untitled::cIf_psb2ULCB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6uJAqLX8_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WYytiJx2_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oNHks6MC_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_k1e2s8kb_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zffzGKn4_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabread_eLh1bNxJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 1, m, &cPack_ms4tJCZS_sendMessage);
}

void Heavy_Untitled::cSwitchcase_Hw7OGZNx_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_FsDftiHS, 0, m, &cSlice_FsDftiHS_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Sio9NyVq_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_j8Y1Q8Do_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_FsDftiHS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_eLh1bNxJ, 1, m, &cTabread_eLh1bNxJ_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_eLh1bNxJ, 1, m, &cTabread_eLh1bNxJ_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_epGL60ip_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EAoa4xg0_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSystem_Qgz7yEX0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_1u5LZkTZ_sendMessage);
}

void Heavy_Untitled::cBinop_D1IRkBei_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sE4egqL1, HV_BINOP_MIN, 0, m, &cBinop_sE4egqL1_sendMessage);
}

void Heavy_Untitled::cCast_Sio9NyVq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_epGL60ip, 0, m, &cVar_epGL60ip_sendMessage);
}

void Heavy_Untitled::cCast_j8Y1Q8Do_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_D1IRkBei_sendMessage);
}

void Heavy_Untitled::cBinop_sE4egqL1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_eLh1bNxJ, 0, m, &cTabread_eLh1bNxJ_sendMessage);
}

void Heavy_Untitled::cMsg_EAoa4xg0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Qgz7yEX0_sendMessage);
}

void Heavy_Untitled::cBinop_1u5LZkTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sE4egqL1, HV_BINOP_MIN, 1, m, &cBinop_sE4egqL1_sendMessage);
}

void Heavy_Untitled::cCast_JfwdJZ2a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tKNp0bRO, 0, m, &cVar_tKNp0bRO_sendMessage);
}

void Heavy_Untitled::cCast_sW097EZV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UP4Zn7gi_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_UP4Zn7gi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSend_ATbjAGoY_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_ATbjAGoY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jtRs8vkx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_OWHlDRpO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_psb2ULCB, 1, m, &cIf_psb2ULCB_sendMessage);
}

void Heavy_Untitled::cCast_ezvHRmFv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_e0IDno86_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_9cG5JUym_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_psb2ULCB, 0, m, &cIf_psb2ULCB_sendMessage);
}

void Heavy_Untitled::cMsg_T8QSK9Kq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 2, m, &cPack_ms4tJCZS_sendMessage);
}

void Heavy_Untitled::cCast_WYytiJx2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Hw7OGZNx_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_zffzGKn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_uyHmiDWe_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_oNHks6MC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_SXnKr07Q_sendMessage);
}

void Heavy_Untitled::cCast_k1e2s8kb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zANqRjEy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gmH884qs_sendMessage);
}

void Heavy_Untitled::cCast_6uJAqLX8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T8QSK9Kq_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_zANqRjEy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_EKvvyDhf, 1, m, &cTabwrite_EKvvyDhf_sendMessage);
}

void Heavy_Untitled::cCast_gmH884qs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IsFh3Mtp_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_IsFh3Mtp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_yOZc1dia_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSend_uyHmiDWe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jtRs8vkx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cIf_S01BeoN0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yqq1cEpP_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bStpYGPe_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_GD1G4vnv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yLfCUkwU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eZ1Aez1Z_sendMessage);
}

void Heavy_Untitled::cIf_nRzgXrVd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Aaefi0EJ_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lcwDeQxl_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_EScCNFbg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_nRzgXrVd, 1, m, &cIf_nRzgXrVd_sendMessage);
}

void Heavy_Untitled::cVar_GpwqTJLF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_UidiMa0P_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_tFs2QY7r, 0, m, &cIf_tFs2QY7r_sendMessage);
}

void Heavy_Untitled::cUnop_rWzm6ISa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_EScCNFbg_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_nRzgXrVd, 0, m, &cIf_nRzgXrVd_sendMessage);
}

void Heavy_Untitled::cUnop_lRR0DlCQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_EScCNFbg_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_nRzgXrVd, 0, m, &cIf_nRzgXrVd_sendMessage);
}

void Heavy_Untitled::cIf_tFs2QY7r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_lRR0DlCQ_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_rWzm6ISa_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_UidiMa0P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_tFs2QY7r, 1, m, &cIf_tFs2QY7r_sendMessage);
}

void Heavy_Untitled::cCast_yLfCUkwU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DaTKfBfA, HV_BINOP_LESS_THAN, 0, m, &cBinop_DaTKfBfA_sendMessage);
}

void Heavy_Untitled::cCast_eZ1Aez1Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_S01BeoN0, 0, m, &cIf_S01BeoN0_sendMessage);
}

void Heavy_Untitled::cBinop_DaTKfBfA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_S01BeoN0, 1, m, &cIf_S01BeoN0_sendMessage);
}

void Heavy_Untitled::cCast_Aaefi0EJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DaTKfBfA, HV_BINOP_LESS_THAN, 1, m, &cBinop_DaTKfBfA_sendMessage);
}

void Heavy_Untitled::cCast_lcwDeQxl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gbfRcght_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_xO4ApUhA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GD1G4vnv, 0, m, &cVar_GD1G4vnv_sendMessage);
}

void Heavy_Untitled::cMsg_gbfRcght_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_GD1G4vnv, 0, m, &cVar_GD1G4vnv_sendMessage);
}

void Heavy_Untitled::cCast_bStpYGPe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_xO4ApUhA_sendMessage);
}

void Heavy_Untitled::cCast_yqq1cEpP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_bxdiMqLw, 1, m, &cTabwrite_bxdiMqLw_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_GFD1bArG, 1, m, &cTabwrite_GFD1bArG_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_VoASWy6m, 1, m, &cTabwrite_VoASWy6m_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PSHKBtX3_sendMessage);
}

void Heavy_Untitled::cVar_94XOzQZY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GpwqTJLF, 0, m, &cVar_GpwqTJLF_sendMessage);
}

void Heavy_Untitled::cTabwrite_VoASWy6m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_BJGG5Nqn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Lh63dQyz, 0, m, &cSlice_Lh63dQyz_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_VoASWy6m, 0, m, &cTabwrite_VoASWy6m_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_Lh63dQyz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_VoASWy6m, 2, m, &cTabwrite_VoASWy6m_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_VoASWy6m, 2, m, &cTabwrite_VoASWy6m_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabwrite_GFD1bArG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_5EkHn38O_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_hMwYR9L4, 0, m, &cSlice_hMwYR9L4_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_GFD1bArG, 0, m, &cTabwrite_GFD1bArG_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_hMwYR9L4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_GFD1bArG, 2, m, &cTabwrite_GFD1bArG_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_GFD1bArG, 2, m, &cTabwrite_GFD1bArG_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabwrite_bxdiMqLw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_Fe2sSjN9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6yakZT19, 0, m, &cSlice_6yakZT19_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_bxdiMqLw, 0, m, &cTabwrite_bxdiMqLw_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_6yakZT19_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_bxdiMqLw, 2, m, &cTabwrite_bxdiMqLw_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_bxdiMqLw, 2, m, &cTabwrite_bxdiMqLw_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cMsg_dw5ynsfM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_Fe2sSjN9_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_5EkHn38O_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_BJGG5Nqn_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_00LYYIOI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_L35nAhyY_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_0oGxOoAd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_94XOzQZY, 0, m, &cVar_94XOzQZY_sendMessage);
}

void Heavy_Untitled::cMsg_L35nAhyY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSend_471DT2ro_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_471DT2ro_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jtRs8vkx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_PSHKBtX3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dw5ynsfM_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cIf_YPm6ChEh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M291VCft_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OgM5PWWS_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_4d2bqPpa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PG77e1fA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QjUxWE6E_sendMessage);
}

void Heavy_Untitled::cIf_VEgd7F78_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_r99uo5an_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OVioZZ6f_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_cwkje50C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_VEgd7F78, 1, m, &cIf_VEgd7F78_sendMessage);
}

void Heavy_Untitled::cVar_YUBZsWRG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_xZZw9LuI_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_qY4H3yct, 0, m, &cIf_qY4H3yct_sendMessage);
}

void Heavy_Untitled::cUnop_Tc4MV21s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_cwkje50C_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_VEgd7F78, 0, m, &cIf_VEgd7F78_sendMessage);
}

void Heavy_Untitled::cUnop_zNHQXjnp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_cwkje50C_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_VEgd7F78, 0, m, &cIf_VEgd7F78_sendMessage);
}

void Heavy_Untitled::cIf_qY4H3yct_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_zNHQXjnp_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_Tc4MV21s_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_xZZw9LuI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qY4H3yct, 1, m, &cIf_qY4H3yct_sendMessage);
}

void Heavy_Untitled::cCast_PG77e1fA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XPQQC1kC, HV_BINOP_LESS_THAN, 0, m, &cBinop_XPQQC1kC_sendMessage);
}

void Heavy_Untitled::cCast_QjUxWE6E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_YPm6ChEh, 0, m, &cIf_YPm6ChEh_sendMessage);
}

void Heavy_Untitled::cBinop_XPQQC1kC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_YPm6ChEh, 1, m, &cIf_YPm6ChEh_sendMessage);
}

void Heavy_Untitled::cCast_r99uo5an_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XPQQC1kC, HV_BINOP_LESS_THAN, 1, m, &cBinop_XPQQC1kC_sendMessage);
}

void Heavy_Untitled::cCast_OVioZZ6f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pLIz6ieX_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_4P7aWHKD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4d2bqPpa, 0, m, &cVar_4d2bqPpa_sendMessage);
}

void Heavy_Untitled::cMsg_pLIz6ieX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_4d2bqPpa, 0, m, &cVar_4d2bqPpa_sendMessage);
}

void Heavy_Untitled::cCast_M291VCft_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9Nbl2R4L_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gIfyy6lx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NtjrhCuA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FRcoZvoH_sendMessage);
}

void Heavy_Untitled::cCast_OgM5PWWS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_4P7aWHKD_sendMessage);
}

void Heavy_Untitled::cVar_2fXwzPC4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YUBZsWRG, 0, m, &cVar_YUBZsWRG_sendMessage);
}

void Heavy_Untitled::cSwitchcase_mHtqVy93_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_b0O7Sf2o_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cCast_b0O7Sf2o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_W2uA6vdW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3rEhgPW1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8N7oI131_sendMessage);
}

void Heavy_Untitled::cVar_Pk9cnYBF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_gr88U5GO_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cIf_GxJbTmhV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cSwitchcase_IMEGhDXO_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_dQVgCckU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_2AF27Mb3_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_IMEGhDXO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uuyLJJBf_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cCast_uuyLJJBf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mW1PZ0Pz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gRMxQtub_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zreLyZ8P_sendMessage);
}

void Heavy_Untitled::cVar_jqMkPLyv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rA1YSuqe, HV_BINOP_LESS_THAN, 1, m, &cBinop_rA1YSuqe_sendMessage);
}

void Heavy_Untitled::cVar_xISby9fl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WPzZlGyE, HV_BINOP_LESS_THAN, 1, m, &cBinop_WPzZlGyE_sendMessage);
}

void Heavy_Untitled::cIf_f2H0755F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_sJrNCzo7, 0, m, &cSlice_sJrNCzo7_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_DBJKF5bq, 0, m, &cSlice_DBJKF5bq_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EJeGPCYy_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nT9aR5Kx_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o5zocmaS_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_NnePgBI4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AdXRDvYQ_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_SbMg3Ukw, 0, m, &cSlice_SbMg3Ukw_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_fvjPldMP, 0, m, &cSlice_fvjPldMP_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7m8tOuP9_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aqX8CzLD_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_R75Jr4Hh_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_s1qHK7bi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_NnePgBI4, 0, m, &cIf_NnePgBI4_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_f2H0755F, 0, m, &cIf_f2H0755F_sendMessage);
}

void Heavy_Untitled::cVar_psoJlvXW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_SXnKr07Q_sendMessage);
}

void Heavy_Untitled::cSlice_sJrNCzo7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 2, m, &cPack_ms4tJCZS_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_DBJKF5bq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSwitchcase_ra5q5eVa_onMessage(_c, NULL, 0, m, NULL);
      cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 1, m, &cPack_ms4tJCZS_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_KbwvmGi3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_SXnKr07Q_sendMessage);
}

void Heavy_Untitled::cIf_tO8YC0jz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cIf_onMessage(_c, &Context(_c)->cIf_NnePgBI4, 1, m, &cIf_NnePgBI4_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_tyBMIoav_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_OI54Zs2R_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cVar_KCuB7toO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_isqDqs6F_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cTabread_MKawrwcM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9l2jgCR7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_D9tk15Rr_sendMessage);
}

void Heavy_Untitled::cSwitchcase_RIDU36dS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_uB4Y9cn5, 0, m, &cSlice_uB4Y9cn5_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jVP1nKHi_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ppIdINwb_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_uB4Y9cn5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_MKawrwcM, 1, m, &cTabread_MKawrwcM_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_MKawrwcM, 1, m, &cTabread_MKawrwcM_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_90jh40hV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W0XsESj4_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSystem_w20b3bB2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BJ52ZmgH_sendMessage);
}

void Heavy_Untitled::cBinop_tbHM0p5H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iILUDKeE, HV_BINOP_MIN, 0, m, &cBinop_iILUDKeE_sendMessage);
}

void Heavy_Untitled::cCast_ppIdINwb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_tbHM0p5H_sendMessage);
}

void Heavy_Untitled::cCast_jVP1nKHi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_90jh40hV, 0, m, &cVar_90jh40hV_sendMessage);
}

void Heavy_Untitled::cBinop_iILUDKeE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_MKawrwcM, 0, m, &cTabread_MKawrwcM_sendMessage);
}

void Heavy_Untitled::cMsg_W0XsESj4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_w20b3bB2_sendMessage);
}

void Heavy_Untitled::cBinop_BJ52ZmgH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iILUDKeE, HV_BINOP_MIN, 1, m, &cBinop_iILUDKeE_sendMessage);
}

void Heavy_Untitled::cTabread_Nt71fgma_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_e6dacIN4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_K7IKscH1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V9KfocU2_sendMessage);
}

void Heavy_Untitled::cSwitchcase_LkbFDm5Y_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_juHGo8sT, 0, m, &cSlice_juHGo8sT_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FbRqzqXq_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_thszA2kU_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_juHGo8sT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_Nt71fgma, 1, m, &cTabread_Nt71fgma_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_Nt71fgma, 1, m, &cTabread_Nt71fgma_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_JJlZAkrK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YxOf5wJ8_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSystem_B6sS3O70_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_i8X5og8E_sendMessage);
}

void Heavy_Untitled::cBinop_04AO4jTv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qfvna1ya, HV_BINOP_MIN, 0, m, &cBinop_qfvna1ya_sendMessage);
}

void Heavy_Untitled::cCast_thszA2kU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_04AO4jTv_sendMessage);
}

void Heavy_Untitled::cCast_FbRqzqXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JJlZAkrK, 0, m, &cVar_JJlZAkrK_sendMessage);
}

void Heavy_Untitled::cBinop_qfvna1ya_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_Nt71fgma, 0, m, &cTabread_Nt71fgma_sendMessage);
}

void Heavy_Untitled::cMsg_YxOf5wJ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_B6sS3O70_sendMessage);
}

void Heavy_Untitled::cBinop_i8X5og8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qfvna1ya, HV_BINOP_MIN, 1, m, &cBinop_qfvna1ya_sendMessage);
}

void Heavy_Untitled::cTabwrite_pUc4SrXg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_Aq2W7bh7_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Q8Z65ii4, 0, m, &cSlice_Q8Z65ii4_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pUc4SrXg, 0, m, &cTabwrite_pUc4SrXg_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_Q8Z65ii4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pUc4SrXg, 2, m, &cTabwrite_pUc4SrXg_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pUc4SrXg, 2, m, &cTabwrite_pUc4SrXg_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabread_A7WmWLwB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 1, m, &cPack_ms4tJCZS_sendMessage);
}

void Heavy_Untitled::cSwitchcase_OI54Zs2R_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8s4G52Od, 0, m, &cSlice_8s4G52Od_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VOFERHbP_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cPiEAkoz_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_8s4G52Od_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_A7WmWLwB, 1, m, &cTabread_A7WmWLwB_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_A7WmWLwB, 1, m, &cTabread_A7WmWLwB_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_f7Mp5ED8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8hlj3urV_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSystem_XJPZGGaf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_bsWEKkvN_sendMessage);
}

void Heavy_Untitled::cBinop_Kft49CcZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KbMvoThg, HV_BINOP_MIN, 0, m, &cBinop_KbMvoThg_sendMessage);
}

void Heavy_Untitled::cCast_VOFERHbP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_f7Mp5ED8, 0, m, &cVar_f7Mp5ED8_sendMessage);
}

void Heavy_Untitled::cCast_cPiEAkoz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Kft49CcZ_sendMessage);
}

void Heavy_Untitled::cBinop_KbMvoThg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_A7WmWLwB, 0, m, &cTabread_A7WmWLwB_sendMessage);
}

void Heavy_Untitled::cMsg_8hlj3urV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XJPZGGaf_sendMessage);
}

void Heavy_Untitled::cBinop_bsWEKkvN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KbMvoThg, HV_BINOP_MIN, 1, m, &cBinop_KbMvoThg_sendMessage);
}

void Heavy_Untitled::cTabwrite_r1MvUxfI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_ra5q5eVa_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_K8Lsd6m8, 0, m, &cSlice_K8Lsd6m8_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_r1MvUxfI, 0, m, &cTabwrite_r1MvUxfI_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_K8Lsd6m8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_r1MvUxfI, 2, m, &cTabwrite_r1MvUxfI_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_r1MvUxfI, 2, m, &cTabwrite_r1MvUxfI_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabwrite_yRAQhZV7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_SF5jUovB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_1oKoHWEu, 0, m, &cSlice_1oKoHWEu_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_yRAQhZV7, 0, m, &cTabwrite_yRAQhZV7_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_1oKoHWEu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_yRAQhZV7, 2, m, &cTabwrite_yRAQhZV7_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_yRAQhZV7, 2, m, &cTabwrite_yRAQhZV7_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabwrite_nKNA232x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_isqDqs6F_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_etcFWKZg, 0, m, &cSlice_etcFWKZg_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_nKNA232x, 0, m, &cTabwrite_nKNA232x_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_etcFWKZg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_nKNA232x, 2, m, &cTabwrite_nKNA232x_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_nKNA232x, 2, m, &cTabwrite_nKNA232x_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cTabwrite_G8H1C4Yp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_clcnnOIF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_DJjnT04z, 0, m, &cSlice_DJjnT04z_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_G8H1C4Yp, 0, m, &cTabwrite_G8H1C4Yp_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_DJjnT04z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_G8H1C4Yp, 2, m, &cTabwrite_G8H1C4Yp_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_G8H1C4Yp, 2, m, &cTabwrite_G8H1C4Yp_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_wfHA9BG5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_clcnnOIF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cTabwrite_Kl78IjB2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cSwitchcase_KYfhV7sK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Rb8ZQHCW, 0, m, &cSlice_Rb8ZQHCW_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Kl78IjB2, 0, m, &cTabwrite_Kl78IjB2_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_Rb8ZQHCW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Kl78IjB2, 2, m, &cTabwrite_Kl78IjB2_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Kl78IjB2, 2, m, &cTabwrite_Kl78IjB2_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_w9NwxkNW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DRXTPB0l_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nTxoAAXE_sendMessage);
}

void Heavy_Untitled::cSlice_SbMg3Ukw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 2, m, &cPack_ms4tJCZS_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_fvjPldMP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSwitchcase_Aq2W7bh7_onMessage(_c, NULL, 0, m, NULL);
      cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 1, m, &cPack_ms4tJCZS_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_LSZfgo2r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lnNw57i5, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_lnNw57i5_sendMessage);
}

void Heavy_Untitled::cBinop_nwbFzRaC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4GUmBEhw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_adl1JC4E_sendMessage);
}

void Heavy_Untitled::cBinop_rA1YSuqe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hqXUhKRW, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_hqXUhKRW_sendMessage);
}

void Heavy_Untitled::cCast_9Nbl2R4L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Pk9cnYBF, 1, m, &cVar_Pk9cnYBF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_dQVgCckU, 1, m, &cVar_dQVgCckU_sendMessage);
}

void Heavy_Untitled::cCast_NtjrhCuA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RIDU36dS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_FRcoZvoH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_gIfyy6lx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_LkbFDm5Y_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSend_gr88U5GO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_K7XRV2jC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_D9tk15Rr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_z2mgV8FF_sendMessage);
}

void Heavy_Untitled::cCast_9l2jgCR7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nwbFzRaC, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_nwbFzRaC_sendMessage);
}

void Heavy_Untitled::cBinop_hqXUhKRW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GxJbTmhV, 0, m, &cIf_GxJbTmhV_sendMessage);
}

void Heavy_Untitled::cBinop_z2mgV8FF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hqXUhKRW, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_hqXUhKRW_sendMessage);
}

void Heavy_Untitled::cCast_4GUmBEhw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mHtqVy93_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_adl1JC4E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_wSN83KgI_sendMessage);
}

void Heavy_Untitled::cBinop_wSN83KgI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GxJbTmhV, 1, m, &cIf_GxJbTmhV_sendMessage);
}

void Heavy_Untitled::cSend_2AF27Mb3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mzlyeRHz_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_GVGVKUQ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_K7XRV2jC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_lnZPCzTm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mzlyeRHz_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_jObTFSqE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NYFf9xHG_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_vOMYe3fU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_w9NwxkNW, 0, m, &cVar_w9NwxkNW_sendMessage);
}

void Heavy_Untitled::cCast_aLZCVuA1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2fXwzPC4, 0, m, &cVar_2fXwzPC4_sendMessage);
}

void Heavy_Untitled::cBinop_WPzZlGyE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nwbFzRaC, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_nwbFzRaC_sendMessage);
}

void Heavy_Untitled::cCast_V9KfocU2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rA1YSuqe, HV_BINOP_LESS_THAN, 0, m, &cBinop_rA1YSuqe_sendMessage);
}

void Heavy_Untitled::cCast_K7IKscH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WPzZlGyE, HV_BINOP_LESS_THAN, 0, m, &cBinop_WPzZlGyE_sendMessage);
}

void Heavy_Untitled::cCast_e6dacIN4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jqMkPLyv, 1, m, &cVar_jqMkPLyv_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_xISby9fl, 1, m, &cVar_xISby9fl_sendMessage);
}

void Heavy_Untitled::cCast_nTxoAAXE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jqMkPLyv, 0, m, &cVar_jqMkPLyv_sendMessage);
}

void Heavy_Untitled::cCast_DRXTPB0l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xISby9fl, 0, m, &cVar_xISby9fl_sendMessage);
}

void Heavy_Untitled::cSend_jH6HmBWc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0uRV4xwd_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_gRMxQtub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_etQzHxSj_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_zreLyZ8P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dQVgCckU, 0, m, &cVar_dQVgCckU_sendMessage);
}

void Heavy_Untitled::cCast_mW1PZ0Pz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jqMkPLyv, 0, m, &cVar_jqMkPLyv_sendMessage);
}

void Heavy_Untitled::cMsg_etQzHxSj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSend_jH6HmBWc_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_B2McxIGr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSend_zSULqBka_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_zSULqBka_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_iATENhU1_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_8N7oI131_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Pk9cnYBF, 0, m, &cVar_Pk9cnYBF_sendMessage);
}

void Heavy_Untitled::cCast_3rEhgPW1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B2McxIGr_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_W2uA6vdW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xISby9fl, 0, m, &cVar_xISby9fl_sendMessage);
}

void Heavy_Untitled::cMsg_NYFf9xHG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSend_lnZPCzTm_sendMessage(_c, 0, m);
  cSend_GVGVKUQ6_sendMessage(_c, 0, m);
  cSend_5xFJIm9S_sendMessage(_c, 0, m);
  cSend_eUKxNiuQ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_5xFJIm9S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_iATENhU1_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_eUKxNiuQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0uRV4xwd_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_CJFYuN3l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_IjVglXUO_sendMessage);
}

void Heavy_Untitled::cCast_PXFFrv9D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_f2H0755F, 1, m, &cIf_f2H0755F_sendMessage);
}

void Heavy_Untitled::cBinop_lnNw57i5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_tO8YC0jz, 0, m, &cIf_tO8YC0jz_sendMessage);
}

void Heavy_Untitled::cBinop_IjVglXUO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LSZfgo2r, 0, m, &cVar_LSZfgo2r_sendMessage);
}

void Heavy_Untitled::cMsg_ZAjd3ohb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_SF5jUovB_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_ZTmBxZT7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_KYfhV7sK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cCast_OMxdflu2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tyBMIoav, 0, m, &cVar_tyBMIoav_sendMessage);
}

void Heavy_Untitled::cCast_8q1ugx4w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OAAX3xBz_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_cwKzedQ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KbwvmGi3, 0, m, &cVar_KbwvmGi3_sendMessage);
}

void Heavy_Untitled::cMsg_OAAX3xBz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 2, m, &cPack_ms4tJCZS_sendMessage);
}

void Heavy_Untitled::cCast_nT9aR5Kx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZAjd3ohb_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_o5zocmaS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rlToZgxs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_A11fKV1f_sendMessage);
}

void Heavy_Untitled::cCast_EJeGPCYy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_psoJlvXW, 0, m, &cVar_psoJlvXW_sendMessage);
}

void Heavy_Untitled::cCast_rlToZgxs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_eipYDBmy_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_A11fKV1f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KCuB7toO, 0, m, &cVar_KCuB7toO_sendMessage);
}

void Heavy_Untitled::cSend_eipYDBmy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jtRs8vkx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_BK2jsW3O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wfHA9BG5, 0, m, &cVar_wfHA9BG5_sendMessage);
}

void Heavy_Untitled::cCast_w8tUSJo5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_tos94VyB_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_tos94VyB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jtRs8vkx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_AdXRDvYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8q1ugx4w_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OMxdflu2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cwKzedQ9_sendMessage);
}

void Heavy_Untitled::cCast_R75Jr4Hh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_w8tUSJo5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BK2jsW3O_sendMessage);
}

void Heavy_Untitled::cCast_7m8tOuP9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KbwvmGi3, 0, m, &cVar_KbwvmGi3_sendMessage);
}

void Heavy_Untitled::cCast_aqX8CzLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZTmBxZT7_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cCast_irUhafVd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LSZfgo2r, 0, m, &cVar_LSZfgo2r_sendMessage);
}

void Heavy_Untitled::cCast_Su1YEqkY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lnNw57i5, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_lnNw57i5_sendMessage);
}

void Heavy_Untitled::cSend_PlU7DQrR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xstzFzZ3_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_CyIk8wMs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eGfEkAme, 1, m, &cVar_eGfEkAme_sendMessage);
}

void Heavy_Untitled::cSend_caBZbvwo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xbMxawFB_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_SXnKr07Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ms4tJCZS, 0, m, &cPack_ms4tJCZS_sendMessage);
}

void Heavy_Untitled::cBinop_wwy5j0MH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_CyIk8wMs_sendMessage);
  cSend_caBZbvwo_sendMessage(_c, 0, m);
}

void Heavy_Untitled::hTable_yzGZsCzt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::hTable_1CJAv4mb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::hTable_TVJ0157f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_4AngLcNo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xvpRkzEG, 0, m, &cVar_xvpRkzEG_sendMessage);
}

void Heavy_Untitled::cCast_GIZNpRfj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_siK8ADSE_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_43l3Z9rV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_x6mk0LQo_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_siK8ADSE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 65535.0f);
  cSend_43l3Z9rV_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_JJiGv52s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_UrJE1AFi, 1, m, &cIf_UrJE1AFi_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_6SJkurkA_sendMessage);
}

void Heavy_Untitled::cBinop_6SJkurkA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_MZUhK1hh, 1, m, &cIf_MZUhK1hh_sendMessage);
}

void Heavy_Untitled::cBinop_3PqpHXAQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_PlU7DQrR_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_xDpvG2BH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_js79pqhT_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_Znf2hDK4_sendMessage);
}

void Heavy_Untitled::cBinop_js79pqhT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xDpvG2BH, 1, m, &cVar_xDpvG2BH_sendMessage);
}

void Heavy_Untitled::cIf_23eomtGF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_QbXZSEFl, 0, m, &cPack_QbXZSEFl_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_tM2bGRon_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_OFmaUMmA_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_23eomtGF, 1, m, &cIf_23eomtGF_sendMessage);
}

void Heavy_Untitled::cBinop_OFmaUMmA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tM2bGRon, 1, m, &cVar_tM2bGRon_sendMessage);
}

void Heavy_Untitled::cPack_QbXZSEFl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FvQTDnS0_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_JonYBon0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_iX654zRz_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Ua6omJ3y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_RJ4aIYvT, 0, m, &cIf_RJ4aIYvT_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_8X2zYq0i, 0, m, &cIf_8X2zYq0i_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_oJr9KyJL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_I4hFDPh5_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_mfPd2Uk3, 0, m, &cIf_mfPd2Uk3_sendMessage);
}

void Heavy_Untitled::cUnop_zrSzBDWE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_oWFS5Rju_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CNSGPZUH, HV_BINOP_EQ, 1, m, &cBinop_CNSGPZUH_sendMessage);
}

void Heavy_Untitled::cUnop_vwptmmZE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_oWFS5Rju_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CNSGPZUH, HV_BINOP_EQ, 1, m, &cBinop_CNSGPZUH_sendMessage);
}

void Heavy_Untitled::cIf_mfPd2Uk3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_vwptmmZE_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_zrSzBDWE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_I4hFDPh5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mfPd2Uk3, 1, m, &cIf_mfPd2Uk3_sendMessage);
}

void Heavy_Untitled::cIf_8X2zYq0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_IEShzcjv_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_0Ag6p8Wp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_X9g5cOq0_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_RJ4aIYvT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_IEShzcjv_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_9OFabHBN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_X9g5cOq0_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_oWFS5Rju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nv265JHv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ha6GE8oK_sendMessage);
}

void Heavy_Untitled::cBinop_iX654zRz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CNSGPZUH, HV_BINOP_EQ, 0, m, &cBinop_CNSGPZUH_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_9OFabHBN, 0, m, &cIf_9OFabHBN_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_0Ag6p8Wp, 0, m, &cIf_0Ag6p8Wp_sendMessage);
}

void Heavy_Untitled::cBinop_CNSGPZUH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q0n2cnYm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qbI4kPcC_sendMessage);
}

void Heavy_Untitled::cCast_qbI4kPcC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_RJ4aIYvT, 1, m, &cIf_RJ4aIYvT_sendMessage);
}

void Heavy_Untitled::cCast_Q0n2cnYm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_0Ag6p8Wp, 1, m, &cIf_0Ag6p8Wp_sendMessage);
}

void Heavy_Untitled::cBinop_X9g5cOq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_nv265JHv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_9OFabHBN, 1, m, &cIf_9OFabHBN_sendMessage);
}

void Heavy_Untitled::cCast_Ha6GE8oK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_8X2zYq0i, 1, m, &cIf_8X2zYq0i_sendMessage);
}

void Heavy_Untitled::cVar_GAUBQLrO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_bFIV0aVe_sendMessage);
}

void Heavy_Untitled::cSlice_9Cl5p0cD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_34K74UX3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Zl1HlYug_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EWO0aTpg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_ZzCQ7aZp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_FzJAqETs_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_6ddiEHh4, m);
}

void Heavy_Untitled::cBinop_FzJAqETs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZzCQ7aZp, 1, m, &cVar_ZzCQ7aZp_sendMessage);
}

void Heavy_Untitled::cVar_U8R0zCDr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_HlYrUMpQ_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_uvmOGlWp, m);
}

void Heavy_Untitled::cBinop_HlYrUMpQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U8R0zCDr, 1, m, &cVar_U8R0zCDr_sendMessage);
}

void Heavy_Untitled::cVar_4skQDTpC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_dG33MH4F_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_tzCnj0IM, m);
}

void Heavy_Untitled::cBinop_dG33MH4F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4skQDTpC, 1, m, &cVar_4skQDTpC_sendMessage);
}

void Heavy_Untitled::cCast_KCTcPHfA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xn80Lnbp, 0, m, &cVar_xn80Lnbp_sendMessage);
}

void Heavy_Untitled::cVar_xn80Lnbp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_P5kmHKMT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_OmfIOXuk, 0, m, &cVar_OmfIOXuk_sendMessage);
}

void Heavy_Untitled::cVar_OmfIOXuk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Cy6A6boB_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_U9Qi2F90_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_u3hKajtB_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_Cy6A6boB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5tJJpSZZ_sendMessage);
      break;
    }
    default: {
      cMsg_n6ekY5zw_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_5tJJpSZZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZzCQ7aZp, 0, m, &cVar_ZzCQ7aZp_sendMessage);
}

void Heavy_Untitled::cSwitchcase_U9Qi2F90_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Xy1Gi548_sendMessage);
      break;
    }
    default: {
      cMsg_OK6Ozvxf_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_Xy1Gi548_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U8R0zCDr, 0, m, &cVar_U8R0zCDr_sendMessage);
}

void Heavy_Untitled::cSwitchcase_u3hKajtB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_c30oiU1W_sendMessage);
      break;
    }
    default: {
      cMsg_lGrwKpCS_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_c30oiU1W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4skQDTpC, 0, m, &cVar_4skQDTpC_sendMessage);
}

void Heavy_Untitled::cMsg_jEbAzfNz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aanrSqJZ_sendMessage);
}

void Heavy_Untitled::cSystem_aanrSqJZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EIv6XypC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_EIv6XypC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_cNRyKiCl_sendMessage);
}

void Heavy_Untitled::cBinop_cNRyKiCl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iDEcza7Z, m);
}

void Heavy_Untitled::cMsg_2OIDo7qs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_AEBqcpdg_sendMessage);
}

void Heavy_Untitled::cSystem_AEBqcpdg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5sQsZv5z_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_5sQsZv5z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Ai9GUIwc_sendMessage);
}

void Heavy_Untitled::cBinop_Ai9GUIwc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jpFaYw3l, m);
}

void Heavy_Untitled::cSwitchcase_CLC6smHk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_kOrPgCUQ, 0, m, &cSlice_kOrPgCUQ_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_GD2WjntJ, 0, m, &cSlice_GD2WjntJ_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6EiRi7lt, 0, m, &cSlice_6EiRi7lt_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_LHp64jY6, 0, m, &cSlice_LHp64jY6_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VLsXX47A, 0, m, &cSlice_VLsXX47A_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_R5rTDpF2, 0, m, &cSlice_R5rTDpF2_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mh8FWYLV, 0, m, &cSlice_mh8FWYLV_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UUf4fyHb, 0, m, &cSlice_UUf4fyHb_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_QXZbgiXG, 0, m, &cSlice_QXZbgiXG_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gYsVpRun, 0, m, &cSlice_gYsVpRun_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_kOrPgCUQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uZDcRAkJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_uZDcRAkJ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_GD2WjntJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_9Cl5p0cD, 0, m, &cSlice_9Cl5p0cD_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Zl1HlYug, 0, m, &cSlice_Zl1HlYug_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_9Cl5p0cD, 0, m, &cSlice_9Cl5p0cD_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Zl1HlYug, 0, m, &cSlice_Zl1HlYug_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_6EiRi7lt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_14V6Gie9_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_14V6Gie9_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_LHp64jY6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_hq2Emffx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_hq2Emffx_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_VLsXX47A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XrG4E5Ho_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_XrG4E5Ho_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_R5rTDpF2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_j26cJm2U_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_j26cJm2U_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_mh8FWYLV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_iBFACK3K_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_iBFACK3K_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_UUf4fyHb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_f6DyFINQ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_f6DyFINQ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_QXZbgiXG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Wf8dsH4V_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Wf8dsH4V_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_gYsVpRun_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_wZ0KchNK_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_wZ0KchNK_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_4UudeMfo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2RDIt8U9_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_cklPAZel_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_QObORVG6, 0, m, &cSlice_QObORVG6_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_4UudeMfo, 0, m, &cPack_4UudeMfo_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_QObORVG6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_1mIauuRP, 0, m, &cPack_1mIauuRP_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_1mIauuRP, 0, m, &cPack_1mIauuRP_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_1mIauuRP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iRdG2ZWr_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_Znf2hDK4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_08pU2lv2, m);
}

void Heavy_Untitled::cBinop_MzY1OfWZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_9fQZouz9_sendMessage);
}

void Heavy_Untitled::cBinop_9fQZouz9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lAJTqkZW, m);
}

void Heavy_Untitled::cMsg_FvQTDnS0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_7BccC2Vo, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_7BccC2Vo, 0, m, NULL);
}

void Heavy_Untitled::cBinop_b6s9hZC0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QbXZSEFl, 1, m, &cPack_QbXZSEFl_sendMessage);
}

void Heavy_Untitled::cCast_r3OIRWhN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_b6s9hZC0, HV_BINOP_ADD, 0, m, &cBinop_b6s9hZC0_sendMessage);
}

void Heavy_Untitled::cCast_BlzE1JS7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_b6s9hZC0, HV_BINOP_ADD, 1, m, &cBinop_b6s9hZC0_sendMessage);
}

void Heavy_Untitled::cBinop_IEShzcjv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GAUBQLrO, 0, m, &cVar_GAUBQLrO_sendMessage);
}

void Heavy_Untitled::cBinop_bFIV0aVe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_PWNIPXuP_sendMessage);
}

void Heavy_Untitled::cBinop_PWNIPXuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YzZh8RJa_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_k8GDXGsb, 0, m, NULL);
}

void Heavy_Untitled::cMsg_YzZh8RJa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_k8GDXGsb, 0, m, NULL);
}

void Heavy_Untitled::cSend_uZDcRAkJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9Ei8mCAL_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_EWO0aTpg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_I2Mbv6YN_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_34K74UX3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4RAU41uv_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_14V6Gie9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2d9wmi2n_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_hq2Emffx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QVCVoUgg_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_XrG4E5Ho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_alxFZCMi_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_j26cJm2U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4HVnENc3_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_SZgZGMgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_XY9hU7CI_sendMessage);
}

void Heavy_Untitled::cBinop_XY9hU7CI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_Xx0gJuZW_sendMessage);
}

void Heavy_Untitled::cBinop_Xx0gJuZW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BlzE1JS7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r3OIRWhN_sendMessage);
}

void Heavy_Untitled::cBinop_VEA4JsqD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QbXZSEFl, 2, m, &cPack_QbXZSEFl_sendMessage);
}

void Heavy_Untitled::cSend_f6DyFINQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_t8FcDJqk_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_iBFACK3K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_amriBnAQ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_P5kmHKMT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_DoB0IW7I_sendMessage);
}

void Heavy_Untitled::cMsg_n6ekY5zw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_ZzCQ7aZp, 0, m, &cVar_ZzCQ7aZp_sendMessage);
}

void Heavy_Untitled::cMsg_OK6Ozvxf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_U8R0zCDr, 0, m, &cVar_U8R0zCDr_sendMessage);
}

void Heavy_Untitled::cMsg_lGrwKpCS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_4skQDTpC, 0, m, &cVar_4skQDTpC_sendMessage);
}

void Heavy_Untitled::cBinop_DoB0IW7I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xn80Lnbp, 1, m, &cVar_xn80Lnbp_sendMessage);
}

void Heavy_Untitled::cBinop_0NKgm6r4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_4UudeMfo, 1, m, &cPack_4UudeMfo_sendMessage);
}

void Heavy_Untitled::cBinop_6QO66tQz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_1mIauuRP, 1, m, &cPack_1mIauuRP_sendMessage);
}

void Heavy_Untitled::cSend_Wf8dsH4V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kOLnqRN5_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_wZ0KchNK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_MGKtMHPt_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_UfdO6S3s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_cklPAZel_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_2RDIt8U9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_SqW1jNmV, 0, m, NULL);
}

void Heavy_Untitled::cMsg_iRdG2ZWr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_SqW1jNmV, 0, m, NULL);
}

void Heavy_Untitled::cVar_gtD2AWZ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_JvRyri2Y_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_HG012Ax2_sendMessage);
}

void Heavy_Untitled::cBinop_JvRyri2Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gtD2AWZ3, 1, m, &cVar_gtD2AWZ3_sendMessage);
}

void Heavy_Untitled::cIf_WIN34lcw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_cx6gT1zH, 0, m, &cPack_cx6gT1zH_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_tyBqUqFp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_M7ZaOXI3_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_WIN34lcw, 1, m, &cIf_WIN34lcw_sendMessage);
}

void Heavy_Untitled::cBinop_M7ZaOXI3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tyBqUqFp, 1, m, &cVar_tyBqUqFp_sendMessage);
}

void Heavy_Untitled::cPack_cx6gT1zH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QKI3aLcA_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_227n5T6F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ndGrVg2c_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_uwCKxtsO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_xaygRGNj, 0, m, &cIf_xaygRGNj_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_14HZcSLu, 0, m, &cIf_14HZcSLu_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_4z0BTbF3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_XexYLbV9_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_g9diwvDb, 0, m, &cIf_g9diwvDb_sendMessage);
}

void Heavy_Untitled::cUnop_Fhqzehhy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_xyea6Ibv_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IX5XyKqn, HV_BINOP_EQ, 1, m, &cBinop_IX5XyKqn_sendMessage);
}

void Heavy_Untitled::cUnop_0gBCm1O0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_xyea6Ibv_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IX5XyKqn, HV_BINOP_EQ, 1, m, &cBinop_IX5XyKqn_sendMessage);
}

void Heavy_Untitled::cIf_g9diwvDb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_0gBCm1O0_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_Fhqzehhy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_XexYLbV9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_g9diwvDb, 1, m, &cIf_g9diwvDb_sendMessage);
}

void Heavy_Untitled::cIf_14HZcSLu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_QQwgvR6a_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_IymvnsBS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_oGKeo5Zq_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_xaygRGNj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_QQwgvR6a_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_6qKbWYmr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_oGKeo5Zq_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_xyea6Ibv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7mKFffp1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wyVotzfR_sendMessage);
}

void Heavy_Untitled::cBinop_ndGrVg2c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IX5XyKqn, HV_BINOP_EQ, 0, m, &cBinop_IX5XyKqn_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_6qKbWYmr, 0, m, &cIf_6qKbWYmr_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_IymvnsBS, 0, m, &cIf_IymvnsBS_sendMessage);
}

void Heavy_Untitled::cBinop_IX5XyKqn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EvlWUUG5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kKb5z30x_sendMessage);
}

void Heavy_Untitled::cCast_kKb5z30x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_xaygRGNj, 1, m, &cIf_xaygRGNj_sendMessage);
}

void Heavy_Untitled::cCast_EvlWUUG5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_IymvnsBS, 1, m, &cIf_IymvnsBS_sendMessage);
}

void Heavy_Untitled::cBinop_oGKeo5Zq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_7mKFffp1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6qKbWYmr, 1, m, &cIf_6qKbWYmr_sendMessage);
}

void Heavy_Untitled::cCast_wyVotzfR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_14HZcSLu, 1, m, &cIf_14HZcSLu_sendMessage);
}

void Heavy_Untitled::cVar_HtG61Gdm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_rk0btITy_sendMessage);
}

void Heavy_Untitled::cSlice_XqLb57BZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EaiAEw8P_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_mdUdXXOJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_bhvkfTtm_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_SkvJ109S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_wrKvSplq_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TdWWjeUj, m);
}

void Heavy_Untitled::cBinop_wrKvSplq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SkvJ109S, 1, m, &cVar_SkvJ109S_sendMessage);
}

void Heavy_Untitled::cVar_nBqG35VT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_MO7lT91p_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_nlTDH2a4, m);
}

void Heavy_Untitled::cBinop_MO7lT91p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nBqG35VT, 1, m, &cVar_nBqG35VT_sendMessage);
}

void Heavy_Untitled::cVar_a5KbCQqQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Rz8kjx7B_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_UjApd58n, m);
}

void Heavy_Untitled::cBinop_Rz8kjx7B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_a5KbCQqQ, 1, m, &cVar_a5KbCQqQ_sendMessage);
}

void Heavy_Untitled::cCast_RcuzUjhX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zsZMdo5f, 0, m, &cVar_zsZMdo5f_sendMessage);
}

void Heavy_Untitled::cVar_zsZMdo5f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_EPy0pz6q_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_5BkE3RQ1, 0, m, &cVar_5BkE3RQ1_sendMessage);
}

void Heavy_Untitled::cVar_5BkE3RQ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_u2MNdLPa_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Pa06ogUJ_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_0geE5ZFj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_u2MNdLPa_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jG8TDQgE_sendMessage);
      break;
    }
    default: {
      cMsg_pmc1gRLA_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_jG8TDQgE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SkvJ109S, 0, m, &cVar_SkvJ109S_sendMessage);
}

void Heavy_Untitled::cSwitchcase_Pa06ogUJ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_033k72lV_sendMessage);
      break;
    }
    default: {
      cMsg_cTujndTG_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_033k72lV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nBqG35VT, 0, m, &cVar_nBqG35VT_sendMessage);
}

void Heavy_Untitled::cSwitchcase_0geE5ZFj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QIwBK9tq_sendMessage);
      break;
    }
    default: {
      cMsg_pVRfRrkX_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_QIwBK9tq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_a5KbCQqQ, 0, m, &cVar_a5KbCQqQ_sendMessage);
}

void Heavy_Untitled::cMsg_Ry6XK4K1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Wb3C7UVm_sendMessage);
}

void Heavy_Untitled::cSystem_Wb3C7UVm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Lm3cj3BH_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_Lm3cj3BH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_G8l6EFpt_sendMessage);
}

void Heavy_Untitled::cBinop_G8l6EFpt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_WvsXoMEW, m);
}

void Heavy_Untitled::cMsg_jZ5gDgGc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ggKhnU0E_sendMessage);
}

void Heavy_Untitled::cSystem_ggKhnU0E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5HW3SFbq_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_5HW3SFbq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_7vS70FvJ_sendMessage);
}

void Heavy_Untitled::cBinop_7vS70FvJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vqRPKfJY, m);
}

void Heavy_Untitled::cSwitchcase_rq43YVJF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tjF78wM1, 0, m, &cSlice_tjF78wM1_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bIjdOMix, 0, m, &cSlice_bIjdOMix_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Vh2itSGm, 0, m, &cSlice_Vh2itSGm_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_lRZT3Xtp, 0, m, &cSlice_lRZT3Xtp_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Yj2jhRKy, 0, m, &cSlice_Yj2jhRKy_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Uob1ZVx9, 0, m, &cSlice_Uob1ZVx9_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2H15Mb2y, 0, m, &cSlice_2H15Mb2y_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ISKOZ4iv, 0, m, &cSlice_ISKOZ4iv_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_aLpKPJ8l, 0, m, &cSlice_aLpKPJ8l_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_4gDNZYJ2, 0, m, &cSlice_4gDNZYJ2_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_tjF78wM1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_OjAhPJsV_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_OjAhPJsV_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_bIjdOMix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_XqLb57BZ, 0, m, &cSlice_XqLb57BZ_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_mdUdXXOJ, 0, m, &cSlice_mdUdXXOJ_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_XqLb57BZ, 0, m, &cSlice_XqLb57BZ_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_mdUdXXOJ, 0, m, &cSlice_mdUdXXOJ_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Vh2itSGm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Xte9q2N5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Xte9q2N5_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_lRZT3Xtp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_3QsmFFec_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_3QsmFFec_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Yj2jhRKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_SFhAFc8c_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_SFhAFc8c_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Uob1ZVx9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qMP3ebwB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_qMP3ebwB_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_2H15Mb2y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ZWIurADj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ZWIurADj_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_ISKOZ4iv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_XkPxPto7_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_XkPxPto7_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_aLpKPJ8l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_yCu6Ovaz_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_yCu6Ovaz_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_4gDNZYJ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_zUp8m757_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_zUp8m757_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_iMJWrA0d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_c2mcCSav_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_YsB1e978_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_MsCVUwW0, 0, m, &cSlice_MsCVUwW0_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_iMJWrA0d, 0, m, &cPack_iMJWrA0d_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_MsCVUwW0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_LKwnwYgB, 0, m, &cPack_LKwnwYgB_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_LKwnwYgB, 0, m, &cPack_LKwnwYgB_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_LKwnwYgB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dJ4Y9qvn_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_HG012Ax2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zSuec1u8, m);
}

void Heavy_Untitled::cBinop_GhkAXNHI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_TLPEd9yf_sendMessage);
}

void Heavy_Untitled::cBinop_TLPEd9yf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_paNbZdPb, m);
}

void Heavy_Untitled::cMsg_QKI3aLcA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_PHX6rp4L, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_PHX6rp4L, 0, m, NULL);
}

void Heavy_Untitled::cBinop_kp19ddPr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_cx6gT1zH, 1, m, &cPack_cx6gT1zH_sendMessage);
}

void Heavy_Untitled::cCast_EAtDijUC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kp19ddPr, HV_BINOP_ADD, 1, m, &cBinop_kp19ddPr_sendMessage);
}

void Heavy_Untitled::cCast_g3ZlR8FY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kp19ddPr, HV_BINOP_ADD, 0, m, &cBinop_kp19ddPr_sendMessage);
}

void Heavy_Untitled::cBinop_QQwgvR6a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HtG61Gdm, 0, m, &cVar_HtG61Gdm_sendMessage);
}

void Heavy_Untitled::cBinop_rk0btITy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_hwTB1vrC_sendMessage);
}

void Heavy_Untitled::cBinop_hwTB1vrC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nq3ory6s_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_5fm4ekRq, 0, m, NULL);
}

void Heavy_Untitled::cMsg_nq3ory6s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_5fm4ekRq, 0, m, NULL);
}

void Heavy_Untitled::cSend_OjAhPJsV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HRkzPdBF_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_bhvkfTtm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LEUQyyi4_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_EaiAEw8P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_YQqvAyAi_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Xte9q2N5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WDOnjyKs_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_3QsmFFec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mzF1lPi0_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_SFhAFc8c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_3rtVjkuF_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_qMP3ebwB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_f1MmvNrP_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_jnZRn78Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_iMR0yB5X_sendMessage);
}

void Heavy_Untitled::cBinop_iMR0yB5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_mb5QpXK6_sendMessage);
}

void Heavy_Untitled::cBinop_mb5QpXK6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EAtDijUC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_g3ZlR8FY_sendMessage);
}

void Heavy_Untitled::cBinop_erA9bsHJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_cx6gT1zH, 2, m, &cPack_cx6gT1zH_sendMessage);
}

void Heavy_Untitled::cSend_XkPxPto7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VDikrZjj_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_ZWIurADj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_oIdjvBsP_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_EPy0pz6q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_7tn4jZXC_sendMessage);
}

void Heavy_Untitled::cMsg_pmc1gRLA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_SkvJ109S, 0, m, &cVar_SkvJ109S_sendMessage);
}

void Heavy_Untitled::cMsg_cTujndTG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_nBqG35VT, 0, m, &cVar_nBqG35VT_sendMessage);
}

void Heavy_Untitled::cMsg_pVRfRrkX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_a5KbCQqQ, 0, m, &cVar_a5KbCQqQ_sendMessage);
}

void Heavy_Untitled::cBinop_7tn4jZXC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zsZMdo5f, 1, m, &cVar_zsZMdo5f_sendMessage);
}

void Heavy_Untitled::cBinop_7dSl9Z91_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_iMJWrA0d, 1, m, &cPack_iMJWrA0d_sendMessage);
}

void Heavy_Untitled::cBinop_8GsLQagd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_LKwnwYgB, 1, m, &cPack_LKwnwYgB_sendMessage);
}

void Heavy_Untitled::cSend_yCu6Ovaz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ssyf6iw0_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_zUp8m757_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PTl9FZFq_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_OHaGRZCm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_YsB1e978_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_c2mcCSav_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_RoBMwHPq, 0, m, NULL);
}

void Heavy_Untitled::cMsg_dJ4Y9qvn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_RoBMwHPq, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_se1o76yr_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_P7EOgLDf, 0, m, &cSlice_P7EOgLDf_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_MepY6dbC, 0, m, &cSlice_MepY6dbC_sendMessage);
      break;
    }
    default: {
      cSend_dbKSgZhq_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_P7EOgLDf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_GAo4byzi_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_GAo4byzi_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_MepY6dbC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_GK4cATwk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_GK4cATwk_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSend_GAo4byzi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_lhKEbms1_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_GK4cATwk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_bbPUVqdQ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_dbKSgZhq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NJjcF6Ax_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_r7AnVJu0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_1FCaUttA_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_czJ7NE9Q_sendMessage);
}

void Heavy_Untitled::cBinop_1FCaUttA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_r7AnVJu0, 1, m, &cVar_r7AnVJu0_sendMessage);
}

void Heavy_Untitled::cIf_Fg9lxMEJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_PZinLSmG, 0, m, &cPack_PZinLSmG_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_UwtjzTdf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_J7EDTJ4n_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_Fg9lxMEJ, 1, m, &cIf_Fg9lxMEJ_sendMessage);
}

void Heavy_Untitled::cBinop_J7EDTJ4n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UwtjzTdf, 1, m, &cVar_UwtjzTdf_sendMessage);
}

void Heavy_Untitled::cPack_PZinLSmG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iQKcNSiU_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_xEpavzLn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_6PIO3RFr_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_vlBrDppn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_xoFY5A2s, 0, m, &cIf_xoFY5A2s_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_P0GFgEuo, 0, m, &cIf_P0GFgEuo_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_BYSN50Gd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_JWr3Pzw6_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_T38LVdAd, 0, m, &cIf_T38LVdAd_sendMessage);
}

void Heavy_Untitled::cUnop_bXl2P7ON_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_NhEdlbuq_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4MMF1602, HV_BINOP_EQ, 1, m, &cBinop_4MMF1602_sendMessage);
}

void Heavy_Untitled::cUnop_WJpiaOz3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_NhEdlbuq_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4MMF1602, HV_BINOP_EQ, 1, m, &cBinop_4MMF1602_sendMessage);
}

void Heavy_Untitled::cIf_T38LVdAd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_WJpiaOz3_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_bXl2P7ON_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_JWr3Pzw6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_T38LVdAd, 1, m, &cIf_T38LVdAd_sendMessage);
}

void Heavy_Untitled::cIf_P0GFgEuo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_9U6MNUY0_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_frjPC7Il_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_PpEZWc72_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_xoFY5A2s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_9U6MNUY0_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_qeEneN2W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_PpEZWc72_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_NhEdlbuq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JMIyl1NA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_O5iqyMrt_sendMessage);
}

void Heavy_Untitled::cBinop_6PIO3RFr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4MMF1602, HV_BINOP_EQ, 0, m, &cBinop_4MMF1602_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_qeEneN2W, 0, m, &cIf_qeEneN2W_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_frjPC7Il, 0, m, &cIf_frjPC7Il_sendMessage);
}

void Heavy_Untitled::cBinop_4MMF1602_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0mwG0hla_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UzgyccSn_sendMessage);
}

void Heavy_Untitled::cCast_0mwG0hla_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_frjPC7Il, 1, m, &cIf_frjPC7Il_sendMessage);
}

void Heavy_Untitled::cCast_UzgyccSn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_xoFY5A2s, 1, m, &cIf_xoFY5A2s_sendMessage);
}

void Heavy_Untitled::cBinop_PpEZWc72_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_JMIyl1NA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qeEneN2W, 1, m, &cIf_qeEneN2W_sendMessage);
}

void Heavy_Untitled::cCast_O5iqyMrt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_P0GFgEuo, 1, m, &cIf_P0GFgEuo_sendMessage);
}

void Heavy_Untitled::cVar_js2H1Aig_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_xs4oofVo_sendMessage);
}

void Heavy_Untitled::cSlice_qmL7hBuF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fgE5SyMP_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_s4usmkGe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_l6x3eV3b_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_AS0PGvte_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Bj8MwG7X_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_2kg7Mb5t, m);
}

void Heavy_Untitled::cBinop_Bj8MwG7X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AS0PGvte, 1, m, &cVar_AS0PGvte_sendMessage);
}

void Heavy_Untitled::cVar_HFqNaDwT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_9NLu6VlH_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_mVlzXWrG, m);
}

void Heavy_Untitled::cBinop_9NLu6VlH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HFqNaDwT, 1, m, &cVar_HFqNaDwT_sendMessage);
}

void Heavy_Untitled::cVar_Tsk2ycJO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_zGtvmjK8_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_QaWNg4dk, m);
}

void Heavy_Untitled::cBinop_zGtvmjK8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Tsk2ycJO, 1, m, &cVar_Tsk2ycJO_sendMessage);
}

void Heavy_Untitled::cCast_2YU7sdg8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_44qJZC6w, 0, m, &cVar_44qJZC6w_sendMessage);
}

void Heavy_Untitled::cVar_44qJZC6w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_H55qUlM5_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_jyWaYIKi, 0, m, &cVar_jyWaYIKi_sendMessage);
}

void Heavy_Untitled::cVar_jyWaYIKi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ZtKAQn9d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_4ABY2oDE_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_XHVk71br_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_ZtKAQn9d_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rYW3lHVt_sendMessage);
      break;
    }
    default: {
      cMsg_UHAtdFJk_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_rYW3lHVt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AS0PGvte, 0, m, &cVar_AS0PGvte_sendMessage);
}

void Heavy_Untitled::cSwitchcase_4ABY2oDE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_T61bD3lw_sendMessage);
      break;
    }
    default: {
      cMsg_dGU9BpHG_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_T61bD3lw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HFqNaDwT, 0, m, &cVar_HFqNaDwT_sendMessage);
}

void Heavy_Untitled::cSwitchcase_XHVk71br_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oO2KEJCn_sendMessage);
      break;
    }
    default: {
      cMsg_NDAsCZVF_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_oO2KEJCn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Tsk2ycJO, 0, m, &cVar_Tsk2ycJO_sendMessage);
}

void Heavy_Untitled::cMsg_SZlx7zYX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jJoWP8kB_sendMessage);
}

void Heavy_Untitled::cSystem_jJoWP8kB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n4Lfqcl5_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_n4Lfqcl5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_6kRYw2Pg_sendMessage);
}

void Heavy_Untitled::cBinop_6kRYw2Pg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LIsai2m0, m);
}

void Heavy_Untitled::cMsg_mEkVfOBO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ILj115Oq_sendMessage);
}

void Heavy_Untitled::cSystem_ILj115Oq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NmiYj00w_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_NmiYj00w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_eSgidFHG_sendMessage);
}

void Heavy_Untitled::cBinop_eSgidFHG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CaYVHYNo, m);
}

void Heavy_Untitled::cSwitchcase_84AJreI9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7VM0Peog, 0, m, &cSlice_7VM0Peog_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_O7Wgx6EV, 0, m, &cSlice_O7Wgx6EV_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_euMw2VVp, 0, m, &cSlice_euMw2VVp_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_LmGU8UCf, 0, m, &cSlice_LmGU8UCf_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6jVsR4qA, 0, m, &cSlice_6jVsR4qA_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_kkz7IRVr, 0, m, &cSlice_kkz7IRVr_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_t9MpBWt4, 0, m, &cSlice_t9MpBWt4_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_k44aAMCH, 0, m, &cSlice_k44aAMCH_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_lFYhh61A, 0, m, &cSlice_lFYhh61A_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_0YmCXHCm, 0, m, &cSlice_0YmCXHCm_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_7VM0Peog_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EiVekrcy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_EiVekrcy_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_O7Wgx6EV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_qmL7hBuF, 0, m, &cSlice_qmL7hBuF_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_s4usmkGe, 0, m, &cSlice_s4usmkGe_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_qmL7hBuF, 0, m, &cSlice_qmL7hBuF_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_s4usmkGe, 0, m, &cSlice_s4usmkGe_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_euMw2VVp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_hzfb3Mwh_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_hzfb3Mwh_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_LmGU8UCf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_E4DQsfgy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_E4DQsfgy_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_6jVsR4qA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fzwqhT6i_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_fzwqhT6i_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_kkz7IRVr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_IZHeSxyl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_IZHeSxyl_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_t9MpBWt4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_wGbJzZJp_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_wGbJzZJp_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_k44aAMCH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8EYI9gYr_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_8EYI9gYr_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_lFYhh61A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_IPncoulc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_IPncoulc_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_0YmCXHCm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EbB0VVSF_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_EbB0VVSF_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_jmpPUtnZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NC0zZiMG_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_x35FmvOc_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tUtWc8td, 0, m, &cSlice_tUtWc8td_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_jmpPUtnZ, 0, m, &cPack_jmpPUtnZ_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_tUtWc8td_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_WH48RlD3, 0, m, &cPack_WH48RlD3_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_WH48RlD3, 0, m, &cPack_WH48RlD3_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_WH48RlD3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4spu0YOm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_czJ7NE9Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7fw6jKmB, m);
}

void Heavy_Untitled::cBinop_ZEXbz1Nl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_HvRmTfUn_sendMessage);
}

void Heavy_Untitled::cBinop_HvRmTfUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8rSpnYK9, m);
}

void Heavy_Untitled::cMsg_iQKcNSiU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_vWPP8Yev, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_vWPP8Yev, 0, m, NULL);
}

void Heavy_Untitled::cBinop_OMhGOqM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_PZinLSmG, 1, m, &cPack_PZinLSmG_sendMessage);
}

void Heavy_Untitled::cCast_SKS6j5IL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OMhGOqM2, HV_BINOP_ADD, 0, m, &cBinop_OMhGOqM2_sendMessage);
}

void Heavy_Untitled::cCast_SGrBrsPt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OMhGOqM2, HV_BINOP_ADD, 1, m, &cBinop_OMhGOqM2_sendMessage);
}

void Heavy_Untitled::cBinop_9U6MNUY0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_js2H1Aig, 0, m, &cVar_js2H1Aig_sendMessage);
}

void Heavy_Untitled::cBinop_xs4oofVo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_7Cau9gPm_sendMessage);
}

void Heavy_Untitled::cBinop_7Cau9gPm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_y46hPxHM_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_2IGqJSE7, 0, m, NULL);
}

void Heavy_Untitled::cMsg_y46hPxHM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_2IGqJSE7, 0, m, NULL);
}

void Heavy_Untitled::cSend_EiVekrcy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GT9za2es_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_l6x3eV3b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Ad1mZhrB_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_fgE5SyMP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PK1woDXd_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_hzfb3Mwh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_81gi2F8B_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_E4DQsfgy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_klxI3ITb_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_fzwqhT6i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_iIP57MZj_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_IZHeSxyl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fDoMek6Q_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_tQUn9kng_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_jQzSiE8L_sendMessage);
}

void Heavy_Untitled::cBinop_jQzSiE8L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_mbuvlct5_sendMessage);
}

void Heavy_Untitled::cBinop_mbuvlct5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SGrBrsPt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SKS6j5IL_sendMessage);
}

void Heavy_Untitled::cBinop_2wkopXtr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_PZinLSmG, 2, m, &cPack_PZinLSmG_sendMessage);
}

void Heavy_Untitled::cSend_8EYI9gYr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SzGuBqom_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_wGbJzZJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_3J5aIxzw_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_H55qUlM5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_uokuzLaK_sendMessage);
}

void Heavy_Untitled::cMsg_UHAtdFJk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_AS0PGvte, 0, m, &cVar_AS0PGvte_sendMessage);
}

void Heavy_Untitled::cMsg_dGU9BpHG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_HFqNaDwT, 0, m, &cVar_HFqNaDwT_sendMessage);
}

void Heavy_Untitled::cMsg_NDAsCZVF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Tsk2ycJO, 0, m, &cVar_Tsk2ycJO_sendMessage);
}

void Heavy_Untitled::cBinop_uokuzLaK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_44qJZC6w, 1, m, &cVar_44qJZC6w_sendMessage);
}

void Heavy_Untitled::cBinop_Un8v3Tai_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_jmpPUtnZ, 1, m, &cPack_jmpPUtnZ_sendMessage);
}

void Heavy_Untitled::cBinop_AY54nfui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_WH48RlD3, 1, m, &cPack_WH48RlD3_sendMessage);
}

void Heavy_Untitled::cSend_IPncoulc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7mmQLkkf_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_EbB0VVSF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DgKepLan_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_UgdHlFYG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_x35FmvOc_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_NC0zZiMG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_6nmAdPaQ, 0, m, NULL);
}

void Heavy_Untitled::cMsg_4spu0YOm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_6nmAdPaQ, 0, m, NULL);
}

void Heavy_Untitled::cVar_Mdjtiue2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_hhRQLzY3_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_dqVSzfHB_sendMessage);
}

void Heavy_Untitled::cBinop_hhRQLzY3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Mdjtiue2, 1, m, &cVar_Mdjtiue2_sendMessage);
}

void Heavy_Untitled::cIf_x7ZGuxf2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_3X1Duqq7, 0, m, &cPack_3X1Duqq7_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_Qz6RD2tk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Fjm5yWLs_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_x7ZGuxf2, 1, m, &cIf_x7ZGuxf2_sendMessage);
}

void Heavy_Untitled::cBinop_Fjm5yWLs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Qz6RD2tk, 1, m, &cVar_Qz6RD2tk_sendMessage);
}

void Heavy_Untitled::cPack_3X1Duqq7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jNZoeXfb_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_foRmkhEN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_yPsLZQsZ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_q9fM4m75_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_Yw4QzBgT, 0, m, &cIf_Yw4QzBgT_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_W10XEzu5, 0, m, &cIf_W10XEzu5_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_hcZMmU1n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_d28wW8ME_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_nJudrAqf, 0, m, &cIf_nJudrAqf_sendMessage);
}

void Heavy_Untitled::cUnop_HV2cxhEO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_WadWeEHt_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rA72VmAd, HV_BINOP_EQ, 1, m, &cBinop_rA72VmAd_sendMessage);
}

void Heavy_Untitled::cUnop_PAiWRtaO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_WadWeEHt_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rA72VmAd, HV_BINOP_EQ, 1, m, &cBinop_rA72VmAd_sendMessage);
}

void Heavy_Untitled::cIf_nJudrAqf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_PAiWRtaO_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_HV2cxhEO_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_d28wW8ME_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_nJudrAqf, 1, m, &cIf_nJudrAqf_sendMessage);
}

void Heavy_Untitled::cIf_W10XEzu5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_1qAdE1zu_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_RYO2fyPg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_JObz5qCz_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_Yw4QzBgT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_1qAdE1zu_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_V2DGXwsr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_JObz5qCz_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_WadWeEHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qylb5nvw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LuDkzejJ_sendMessage);
}

void Heavy_Untitled::cBinop_yPsLZQsZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rA72VmAd, HV_BINOP_EQ, 0, m, &cBinop_rA72VmAd_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_V2DGXwsr, 0, m, &cIf_V2DGXwsr_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_RYO2fyPg, 0, m, &cIf_RYO2fyPg_sendMessage);
}

void Heavy_Untitled::cBinop_rA72VmAd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tgij6s7T_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NRlw1sG9_sendMessage);
}

void Heavy_Untitled::cCast_NRlw1sG9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Yw4QzBgT, 1, m, &cIf_Yw4QzBgT_sendMessage);
}

void Heavy_Untitled::cCast_tgij6s7T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_RYO2fyPg, 1, m, &cIf_RYO2fyPg_sendMessage);
}

void Heavy_Untitled::cBinop_JObz5qCz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_LuDkzejJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_W10XEzu5, 1, m, &cIf_W10XEzu5_sendMessage);
}

void Heavy_Untitled::cCast_qylb5nvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_V2DGXwsr, 1, m, &cIf_V2DGXwsr_sendMessage);
}

void Heavy_Untitled::cVar_kmb8KAeB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_yjt2nSMJ_sendMessage);
}

void Heavy_Untitled::cSlice_u1uyufGo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_bDSoqOwg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_rdWCnXVe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Dg5hdC11_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_3eoFNm7j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_yKBb573Q_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_P6Gq71ID, m);
}

void Heavy_Untitled::cBinop_yKBb573Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3eoFNm7j, 1, m, &cVar_3eoFNm7j_sendMessage);
}

void Heavy_Untitled::cVar_0TrsKcVA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_p2VW9Zfc_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_cov8rsmQ, m);
}

void Heavy_Untitled::cBinop_p2VW9Zfc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0TrsKcVA, 1, m, &cVar_0TrsKcVA_sendMessage);
}

void Heavy_Untitled::cVar_fjU4UvGa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_kliPSx3g_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9dVZiC85, m);
}

void Heavy_Untitled::cBinop_kliPSx3g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fjU4UvGa, 1, m, &cVar_fjU4UvGa_sendMessage);
}

void Heavy_Untitled::cCast_BfyvIePU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6jaxRw8p, 0, m, &cVar_6jaxRw8p_sendMessage);
}

void Heavy_Untitled::cVar_6jaxRw8p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_B1u9MPEu_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_0r4X3doq, 0, m, &cVar_0r4X3doq_sendMessage);
}

void Heavy_Untitled::cVar_0r4X3doq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_YJoaLH8F_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_9MsUDSFE_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_ldQ0kFic_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_YJoaLH8F_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UxLtsU3S_sendMessage);
      break;
    }
    default: {
      cMsg_k2TBSOBo_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_UxLtsU3S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3eoFNm7j, 0, m, &cVar_3eoFNm7j_sendMessage);
}

void Heavy_Untitled::cSwitchcase_9MsUDSFE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_twAsjyLc_sendMessage);
      break;
    }
    default: {
      cMsg_ZGKtbHaK_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_twAsjyLc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0TrsKcVA, 0, m, &cVar_0TrsKcVA_sendMessage);
}

void Heavy_Untitled::cSwitchcase_ldQ0kFic_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wVBK6xKo_sendMessage);
      break;
    }
    default: {
      cMsg_b3n5vlsG_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_wVBK6xKo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fjU4UvGa, 0, m, &cVar_fjU4UvGa_sendMessage);
}

void Heavy_Untitled::cMsg_HmLGxLAO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8R4BUeUJ_sendMessage);
}

void Heavy_Untitled::cSystem_8R4BUeUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hRyy986q_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_hRyy986q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_u7da4qdc_sendMessage);
}

void Heavy_Untitled::cBinop_u7da4qdc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_W81XXPCw, m);
}

void Heavy_Untitled::cMsg_BajSTPKz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_psVy7TAI_sendMessage);
}

void Heavy_Untitled::cSystem_psVy7TAI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zPMqXdNg_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_zPMqXdNg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Vo1DGPh2_sendMessage);
}

void Heavy_Untitled::cBinop_Vo1DGPh2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ELsNqxIo, m);
}

void Heavy_Untitled::cSwitchcase_ilBzFehZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_1LKqXRTE, 0, m, &cSlice_1LKqXRTE_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_neZ6xdS7, 0, m, &cSlice_neZ6xdS7_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gdAsEzmn, 0, m, &cSlice_gdAsEzmn_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ETX12NBd, 0, m, &cSlice_ETX12NBd_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KTKhwd1R, 0, m, &cSlice_KTKhwd1R_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_yMytJhMD, 0, m, &cSlice_yMytJhMD_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bgFhgtQM, 0, m, &cSlice_bgFhgtQM_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5cUq8NC9, 0, m, &cSlice_5cUq8NC9_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_iT2oWoML, 0, m, &cSlice_iT2oWoML_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5L5ut3Ei, 0, m, &cSlice_5L5ut3Ei_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_1LKqXRTE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_C52h85L4_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_C52h85L4_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_neZ6xdS7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_u1uyufGo, 0, m, &cSlice_u1uyufGo_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_rdWCnXVe, 0, m, &cSlice_rdWCnXVe_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_u1uyufGo, 0, m, &cSlice_u1uyufGo_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_rdWCnXVe, 0, m, &cSlice_rdWCnXVe_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_gdAsEzmn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1Up9zj1P_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_1Up9zj1P_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_ETX12NBd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8czQc6Vv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_8czQc6Vv_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_KTKhwd1R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_HCwopq6w_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_HCwopq6w_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_yMytJhMD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_6QrmT3iE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_6QrmT3iE_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_bgFhgtQM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Orhj0GfY_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Orhj0GfY_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_5cUq8NC9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_998DWt5Z_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_998DWt5Z_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_iT2oWoML_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_FU0sIa80_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_FU0sIa80_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_5L5ut3Ei_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ortUvXb6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ortUvXb6_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_gnGIRCMh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JKrRamiK_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_Kd6dImHT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZPPPVgSL, 0, m, &cSlice_ZPPPVgSL_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_gnGIRCMh, 0, m, &cPack_gnGIRCMh_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_ZPPPVgSL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_Bb0jevoi, 0, m, &cPack_Bb0jevoi_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_Bb0jevoi, 0, m, &cPack_Bb0jevoi_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_Bb0jevoi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_03dL4uEJ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_dqVSzfHB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MvJ3Cq9E, m);
}

void Heavy_Untitled::cBinop_NUoqeG7Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_sOrJVaG2_sendMessage);
}

void Heavy_Untitled::cBinop_sOrJVaG2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0uPLnlQ8, m);
}

void Heavy_Untitled::cMsg_jNZoeXfb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_XPhxDAET, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_XPhxDAET, 0, m, NULL);
}

void Heavy_Untitled::cBinop_z05RfaJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_3X1Duqq7, 1, m, &cPack_3X1Duqq7_sendMessage);
}

void Heavy_Untitled::cCast_udf34H3i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z05RfaJf, HV_BINOP_ADD, 0, m, &cBinop_z05RfaJf_sendMessage);
}

void Heavy_Untitled::cCast_A3KP7tFG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z05RfaJf, HV_BINOP_ADD, 1, m, &cBinop_z05RfaJf_sendMessage);
}

void Heavy_Untitled::cBinop_1qAdE1zu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kmb8KAeB, 0, m, &cVar_kmb8KAeB_sendMessage);
}

void Heavy_Untitled::cBinop_yjt2nSMJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_EYo49ybd_sendMessage);
}

void Heavy_Untitled::cBinop_EYo49ybd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oR6Dzjzs_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_rLjFIdMF, 0, m, NULL);
}

void Heavy_Untitled::cMsg_oR6Dzjzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_rLjFIdMF, 0, m, NULL);
}

void Heavy_Untitled::cSend_C52h85L4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Ndm7W1KJ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Dg5hdC11_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_V8WDwH5m_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_bDSoqOwg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_p8CezAoV_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_1Up9zj1P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dRRJfJcq_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_8czQc6Vv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VetqLdSh_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_HCwopq6w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_suASLOVa_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_6QrmT3iE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_f4Ubmbga_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_l283F6Xp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_KjQp1KCN_sendMessage);
}

void Heavy_Untitled::cBinop_KjQp1KCN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_DsWP5Lye_sendMessage);
}

void Heavy_Untitled::cBinop_DsWP5Lye_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_A3KP7tFG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_udf34H3i_sendMessage);
}

void Heavy_Untitled::cBinop_DpxgDyJ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_3X1Duqq7, 2, m, &cPack_3X1Duqq7_sendMessage);
}

void Heavy_Untitled::cSend_998DWt5Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_H6ad9qAK_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Orhj0GfY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_F3Wv7Jal_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_B1u9MPEu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_Fgkue1Mr_sendMessage);
}

void Heavy_Untitled::cMsg_k2TBSOBo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_3eoFNm7j, 0, m, &cVar_3eoFNm7j_sendMessage);
}

void Heavy_Untitled::cMsg_ZGKtbHaK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_0TrsKcVA, 0, m, &cVar_0TrsKcVA_sendMessage);
}

void Heavy_Untitled::cMsg_b3n5vlsG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_fjU4UvGa, 0, m, &cVar_fjU4UvGa_sendMessage);
}

void Heavy_Untitled::cBinop_Fgkue1Mr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6jaxRw8p, 1, m, &cVar_6jaxRw8p_sendMessage);
}

void Heavy_Untitled::cBinop_7lENrC7D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_gnGIRCMh, 1, m, &cPack_gnGIRCMh_sendMessage);
}

void Heavy_Untitled::cBinop_DV2xszB4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Bb0jevoi, 1, m, &cPack_Bb0jevoi_sendMessage);
}

void Heavy_Untitled::cSend_FU0sIa80_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0I5WdysI_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_ortUvXb6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SGFuwjPo_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_uAVWnp0c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Kd6dImHT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_JKrRamiK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_4xHmH7xn, 0, m, NULL);
}

void Heavy_Untitled::cMsg_03dL4uEJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_4xHmH7xn, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_mxGndGVx_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_DMDRXy2N, 0, m, &cSlice_DMDRXy2N_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Af3QigZi, 0, m, &cSlice_Af3QigZi_sendMessage);
      break;
    }
    default: {
      cSend_bcj3frbZ_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_DMDRXy2N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_WYvwUNmY_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_WYvwUNmY_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Af3QigZi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_swOF0vtT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_swOF0vtT_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSend_WYvwUNmY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VKfz8Njt_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_swOF0vtT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1zMuBmuS_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_bcj3frbZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1EzvYyDI_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_NNZ9ArtD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_8db7RBNp_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_PXzdI6Lz_sendMessage);
}

void Heavy_Untitled::cBinop_8db7RBNp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NNZ9ArtD, 1, m, &cVar_NNZ9ArtD_sendMessage);
}

void Heavy_Untitled::cIf_naBuOW8G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_LQsI6nq9, 0, m, &cPack_LQsI6nq9_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_qEJ1hXqd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_SDi1q4NE_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_naBuOW8G, 1, m, &cIf_naBuOW8G_sendMessage);
}

void Heavy_Untitled::cBinop_SDi1q4NE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qEJ1hXqd, 1, m, &cVar_qEJ1hXqd_sendMessage);
}

void Heavy_Untitled::cPack_LQsI6nq9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_N27XxRhn_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_QVXgL2S6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Rc7DVg17_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_EfoTYKrb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_VPdbqSG7, 0, m, &cIf_VPdbqSG7_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_oL1M0HUJ, 0, m, &cIf_oL1M0HUJ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_9IGf1yZR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_2HjYuiKh_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_xNrAC0Io, 0, m, &cIf_xNrAC0Io_sendMessage);
}

void Heavy_Untitled::cUnop_OR1fnLvU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_zF7bnOy0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hr6fJHk6, HV_BINOP_EQ, 1, m, &cBinop_Hr6fJHk6_sendMessage);
}

void Heavy_Untitled::cUnop_GeSOjeBy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_zF7bnOy0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hr6fJHk6, HV_BINOP_EQ, 1, m, &cBinop_Hr6fJHk6_sendMessage);
}

void Heavy_Untitled::cIf_xNrAC0Io_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_GeSOjeBy_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_OR1fnLvU_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_2HjYuiKh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_xNrAC0Io, 1, m, &cIf_xNrAC0Io_sendMessage);
}

void Heavy_Untitled::cIf_oL1M0HUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_h0JGWIMz_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_kJKwa0zH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_w7itVqsE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_VPdbqSG7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_h0JGWIMz_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_Uv7sAoWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_w7itVqsE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_zF7bnOy0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lAtziNIs_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_h6FRLTks_sendMessage);
}

void Heavy_Untitled::cBinop_Rc7DVg17_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hr6fJHk6, HV_BINOP_EQ, 0, m, &cBinop_Hr6fJHk6_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_Uv7sAoWs, 0, m, &cIf_Uv7sAoWs_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_kJKwa0zH, 0, m, &cIf_kJKwa0zH_sendMessage);
}

void Heavy_Untitled::cBinop_Hr6fJHk6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SvvNnLSl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RUCAiEOw_sendMessage);
}

void Heavy_Untitled::cCast_SvvNnLSl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_kJKwa0zH, 1, m, &cIf_kJKwa0zH_sendMessage);
}

void Heavy_Untitled::cCast_RUCAiEOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_VPdbqSG7, 1, m, &cIf_VPdbqSG7_sendMessage);
}

void Heavy_Untitled::cBinop_w7itVqsE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_h6FRLTks_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_oL1M0HUJ, 1, m, &cIf_oL1M0HUJ_sendMessage);
}

void Heavy_Untitled::cCast_lAtziNIs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Uv7sAoWs, 1, m, &cIf_Uv7sAoWs_sendMessage);
}

void Heavy_Untitled::cVar_RNAMLvJ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_uAB4RB3v_sendMessage);
}

void Heavy_Untitled::cSlice_IwEVXzny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5M2dVXxM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Oq24lKO4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kZsBTQjx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_3kz29J4c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_uX3cHeUs_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_cPPi2bHO, m);
}

void Heavy_Untitled::cBinop_uX3cHeUs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3kz29J4c, 1, m, &cVar_3kz29J4c_sendMessage);
}

void Heavy_Untitled::cVar_UFaX89U1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_ZjqKlTNA_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_wAgQ15Zu, m);
}

void Heavy_Untitled::cBinop_ZjqKlTNA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UFaX89U1, 1, m, &cVar_UFaX89U1_sendMessage);
}

void Heavy_Untitled::cVar_eld0OHey_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_impCjLkd_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9tLpUqLR, m);
}

void Heavy_Untitled::cBinop_impCjLkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eld0OHey, 1, m, &cVar_eld0OHey_sendMessage);
}

void Heavy_Untitled::cCast_rCi4iPAC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5IExxcYD, 0, m, &cVar_5IExxcYD_sendMessage);
}

void Heavy_Untitled::cVar_5IExxcYD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_cwa5Fwia_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_0PvWzZd7, 0, m, &cVar_0PvWzZd7_sendMessage);
}

void Heavy_Untitled::cVar_0PvWzZd7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_YKnI30ku_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_9xyaIVFV_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_kCkQEW65_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_YKnI30ku_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HXEGwwvd_sendMessage);
      break;
    }
    default: {
      cMsg_tuPKaAKl_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_HXEGwwvd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3kz29J4c, 0, m, &cVar_3kz29J4c_sendMessage);
}

void Heavy_Untitled::cSwitchcase_9xyaIVFV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1EdssJdR_sendMessage);
      break;
    }
    default: {
      cMsg_8x4GxVUO_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_1EdssJdR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UFaX89U1, 0, m, &cVar_UFaX89U1_sendMessage);
}

void Heavy_Untitled::cSwitchcase_kCkQEW65_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I6ykMTtQ_sendMessage);
      break;
    }
    default: {
      cMsg_u2R8z6jd_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_I6ykMTtQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eld0OHey, 0, m, &cVar_eld0OHey_sendMessage);
}

void Heavy_Untitled::cMsg_kHhulc2N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_d4Ao9Lcj_sendMessage);
}

void Heavy_Untitled::cSystem_d4Ao9Lcj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eWpHxSx2_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_eWpHxSx2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_vnBZ0y4h_sendMessage);
}

void Heavy_Untitled::cBinop_vnBZ0y4h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ghs2jpIE, m);
}

void Heavy_Untitled::cMsg_FulYqLHa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_R1cfDRwT_sendMessage);
}

void Heavy_Untitled::cSystem_R1cfDRwT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nrGpY7y6_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_nrGpY7y6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_XMqrujuv_sendMessage);
}

void Heavy_Untitled::cBinop_XMqrujuv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_m4kSCGK5, m);
}

void Heavy_Untitled::cSwitchcase_9JSlXT2L_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_dbVN1WPY, 0, m, &cSlice_dbVN1WPY_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YmGr0oy6, 0, m, &cSlice_YmGr0oy6_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_EC2ocbgr, 0, m, &cSlice_EC2ocbgr_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_fN0fm5Sa, 0, m, &cSlice_fN0fm5Sa_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_lfiznssZ, 0, m, &cSlice_lfiznssZ_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8RdBmSac, 0, m, &cSlice_8RdBmSac_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Oc0gjtAv, 0, m, &cSlice_Oc0gjtAv_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bgcOj4eL, 0, m, &cSlice_bgcOj4eL_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_r6UozrK3, 0, m, &cSlice_r6UozrK3_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_q7lsVNr2, 0, m, &cSlice_q7lsVNr2_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_dbVN1WPY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_y78WNKCP_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_y78WNKCP_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_YmGr0oy6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_IwEVXzny, 0, m, &cSlice_IwEVXzny_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Oq24lKO4, 0, m, &cSlice_Oq24lKO4_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_IwEVXzny, 0, m, &cSlice_IwEVXzny_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Oq24lKO4, 0, m, &cSlice_Oq24lKO4_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_EC2ocbgr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_uEF1Asui_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_uEF1Asui_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_fN0fm5Sa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lX4W3w03_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_lX4W3w03_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_lfiznssZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_2JVndMa2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_2JVndMa2_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_8RdBmSac_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_NjQVYA5H_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_NjQVYA5H_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Oc0gjtAv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_orD7VlB1_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_orD7VlB1_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_bgcOj4eL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_m6FecExB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_m6FecExB_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_r6UozrK3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_1rewT0tj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_1rewT0tj_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_q7lsVNr2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_6q6hpXxA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_6q6hpXxA_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_nmIfIyAI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_N4rUyxPK_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_2OW1wAlJ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_42at2TGp, 0, m, &cSlice_42at2TGp_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_nmIfIyAI, 0, m, &cPack_nmIfIyAI_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_42at2TGp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_J2eVXCqg, 0, m, &cPack_J2eVXCqg_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_J2eVXCqg, 0, m, &cPack_J2eVXCqg_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_J2eVXCqg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SMcDUSS9_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_PXzdI6Lz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_olkPUiJW, m);
}

void Heavy_Untitled::cBinop_T6OeDnJh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_5cT4F74c_sendMessage);
}

void Heavy_Untitled::cBinop_5cT4F74c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_b3mRdrJ9, m);
}

void Heavy_Untitled::cMsg_N27XxRhn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_5miPnQAo, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_5miPnQAo, 0, m, NULL);
}

void Heavy_Untitled::cBinop_BqIEt6aU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_LQsI6nq9, 1, m, &cPack_LQsI6nq9_sendMessage);
}

void Heavy_Untitled::cCast_YcdtQu8w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BqIEt6aU, HV_BINOP_ADD, 0, m, &cBinop_BqIEt6aU_sendMessage);
}

void Heavy_Untitled::cCast_zd32xaCR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BqIEt6aU, HV_BINOP_ADD, 1, m, &cBinop_BqIEt6aU_sendMessage);
}

void Heavy_Untitled::cBinop_h0JGWIMz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RNAMLvJ5, 0, m, &cVar_RNAMLvJ5_sendMessage);
}

void Heavy_Untitled::cBinop_uAB4RB3v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_3FCvCGZX_sendMessage);
}

void Heavy_Untitled::cBinop_3FCvCGZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m8pCxmpM_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_6FSUDIKj, 0, m, NULL);
}

void Heavy_Untitled::cMsg_m8pCxmpM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_6FSUDIKj, 0, m, NULL);
}

void Heavy_Untitled::cSend_y78WNKCP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_l74ny3jc_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_kZsBTQjx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2Z1iGdWi_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_5M2dVXxM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ujiIC2J7_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_uEF1Asui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OByuP7Eo_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_lX4W3w03_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_srw9wTOZ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_2JVndMa2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7JKF3pJp_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_NjQVYA5H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9GP7OyhF_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_4eihOHoL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_GA2LzcMO_sendMessage);
}

void Heavy_Untitled::cBinop_GA2LzcMO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_J9ur6dVe_sendMessage);
}

void Heavy_Untitled::cBinop_J9ur6dVe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zd32xaCR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YcdtQu8w_sendMessage);
}

void Heavy_Untitled::cBinop_mIxJr6DJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_LQsI6nq9, 2, m, &cPack_LQsI6nq9_sendMessage);
}

void Heavy_Untitled::cSend_m6FecExB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1NHArLCk_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_orD7VlB1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_3NYw92uR_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_cwa5Fwia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_I1676yvu_sendMessage);
}

void Heavy_Untitled::cMsg_tuPKaAKl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_3kz29J4c, 0, m, &cVar_3kz29J4c_sendMessage);
}

void Heavy_Untitled::cMsg_8x4GxVUO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_UFaX89U1, 0, m, &cVar_UFaX89U1_sendMessage);
}

void Heavy_Untitled::cMsg_u2R8z6jd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_eld0OHey, 0, m, &cVar_eld0OHey_sendMessage);
}

void Heavy_Untitled::cBinop_I1676yvu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5IExxcYD, 1, m, &cVar_5IExxcYD_sendMessage);
}

void Heavy_Untitled::cBinop_T6rUg4Ra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_nmIfIyAI, 1, m, &cPack_nmIfIyAI_sendMessage);
}

void Heavy_Untitled::cBinop_wgJAkrRi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_J2eVXCqg, 1, m, &cPack_J2eVXCqg_sendMessage);
}

void Heavy_Untitled::cSend_1rewT0tj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fThrOeAa_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_6q6hpXxA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yQMaiAD8_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_0AgJ0zgQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_2OW1wAlJ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_N4rUyxPK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_zz0cGhMV, 0, m, NULL);
}

void Heavy_Untitled::cMsg_SMcDUSS9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_zz0cGhMV, 0, m, NULL);
}

void Heavy_Untitled::cVar_e2sB8L0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_D6J0Ct2P_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_caU4kMB1_sendMessage);
}

void Heavy_Untitled::cBinop_D6J0Ct2P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_e2sB8L0i, 1, m, &cVar_e2sB8L0i_sendMessage);
}

void Heavy_Untitled::cIf_yztp4TEq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_4BMLkARK, 0, m, &cPack_4BMLkARK_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_FC3CUnf5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_OMqL1gLD_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_yztp4TEq, 1, m, &cIf_yztp4TEq_sendMessage);
}

void Heavy_Untitled::cBinop_OMqL1gLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FC3CUnf5, 1, m, &cVar_FC3CUnf5_sendMessage);
}

void Heavy_Untitled::cPack_4BMLkARK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qntPhCC5_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_HxQtIkQd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_CQ79xrDH_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_stFSzL51_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_kId4Pbj6, 0, m, &cIf_kId4Pbj6_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_GW3S1Fh9, 0, m, &cIf_GW3S1Fh9_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_9WmUTDJQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_D0fljQez_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_nLsJyPXO, 0, m, &cIf_nLsJyPXO_sendMessage);
}

void Heavy_Untitled::cUnop_C6ZwVVoQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_kk13HfJE_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WKNu07jA, HV_BINOP_EQ, 1, m, &cBinop_WKNu07jA_sendMessage);
}

void Heavy_Untitled::cUnop_8LQI3G1g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_kk13HfJE_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WKNu07jA, HV_BINOP_EQ, 1, m, &cBinop_WKNu07jA_sendMessage);
}

void Heavy_Untitled::cIf_nLsJyPXO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_8LQI3G1g_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_C6ZwVVoQ_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_D0fljQez_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_nLsJyPXO, 1, m, &cIf_nLsJyPXO_sendMessage);
}

void Heavy_Untitled::cIf_GW3S1Fh9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_RPWKyYla_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_AQ9kFQ7Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_1uQZsSqD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_kId4Pbj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_RPWKyYla_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_SpGc11S7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_1uQZsSqD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_kk13HfJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_enu8ePQB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9QaPzfTZ_sendMessage);
}

void Heavy_Untitled::cBinop_CQ79xrDH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WKNu07jA, HV_BINOP_EQ, 0, m, &cBinop_WKNu07jA_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_SpGc11S7, 0, m, &cIf_SpGc11S7_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_AQ9kFQ7Y, 0, m, &cIf_AQ9kFQ7Y_sendMessage);
}

void Heavy_Untitled::cBinop_WKNu07jA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yBayOIsi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_X1YeqQaw_sendMessage);
}

void Heavy_Untitled::cCast_yBayOIsi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_AQ9kFQ7Y, 1, m, &cIf_AQ9kFQ7Y_sendMessage);
}

void Heavy_Untitled::cCast_X1YeqQaw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_kId4Pbj6, 1, m, &cIf_kId4Pbj6_sendMessage);
}

void Heavy_Untitled::cBinop_1uQZsSqD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_9QaPzfTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GW3S1Fh9, 1, m, &cIf_GW3S1Fh9_sendMessage);
}

void Heavy_Untitled::cCast_enu8ePQB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_SpGc11S7, 1, m, &cIf_SpGc11S7_sendMessage);
}

void Heavy_Untitled::cVar_BSpNs9Td_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_UE5MHCDe_sendMessage);
}

void Heavy_Untitled::cSlice_yTlHD2iS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Ac4nZyky_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Smrpi4UX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_du3aXle8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_MKG6Hcmu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_OUrEfgZF_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Q6sFgKqr, m);
}

void Heavy_Untitled::cBinop_OUrEfgZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MKG6Hcmu, 1, m, &cVar_MKG6Hcmu_sendMessage);
}

void Heavy_Untitled::cVar_tCdvK8kB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_EMALorCF_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_d7f71WlD, m);
}

void Heavy_Untitled::cBinop_EMALorCF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tCdvK8kB, 1, m, &cVar_tCdvK8kB_sendMessage);
}

void Heavy_Untitled::cVar_4PqPv9g4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_ao6sZI7h_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_eSAHdzGy, m);
}

void Heavy_Untitled::cBinop_ao6sZI7h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4PqPv9g4, 1, m, &cVar_4PqPv9g4_sendMessage);
}

void Heavy_Untitled::cCast_vlaaMI6Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hulzbDvv, 0, m, &cVar_hulzbDvv_sendMessage);
}

void Heavy_Untitled::cVar_hulzbDvv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_dhQSCZCD_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_pSEryr89, 0, m, &cVar_pSEryr89_sendMessage);
}

void Heavy_Untitled::cVar_pSEryr89_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_NUnIjJGd_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_LY8mo1wz_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_bMA3hMUO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_NUnIjJGd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_R1XOMAjU_sendMessage);
      break;
    }
    default: {
      cMsg_2Fa8QtnT_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_R1XOMAjU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MKG6Hcmu, 0, m, &cVar_MKG6Hcmu_sendMessage);
}

void Heavy_Untitled::cSwitchcase_LY8mo1wz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Lu88PUtO_sendMessage);
      break;
    }
    default: {
      cMsg_glTA97aJ_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_Lu88PUtO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tCdvK8kB, 0, m, &cVar_tCdvK8kB_sendMessage);
}

void Heavy_Untitled::cSwitchcase_bMA3hMUO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eemiifmA_sendMessage);
      break;
    }
    default: {
      cMsg_hrV96Xvm_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_eemiifmA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4PqPv9g4, 0, m, &cVar_4PqPv9g4_sendMessage);
}

void Heavy_Untitled::cMsg_Rdp6rcWM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_etTbW31V_sendMessage);
}

void Heavy_Untitled::cSystem_etTbW31V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cCO8kPVl_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_cCO8kPVl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_fXOA7ikU_sendMessage);
}

void Heavy_Untitled::cBinop_fXOA7ikU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_skDEKbB7, m);
}

void Heavy_Untitled::cMsg_CtRY8vte_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PNXOTyqn_sendMessage);
}

void Heavy_Untitled::cSystem_PNXOTyqn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xlzq8fsf_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_xlzq8fsf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_SBzGURtc_sendMessage);
}

void Heavy_Untitled::cBinop_SBzGURtc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JbdvNABy, m);
}

void Heavy_Untitled::cSwitchcase_NP96Wkxs_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vnYPwbE4, 0, m, &cSlice_vnYPwbE4_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vsdzZ5ro, 0, m, &cSlice_vsdzZ5ro_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_PKVTOYOv, 0, m, &cSlice_PKVTOYOv_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_IVRxcdo7, 0, m, &cSlice_IVRxcdo7_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vrU9XxXq, 0, m, &cSlice_vrU9XxXq_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sVSHeSiq, 0, m, &cSlice_sVSHeSiq_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_l6Uci7Qg, 0, m, &cSlice_l6Uci7Qg_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KVEdpQu5, 0, m, &cSlice_KVEdpQu5_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_JvFFa0N8, 0, m, &cSlice_JvFFa0N8_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mp3ENMrx, 0, m, &cSlice_mp3ENMrx_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_vnYPwbE4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_PfMAbdKT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_PfMAbdKT_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_vsdzZ5ro_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_yTlHD2iS, 0, m, &cSlice_yTlHD2iS_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Smrpi4UX, 0, m, &cSlice_Smrpi4UX_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_yTlHD2iS, 0, m, &cSlice_yTlHD2iS_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Smrpi4UX, 0, m, &cSlice_Smrpi4UX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_PKVTOYOv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_BUG1Bkto_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_BUG1Bkto_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_IVRxcdo7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_MFCrXHdO_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_MFCrXHdO_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_vrU9XxXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_RdMRIwP3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_RdMRIwP3_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_sVSHeSiq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Q9WyaqM0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Q9WyaqM0_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_l6Uci7Qg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_v5wDjWoM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_v5wDjWoM_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_KVEdpQu5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_qBqSIufb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_qBqSIufb_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_JvFFa0N8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_mrcR7WWr_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_mrcR7WWr_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_mp3ENMrx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_zBTnLUkj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_zBTnLUkj_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_XNGGWn3X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GMRgT9Jj_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_28gF0xuE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_TYMcxbHg, 0, m, &cSlice_TYMcxbHg_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_XNGGWn3X, 0, m, &cPack_XNGGWn3X_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_TYMcxbHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_ozxL4htI, 0, m, &cPack_ozxL4htI_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_ozxL4htI, 0, m, &cPack_ozxL4htI_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_ozxL4htI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FyodOK3h_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_caU4kMB1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OlSj51w0, m);
}

void Heavy_Untitled::cBinop_NdHMIu2z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_Q16s1kIa_sendMessage);
}

void Heavy_Untitled::cBinop_Q16s1kIa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tzoqWO7H, m);
}

void Heavy_Untitled::cMsg_qntPhCC5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_KuZVDVhP, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_KuZVDVhP, 0, m, NULL);
}

void Heavy_Untitled::cBinop_twAWR3WU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_4BMLkARK, 1, m, &cPack_4BMLkARK_sendMessage);
}

void Heavy_Untitled::cCast_yUJTCaCR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_twAWR3WU, HV_BINOP_ADD, 0, m, &cBinop_twAWR3WU_sendMessage);
}

void Heavy_Untitled::cCast_FG0uxVE7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_twAWR3WU, HV_BINOP_ADD, 1, m, &cBinop_twAWR3WU_sendMessage);
}

void Heavy_Untitled::cBinop_RPWKyYla_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BSpNs9Td, 0, m, &cVar_BSpNs9Td_sendMessage);
}

void Heavy_Untitled::cBinop_UE5MHCDe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_bhuTn5RF_sendMessage);
}

void Heavy_Untitled::cBinop_bhuTn5RF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_meHgPsjP_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_VuVrVSNf, 0, m, NULL);
}

void Heavy_Untitled::cMsg_meHgPsjP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_VuVrVSNf, 0, m, NULL);
}

void Heavy_Untitled::cSend_PfMAbdKT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Hq3quGwK_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_du3aXle8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_3qkhwjYg_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Ac4nZyky_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_JkycOjKC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_BUG1Bkto_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9ZZwCy5t_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_MFCrXHdO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_C0kVY3hi_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_RdMRIwP3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QhXexdrq_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Q9WyaqM0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ru5HoshC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_jmXHMlHv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_BCHyNdwp_sendMessage);
}

void Heavy_Untitled::cBinop_BCHyNdwp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_EWuoiNIq_sendMessage);
}

void Heavy_Untitled::cBinop_EWuoiNIq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FG0uxVE7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yUJTCaCR_sendMessage);
}

void Heavy_Untitled::cBinop_eJXAs4dc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_4BMLkARK, 2, m, &cPack_4BMLkARK_sendMessage);
}

void Heavy_Untitled::cSend_qBqSIufb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_h0zyme5Y_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_v5wDjWoM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AugloDxk_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_dhQSCZCD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_HreSMSbU_sendMessage);
}

void Heavy_Untitled::cMsg_2Fa8QtnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_MKG6Hcmu, 0, m, &cVar_MKG6Hcmu_sendMessage);
}

void Heavy_Untitled::cMsg_glTA97aJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_tCdvK8kB, 0, m, &cVar_tCdvK8kB_sendMessage);
}

void Heavy_Untitled::cMsg_hrV96Xvm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_4PqPv9g4, 0, m, &cVar_4PqPv9g4_sendMessage);
}

void Heavy_Untitled::cBinop_HreSMSbU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hulzbDvv, 1, m, &cVar_hulzbDvv_sendMessage);
}

void Heavy_Untitled::cBinop_iLstP0Dw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_XNGGWn3X, 1, m, &cPack_XNGGWn3X_sendMessage);
}

void Heavy_Untitled::cBinop_M3mK3p0T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ozxL4htI, 1, m, &cPack_ozxL4htI_sendMessage);
}

void Heavy_Untitled::cSend_mrcR7WWr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_JBIN0Nea_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_zBTnLUkj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2X930Jt3_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_cEtP2zot_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_28gF0xuE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_GMRgT9Jj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_1nkeMPDn, 0, m, NULL);
}

void Heavy_Untitled::cMsg_FyodOK3h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_1nkeMPDn, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_KwJUq8XY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_W8SacLKi, 0, m, &cSlice_W8SacLKi_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_1cIMwpby, 0, m, &cSlice_1cIMwpby_sendMessage);
      break;
    }
    default: {
      cSend_AWgRUfTY_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_W8SacLKi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lCZY7ROr_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_lCZY7ROr_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_1cIMwpby_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_DG2jqfO2_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_DG2jqfO2_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSend_lCZY7ROr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ldsNFcNC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_DG2jqfO2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_U8Lar2r6_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_AWgRUfTY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_p1yi4RWk_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cVar_05hMRZ7I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_GjUTga41_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_WKUo9VmT_sendMessage);
}

void Heavy_Untitled::cBinop_GjUTga41_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_05hMRZ7I, 1, m, &cVar_05hMRZ7I_sendMessage);
}

void Heavy_Untitled::cIf_QBNXtwke_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_lpQo7VQr, 0, m, &cPack_lpQo7VQr_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_0qxAMtoI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_ub7nyKZv_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_QBNXtwke, 1, m, &cIf_QBNXtwke_sendMessage);
}

void Heavy_Untitled::cBinop_ub7nyKZv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0qxAMtoI, 1, m, &cVar_0qxAMtoI_sendMessage);
}

void Heavy_Untitled::cPack_lpQo7VQr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6bh3ntqA_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_Af9gpXbc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_rPmsv0GI_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_JDxErB3q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_wbGEP4lR, 0, m, &cIf_wbGEP4lR_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_Zqm3WHfW, 0, m, &cIf_Zqm3WHfW_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_WaiUB1pW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_VnNMah0b_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_bqjbCzZp, 0, m, &cIf_bqjbCzZp_sendMessage);
}

void Heavy_Untitled::cUnop_kUML8pzP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_IKYZL6cM_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O0cx8PaX, HV_BINOP_EQ, 1, m, &cBinop_O0cx8PaX_sendMessage);
}

void Heavy_Untitled::cUnop_zIDOFJuR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_IKYZL6cM_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O0cx8PaX, HV_BINOP_EQ, 1, m, &cBinop_O0cx8PaX_sendMessage);
}

void Heavy_Untitled::cIf_bqjbCzZp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_zIDOFJuR_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_kUML8pzP_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_VnNMah0b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_bqjbCzZp, 1, m, &cIf_bqjbCzZp_sendMessage);
}

void Heavy_Untitled::cIf_Zqm3WHfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_65yfz2fX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_HPl0X6SD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_9aZgIqlk_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_wbGEP4lR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_65yfz2fX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_aeLnGyq9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_9aZgIqlk_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_IKYZL6cM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nBSqxZl1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fJLzVsSu_sendMessage);
}

void Heavy_Untitled::cBinop_rPmsv0GI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O0cx8PaX, HV_BINOP_EQ, 0, m, &cBinop_O0cx8PaX_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_aeLnGyq9, 0, m, &cIf_aeLnGyq9_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_HPl0X6SD, 0, m, &cIf_HPl0X6SD_sendMessage);
}

void Heavy_Untitled::cBinop_O0cx8PaX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nuWaNAwe_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cFJF314b_sendMessage);
}

void Heavy_Untitled::cCast_cFJF314b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wbGEP4lR, 1, m, &cIf_wbGEP4lR_sendMessage);
}

void Heavy_Untitled::cCast_nuWaNAwe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_HPl0X6SD, 1, m, &cIf_HPl0X6SD_sendMessage);
}

void Heavy_Untitled::cBinop_9aZgIqlk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_fJLzVsSu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Zqm3WHfW, 1, m, &cIf_Zqm3WHfW_sendMessage);
}

void Heavy_Untitled::cCast_nBSqxZl1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_aeLnGyq9, 1, m, &cIf_aeLnGyq9_sendMessage);
}

void Heavy_Untitled::cVar_gft4yZSL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_NzB8nBKQ_sendMessage);
}

void Heavy_Untitled::cSlice_NUNgYMhw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_DcQpnpym_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_B8acZ3W3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Rd2jI4TF_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_PGTHVbKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_59VszuTo_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_70tHdQIF, m);
}

void Heavy_Untitled::cBinop_59VszuTo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PGTHVbKI, 1, m, &cVar_PGTHVbKI_sendMessage);
}

void Heavy_Untitled::cVar_9C9pEKZe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_MPo5MBqM_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_4wkZXWdO, m);
}

void Heavy_Untitled::cBinop_MPo5MBqM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9C9pEKZe, 1, m, &cVar_9C9pEKZe_sendMessage);
}

void Heavy_Untitled::cVar_t2aO2psJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_cK47uHzo_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_r2wpaeT5, m);
}

void Heavy_Untitled::cBinop_cK47uHzo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_t2aO2psJ, 1, m, &cVar_t2aO2psJ_sendMessage);
}

void Heavy_Untitled::cCast_QajeXx5T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eaYFzTBY, 0, m, &cVar_eaYFzTBY_sendMessage);
}

void Heavy_Untitled::cVar_eaYFzTBY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_whkVkCx3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FKQEaHNg, 0, m, &cVar_FKQEaHNg_sendMessage);
}

void Heavy_Untitled::cVar_FKQEaHNg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3wFcdwtC_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_kR6gUTlk_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_PEzkCVS9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_3wFcdwtC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eFgcv35E_sendMessage);
      break;
    }
    default: {
      cMsg_02aLG4iO_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_eFgcv35E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PGTHVbKI, 0, m, &cVar_PGTHVbKI_sendMessage);
}

void Heavy_Untitled::cSwitchcase_kR6gUTlk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tarTmmeC_sendMessage);
      break;
    }
    default: {
      cMsg_As60uPR3_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_tarTmmeC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9C9pEKZe, 0, m, &cVar_9C9pEKZe_sendMessage);
}

void Heavy_Untitled::cSwitchcase_PEzkCVS9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dSqP5OIT_sendMessage);
      break;
    }
    default: {
      cMsg_8xuy0N3F_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_dSqP5OIT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_t2aO2psJ, 0, m, &cVar_t2aO2psJ_sendMessage);
}

void Heavy_Untitled::cMsg_73reofAG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BIgra6rN_sendMessage);
}

void Heavy_Untitled::cSystem_BIgra6rN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9mgZS2SP_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_9mgZS2SP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_gBFN257o_sendMessage);
}

void Heavy_Untitled::cBinop_gBFN257o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_elgvhwVh, m);
}

void Heavy_Untitled::cMsg_zaKFxkIB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_b35sOonI_sendMessage);
}

void Heavy_Untitled::cSystem_b35sOonI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LSm5f5CP_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_LSm5f5CP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_mImemel4_sendMessage);
}

void Heavy_Untitled::cBinop_mImemel4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fawqHQoI, m);
}

void Heavy_Untitled::cSwitchcase_qHmZAqHv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_DhlFrhqt, 0, m, &cSlice_DhlFrhqt_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bbTCIPxy, 0, m, &cSlice_bbTCIPxy_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_yNkndgYT, 0, m, &cSlice_yNkndgYT_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_HegKYtbM, 0, m, &cSlice_HegKYtbM_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_4b4lWI0h, 0, m, &cSlice_4b4lWI0h_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_NbQ3iCNA, 0, m, &cSlice_NbQ3iCNA_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_v0F6MraE, 0, m, &cSlice_v0F6MraE_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xrnnsVqg, 0, m, &cSlice_xrnnsVqg_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_syMHocvb, 0, m, &cSlice_syMHocvb_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_RN7S9hQo, 0, m, &cSlice_RN7S9hQo_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_DhlFrhqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_UvSjSt7M_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_UvSjSt7M_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_bbTCIPxy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_NUNgYMhw, 0, m, &cSlice_NUNgYMhw_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_B8acZ3W3, 0, m, &cSlice_B8acZ3W3_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_NUNgYMhw, 0, m, &cSlice_NUNgYMhw_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_B8acZ3W3, 0, m, &cSlice_B8acZ3W3_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_yNkndgYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_S1Xj8tUA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_S1Xj8tUA_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_HegKYtbM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_29p63F6W_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_29p63F6W_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_4b4lWI0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_xJbRWwRm_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_xJbRWwRm_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_NbQ3iCNA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_l8rl6PF5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_l8rl6PF5_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_v0F6MraE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_UWwCf5gs_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_UWwCf5gs_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_xrnnsVqg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_oRJc2wTx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_oRJc2wTx_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_syMHocvb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_3LYn120Z_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_3LYn120Z_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_RN7S9hQo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_edjLD3PB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_edjLD3PB_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_hDNBCkFt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mb833ptQ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_J9MkvYA7_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_n8NopJbi, 0, m, &cSlice_n8NopJbi_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_hDNBCkFt, 0, m, &cPack_hDNBCkFt_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_n8NopJbi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_sVnZDkc8, 0, m, &cPack_sVnZDkc8_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_sVnZDkc8, 0, m, &cPack_sVnZDkc8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_sVnZDkc8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BT1WEXDQ_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_WKUo9VmT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QIIKATsa, m);
}

void Heavy_Untitled::cBinop_gufs4yj1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_fJwp2Avz_sendMessage);
}

void Heavy_Untitled::cBinop_fJwp2Avz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_icuUklYR, m);
}

void Heavy_Untitled::cMsg_6bh3ntqA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_arP1mCFQ, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_arP1mCFQ, 0, m, NULL);
}

void Heavy_Untitled::cBinop_5uuKPZOy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_lpQo7VQr, 1, m, &cPack_lpQo7VQr_sendMessage);
}

void Heavy_Untitled::cCast_2QZ32Ix2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5uuKPZOy, HV_BINOP_ADD, 1, m, &cBinop_5uuKPZOy_sendMessage);
}

void Heavy_Untitled::cCast_kHC8a5RS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5uuKPZOy, HV_BINOP_ADD, 0, m, &cBinop_5uuKPZOy_sendMessage);
}

void Heavy_Untitled::cBinop_65yfz2fX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gft4yZSL, 0, m, &cVar_gft4yZSL_sendMessage);
}

void Heavy_Untitled::cBinop_NzB8nBKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_LpfbVTyJ_sendMessage);
}

void Heavy_Untitled::cBinop_LpfbVTyJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_w4dTjX1q_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_CWGk2C76, 0, m, NULL);
}

void Heavy_Untitled::cMsg_w4dTjX1q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_CWGk2C76, 0, m, NULL);
}

void Heavy_Untitled::cSend_UvSjSt7M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SxcDGTov_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Rd2jI4TF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pTPleUgG_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_DcQpnpym_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ma7O8xMx_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_S1Xj8tUA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wfRDQd1P_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_29p63F6W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_V2N2xsPS_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_xJbRWwRm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kjtoRtcL_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_l8rl6PF5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OaDdFmfW_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_kgMTxn2F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_ln04AiPN_sendMessage);
}

void Heavy_Untitled::cBinop_ln04AiPN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_ghidptfY_sendMessage);
}

void Heavy_Untitled::cBinop_ghidptfY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2QZ32Ix2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kHC8a5RS_sendMessage);
}

void Heavy_Untitled::cBinop_Qrlx7RTE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_lpQo7VQr, 2, m, &cPack_lpQo7VQr_sendMessage);
}

void Heavy_Untitled::cSend_oRJc2wTx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PFlN9q31_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_UWwCf5gs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0UHLmAMK_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_whkVkCx3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_SEQswCH3_sendMessage);
}

void Heavy_Untitled::cMsg_02aLG4iO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_PGTHVbKI, 0, m, &cVar_PGTHVbKI_sendMessage);
}

void Heavy_Untitled::cMsg_As60uPR3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_9C9pEKZe, 0, m, &cVar_9C9pEKZe_sendMessage);
}

void Heavy_Untitled::cMsg_8xuy0N3F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_t2aO2psJ, 0, m, &cVar_t2aO2psJ_sendMessage);
}

void Heavy_Untitled::cBinop_SEQswCH3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eaYFzTBY, 1, m, &cVar_eaYFzTBY_sendMessage);
}

void Heavy_Untitled::cBinop_Ob0B5VQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_hDNBCkFt, 1, m, &cPack_hDNBCkFt_sendMessage);
}

void Heavy_Untitled::cBinop_DyZuqiXv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_sVnZDkc8, 1, m, &cPack_sVnZDkc8_sendMessage);
}

void Heavy_Untitled::cSend_3LYn120Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_rQKlmpCi_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_edjLD3PB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_J9vo5L9F_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_NiNc1zm8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_J9MkvYA7_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_mb833ptQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_rilzf60Q, 0, m, NULL);
}

void Heavy_Untitled::cMsg_BT1WEXDQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_rilzf60Q, 0, m, NULL);
}

void Heavy_Untitled::cVar_5Ha2vFNy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_HPlNFxrn_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 12.0f, 0, m, &cBinop_xkpR97QZ_sendMessage);
}

void Heavy_Untitled::cBinop_HPlNFxrn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5Ha2vFNy, 1, m, &cVar_5Ha2vFNy_sendMessage);
}

void Heavy_Untitled::cIf_knKe3Lfj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_hmAB8tzt, 0, m, &cPack_hmAB8tzt_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_6cgUlokf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_gPHYTPG5_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_knKe3Lfj, 1, m, &cIf_knKe3Lfj_sendMessage);
}

void Heavy_Untitled::cBinop_gPHYTPG5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6cgUlokf, 1, m, &cVar_6cgUlokf_sendMessage);
}

void Heavy_Untitled::cPack_hmAB8tzt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KcPntNCn_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSlice_rWUPsnzM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_xyZObcoq_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_s1wQR12M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_vqIsRg2Q, 0, m, &cIf_vqIsRg2Q_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_XWvZVRNv, 0, m, &cIf_XWvZVRNv_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_M3l3tjnP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_29qmyNXy_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_kWSAzHd1, 0, m, &cIf_kWSAzHd1_sendMessage);
}

void Heavy_Untitled::cUnop_xxTYIzEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_27y51wKT_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ymObLcLQ, HV_BINOP_EQ, 1, m, &cBinop_ymObLcLQ_sendMessage);
}

void Heavy_Untitled::cUnop_i0J10Z0B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_27y51wKT_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ymObLcLQ, HV_BINOP_EQ, 1, m, &cBinop_ymObLcLQ_sendMessage);
}

void Heavy_Untitled::cIf_kWSAzHd1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_i0J10Z0B_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_xxTYIzEi_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_29qmyNXy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_kWSAzHd1, 1, m, &cIf_kWSAzHd1_sendMessage);
}

void Heavy_Untitled::cIf_XWvZVRNv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_fCXR0JP8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_GO4oeD3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_oKDY8bMm_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_vqIsRg2Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 16383.0f, 0, m, &cBinop_fCXR0JP8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_x3ViPF1F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_oKDY8bMm_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_27y51wKT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SGmYK2aK_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DM3bi4VJ_sendMessage);
}

void Heavy_Untitled::cBinop_xyZObcoq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ymObLcLQ, HV_BINOP_EQ, 0, m, &cBinop_ymObLcLQ_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_x3ViPF1F, 0, m, &cIf_x3ViPF1F_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_GO4oeD3R, 0, m, &cIf_GO4oeD3R_sendMessage);
}

void Heavy_Untitled::cBinop_ymObLcLQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eEYg4CRA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LU8gYcGt_sendMessage);
}

void Heavy_Untitled::cCast_eEYg4CRA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GO4oeD3R, 1, m, &cIf_GO4oeD3R_sendMessage);
}

void Heavy_Untitled::cCast_LU8gYcGt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_vqIsRg2Q, 1, m, &cIf_vqIsRg2Q_sendMessage);
}

void Heavy_Untitled::cBinop_oKDY8bMm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cCast_DM3bi4VJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_XWvZVRNv, 1, m, &cIf_XWvZVRNv_sendMessage);
}

void Heavy_Untitled::cCast_SGmYK2aK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_x3ViPF1F, 1, m, &cIf_x3ViPF1F_sendMessage);
}

void Heavy_Untitled::cVar_JePpbRaE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_DzSbfcJX_sendMessage);
}

void Heavy_Untitled::cSlice_X3TNztXG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_xTXZ0Vhq_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_N77bmg8l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_IbSyDNY3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_CD3KrNBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_t2wf2xuJ_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_meZvB6MF, m);
}

void Heavy_Untitled::cBinop_t2wf2xuJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CD3KrNBc, 1, m, &cVar_CD3KrNBc_sendMessage);
}

void Heavy_Untitled::cVar_d2HNI7d3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_VplrLsBu_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_VhG5Kz7l, m);
}

void Heavy_Untitled::cBinop_VplrLsBu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_d2HNI7d3, 1, m, &cVar_d2HNI7d3_sendMessage);
}

void Heavy_Untitled::cVar_Ucmvo8zf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_ae3wSqKb_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Urue7WXU, m);
}

void Heavy_Untitled::cBinop_ae3wSqKb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ucmvo8zf, 1, m, &cVar_Ucmvo8zf_sendMessage);
}

void Heavy_Untitled::cCast_B9JSW7Nr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YpdH2HMR, 0, m, &cVar_YpdH2HMR_sendMessage);
}

void Heavy_Untitled::cVar_YpdH2HMR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_PO2qAUPn_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_OP6OEFj1, 0, m, &cVar_OP6OEFj1_sendMessage);
}

void Heavy_Untitled::cVar_OP6OEFj1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_WS4ejqq4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_l2HDyKYg_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ip5qEour_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_WS4ejqq4_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2CqJ1Wcc_sendMessage);
      break;
    }
    default: {
      cMsg_uwjUJwG9_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_2CqJ1Wcc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CD3KrNBc, 0, m, &cVar_CD3KrNBc_sendMessage);
}

void Heavy_Untitled::cSwitchcase_l2HDyKYg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t5QUvfe1_sendMessage);
      break;
    }
    default: {
      cMsg_rcw8ll1R_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_t5QUvfe1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_d2HNI7d3, 0, m, &cVar_d2HNI7d3_sendMessage);
}

void Heavy_Untitled::cSwitchcase_Ip5qEour_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ipyI5iev_sendMessage);
      break;
    }
    default: {
      cMsg_IZ1u4ibW_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cCast_ipyI5iev_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ucmvo8zf, 0, m, &cVar_Ucmvo8zf_sendMessage);
}

void Heavy_Untitled::cMsg_HYlbvNrp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Z2tWrDTq_sendMessage);
}

void Heavy_Untitled::cSystem_Z2tWrDTq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nuKkBUQh_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_nuKkBUQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Al13Slld_sendMessage);
}

void Heavy_Untitled::cBinop_Al13Slld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Z8kiRdiD, m);
}

void Heavy_Untitled::cMsg_N2T2oIHn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0pFYQjCn_sendMessage);
}

void Heavy_Untitled::cSystem_0pFYQjCn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oIsimbHF_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_oIsimbHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_mtURx4cE_sendMessage);
}

void Heavy_Untitled::cBinop_mtURx4cE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_318npeAw, m);
}

void Heavy_Untitled::cSwitchcase_w7u5Ja5C_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xEE6E7B8: { // "pitch_env"
      cSlice_onMessage(_c, &Context(_c)->cSlice_so1qGSL0, 0, m, &cSlice_so1qGSL0_sendMessage);
      break;
    }
    case 0xF4F7629F: { // "midi_msg_p"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mnKOW7Hk, 0, m, &cSlice_mnKOW7Hk_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // "time"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZIA2WVFS, 0, m, &cSlice_ZIA2WVFS_sendMessage);
      break;
    }
    case 0xBE95A6F8: { // "octave"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xZIBc808, 0, m, &cSlice_xZIBc808_sendMessage);
      break;
    }
    case 0x3861AA6D: { // "detune"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oaLK7HzS, 0, m, &cSlice_oaLK7HzS_sendMessage);
      break;
    }
    case 0x1205EA9B: { // "lfo_amount"
      cSlice_onMessage(_c, &Context(_c)->cSlice_akzwM44p, 0, m, &cSlice_akzwM44p_sendMessage);
      break;
    }
    case 0xEB9639BF: { // "attack"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vF9zNMUC, 0, m, &cSlice_vF9zNMUC_sendMessage);
      break;
    }
    case 0x34A8D635: { // "release"
      cSlice_onMessage(_c, &Context(_c)->cSlice_966UpVfc, 0, m, &cSlice_966UpVfc_sendMessage);
      break;
    }
    case 0x6D413ECE: { // "waveshape"
      cSlice_onMessage(_c, &Context(_c)->cSlice_d7L6dISa, 0, m, &cSlice_d7L6dISa_sendMessage);
      break;
    }
    case 0xB1642755: { // "volume"
      cSlice_onMessage(_c, &Context(_c)->cSlice_FZSe3mW9, 0, m, &cSlice_FZSe3mW9_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_so1qGSL0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_akwtdVPe_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_akwtdVPe_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_mnKOW7Hk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_X3TNztXG, 0, m, &cSlice_X3TNztXG_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_N77bmg8l, 0, m, &cSlice_N77bmg8l_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_X3TNztXG, 0, m, &cSlice_X3TNztXG_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_N77bmg8l, 0, m, &cSlice_N77bmg8l_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_ZIA2WVFS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Fa20fTfz_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Fa20fTfz_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_xZIBc808_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Jh40SyMp_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Jh40SyMp_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_oaLK7HzS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_W8SE71jH_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_W8SE71jH_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_akzwM44p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_f6HTMVDW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_f6HTMVDW_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_vF9zNMUC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_gIvvZMty_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_gIvvZMty_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_966UpVfc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_dk6HPg9f_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_dk6HPg9f_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_d7L6dISa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_vCiPl8ld_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_vCiPl8ld_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_FZSe3mW9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_eeWYgVLi_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_eeWYgVLi_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_GdfJvlyh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_va6vOeUi_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_2YBBcJhZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_P3v6NFOH, 0, m, &cSlice_P3v6NFOH_sendMessage);
      break;
    }
    default: {
      cPack_onMessage(_c, &Context(_c)->cPack_GdfJvlyh, 0, m, &cPack_GdfJvlyh_sendMessage);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_P3v6NFOH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_vED1Ybna, 0, m, &cPack_vED1Ybna_sendMessage);
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_vED1Ybna, 0, m, &cPack_vED1Ybna_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cPack_vED1Ybna_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4V24VV6U_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_xkpR97QZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9fmY7yR6, m);
}

void Heavy_Untitled::cBinop_OXUN4FCV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_fTXlYipC_sendMessage);
}

void Heavy_Untitled::cBinop_fTXlYipC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yGsr6RLI, m);
}

void Heavy_Untitled::cMsg_KcPntNCn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_uCRGSfyr, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_uCRGSfyr, 0, m, NULL);
}

void Heavy_Untitled::cBinop_Cv1dDpV4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_hmAB8tzt, 1, m, &cPack_hmAB8tzt_sendMessage);
}

void Heavy_Untitled::cCast_IxQsMaFX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Cv1dDpV4, HV_BINOP_ADD, 1, m, &cBinop_Cv1dDpV4_sendMessage);
}

void Heavy_Untitled::cCast_5OsmKynd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Cv1dDpV4, HV_BINOP_ADD, 0, m, &cBinop_Cv1dDpV4_sendMessage);
}

void Heavy_Untitled::cBinop_fCXR0JP8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JePpbRaE, 0, m, &cVar_JePpbRaE_sendMessage);
}

void Heavy_Untitled::cBinop_DzSbfcJX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 12.0f, 0, m, &cBinop_X8suTbBH_sendMessage);
}

void Heavy_Untitled::cBinop_X8suTbBH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AOmQ6Vnz_sendMessage(_c, 0, m);
  sLine_onMessage(_c, &Context(_c)->sLine_wTFPCzEZ, 0, m, NULL);
}

void Heavy_Untitled::cMsg_AOmQ6Vnz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 100.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_wTFPCzEZ, 0, m, NULL);
}

void Heavy_Untitled::cSend_akwtdVPe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_g9w4zcLU_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_IbSyDNY3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mRlqCrMk_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_xTXZ0Vhq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ngqET1tY_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Fa20fTfz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vQ4b0nZX_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Jh40SyMp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Gj5OR2ib_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_W8SE71jH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_doxgUVfT_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_f6HTMVDW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yzh3VN89_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_4XLGY8HK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_OgTHX700_sendMessage);
}

void Heavy_Untitled::cBinop_OgTHX700_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_omUjnTc4_sendMessage);
}

void Heavy_Untitled::cBinop_omUjnTc4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IxQsMaFX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5OsmKynd_sendMessage);
}

void Heavy_Untitled::cBinop_fYsnqtqI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_hmAB8tzt, 2, m, &cPack_hmAB8tzt_sendMessage);
}

void Heavy_Untitled::cSend_dk6HPg9f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_smLu2wiE_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_gIvvZMty_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AF2ALf1m_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_PO2qAUPn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MOD_BIPOLAR, 3.0f, 0, m, &cBinop_ozRTp775_sendMessage);
}

void Heavy_Untitled::cMsg_uwjUJwG9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_CD3KrNBc, 0, m, &cVar_CD3KrNBc_sendMessage);
}

void Heavy_Untitled::cMsg_rcw8ll1R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_d2HNI7d3, 0, m, &cVar_d2HNI7d3_sendMessage);
}

void Heavy_Untitled::cMsg_IZ1u4ibW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Ucmvo8zf, 0, m, &cVar_Ucmvo8zf_sendMessage);
}

void Heavy_Untitled::cBinop_ozRTp775_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YpdH2HMR, 1, m, &cVar_YpdH2HMR_sendMessage);
}

void Heavy_Untitled::cBinop_SFY6dtXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_GdfJvlyh, 1, m, &cPack_GdfJvlyh_sendMessage);
}

void Heavy_Untitled::cBinop_ytl4nMmd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_vED1Ybna, 1, m, &cPack_vED1Ybna_sendMessage);
}

void Heavy_Untitled::cSend_vCiPl8ld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_h9MSdh2z_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_eeWYgVLi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_lDOGSK0N_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cBinop_NSzsq6Sa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_2YBBcJhZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_va6vOeUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_lUH6n4LQ, 0, m, NULL);
}

void Heavy_Untitled::cMsg_4V24VV6U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setElementToFrom(m, 1, n, 1);
  sLine_onMessage(_c, &Context(_c)->sLine_lUH6n4LQ, 0, m, NULL);
}

void Heavy_Untitled::cSwitchcase_1OXmRQOy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_egeQv1iL, 0, m, &cSlice_egeQv1iL_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_QRpJAP07, 0, m, &cSlice_QRpJAP07_sendMessage);
      break;
    }
    default: {
      cSend_nYUuH7Ec_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_Untitled::cSlice_egeQv1iL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_cfd5QpAR_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_cfd5QpAR_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_QRpJAP07_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lmlqGRBD_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_lmlqGRBD_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSend_cfd5QpAR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9hlyOgXG_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_lmlqGRBD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Tid3Fdtz_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_nYUuH7Ec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PFJrkzwr_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSwitchcase_ZbqcIOMS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_9SxVDptL, 0, m, &cSlice_9SxVDptL_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tgnZoDJu, 0, m, &cSlice_tgnZoDJu_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Rjxc0pYy, 0, m, &cSlice_Rjxc0pYy_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oiZjGzWn, 0, m, &cSlice_oiZjGzWn_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_H5k04Fto, 0, m, &cSlice_H5k04Fto_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_qeeByfym, 0, m, &cSlice_qeeByfym_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Vps5Km60, 0, m, &cSlice_Vps5Km60_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ehgQfEOQ, 0, m, &cSlice_ehgQfEOQ_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Untitled::cSlice_9SxVDptL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_KRz1m8TO_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_KRz1m8TO_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_tgnZoDJu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_OUS7D9nN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_OUS7D9nN_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Rjxc0pYy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_yK2NoHjA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_yK2NoHjA_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_oiZjGzWn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_8TgZubEO_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_8TgZubEO_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_H5k04Fto_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_nbz5z9Wt_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_nbz5z9Wt_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_qeeByfym_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_JK0BG2n0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_JK0BG2n0_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_Vps5Km60_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_BImVi0TE_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_BImVi0TE_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_ehgQfEOQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_gGUcmdoA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_gGUcmdoA_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_dssQD7Sh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_FQXSm0Or, 0, m);
}

void Heavy_Untitled::cSend_KGD4lQg1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_m3VhSH08_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_8aUhhzYH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "midi_msg_p");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setElementToFrom(m, 2, n, 1);
  cSwitchcase_IYEqQOod_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSend_KRz1m8TO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pvNbjQsr_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_OUS7D9nN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fjZ1Mrri_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_vr79d1nL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "midi_msg_p");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setElementToFrom(m, 2, n, 1);
  cSwitchcase_SAbJ3XtC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSend_yK2NoHjA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZLcfojeK_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_8TgZubEO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_rIG8He9V_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_czTDW3AD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "midi_msg_p");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setElementToFrom(m, 2, n, 1);
  cSwitchcase_Rg1JlhXx_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_OaPLXtGb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "midi_msg_p");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setElementToFrom(m, 2, n, 1);
  cSwitchcase_ISnfPaqC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSend_nbz5z9Wt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_W5rxwpqC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_JK0BG2n0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8OzdpKTf_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_BImVi0TE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kstLSRVh_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_gGUcmdoA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AayLHd4V_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_gpSYTWYt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "midi_msg_p");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setElementToFrom(m, 2, n, 1);
  cSwitchcase_se1o76yr_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_hNoG3spN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "midi_msg_p");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setElementToFrom(m, 2, n, 1);
  cSwitchcase_mxGndGVx_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_DdTgJhUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "midi_msg_p");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setElementToFrom(m, 2, n, 1);
  cSwitchcase_KwJUq8XY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cMsg_HqfFdXBY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "midi_msg_p");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setElementToFrom(m, 2, n, 1);
  cSwitchcase_1OXmRQOy_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cSlice_hHhZ2LVk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_hicOP8MN_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_97oCxuhE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_mNVlnEET, 0, m, &cIf_mNVlnEET_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_o5LNOmfX, 0, m, &cIf_o5LNOmfX_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cSlice_1dDWIbUh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_xQy6RNPo, 0, m, &cIf_xQy6RNPo_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_bfbTxEu4, 0, m, &cIf_bfbTxEu4_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cVar_q7IjFj0S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_KUiMwwh5_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_2pkFKzhh, 0, m, &cIf_2pkFKzhh_sendMessage);
}

void Heavy_Untitled::cUnop_LOsTYHMd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_EmDH9eMx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PVgTc17q, HV_BINOP_EQ, 1, m, &cBinop_PVgTc17q_sendMessage);
}

void Heavy_Untitled::cUnop_14DzP9ys_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_EmDH9eMx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PVgTc17q, HV_BINOP_EQ, 1, m, &cBinop_PVgTc17q_sendMessage);
}

void Heavy_Untitled::cIf_2pkFKzhh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_14DzP9ys_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_LOsTYHMd_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_KUiMwwh5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_2pkFKzhh, 1, m, &cIf_2pkFKzhh_sendMessage);
}

void Heavy_Untitled::cIf_o5LNOmfX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_S5yGOLUF, 1, m, &cPack_S5yGOLUF_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_bfbTxEu4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_S5yGOLUF, 0, m, &cPack_S5yGOLUF_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_mNVlnEET_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_S5yGOLUF, 1, m, &cPack_S5yGOLUF_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cIf_xQy6RNPo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_S5yGOLUF, 0, m, &cPack_S5yGOLUF_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Untitled::cBinop_hicOP8MN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PVgTc17q, HV_BINOP_EQ, 0, m, &cBinop_PVgTc17q_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_IZ5YB1R4_sendMessage);
}

void Heavy_Untitled::cBinop_EmDH9eMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9UcWKdmg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MHWtbaN3_sendMessage);
}

void Heavy_Untitled::cBinop_PVgTc17q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QaBOj7nw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lA8vk3aq_sendMessage);
}

void Heavy_Untitled::cCast_lA8vk3aq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_xQy6RNPo, 1, m, &cIf_xQy6RNPo_sendMessage);
}

void Heavy_Untitled::cCast_QaBOj7nw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_o5LNOmfX, 1, m, &cIf_o5LNOmfX_sendMessage);
}

void Heavy_Untitled::cCast_MHWtbaN3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_bfbTxEu4, 1, m, &cIf_bfbTxEu4_sendMessage);
}

void Heavy_Untitled::cCast_9UcWKdmg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mNVlnEET, 1, m, &cIf_mNVlnEET_sendMessage);
}

void Heavy_Untitled::cBinop_IZ5YB1R4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Untitled::cPack_S5yGOLUF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_abgCCQzX_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_nV89HyO6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_69p8OBuS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_WaQLq4eR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_mY8OF5Ej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_gdOVOlsc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_eqPnNisd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_kK9PpZJ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_ysdlPuL8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_GEwPZdBG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_F7ejE0RC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_C8TNjoHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_JcM2queU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_6Y0So3Cj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_pcjyaVZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_TzRy8JAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_LFGdQ2V5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_Sl8D4Ghz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_abgCCQzX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "midi_msg");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setElementToFrom(m, 2, n, 1);
  cSend_Sl8D4Ghz_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_LcH9hYBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "lfo_freq");
  msg_setElementToFrom(m, 1, n, 0);
  cSend_6S8bPFqh_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cSend_6S8bPFqh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IzovBtTm_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_f1J9vBEO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "release");
  msg_setElementToFrom(m, 1, n, 0);
  cSend_LFGdQ2V5_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_VXMDfoKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "attack");
  msg_setElementToFrom(m, 1, n, 0);
  cSend_TzRy8JAb_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_8zVhOYPY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setSymbol(m, 1, "octave");
  msg_setBang(m, 2);
  cSend_69p8OBuS_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_FaZgNIZN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setSymbol(m, 1, "waveshape");
  msg_setBang(m, 2);
  cSend_nV89HyO6_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_TwamFP2I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setSymbol(m, 1, "detune");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_WaQLq4eR_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_3iBkufFi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setSymbol(m, 1, "pitch_env");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_mY8OF5Ej_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_JBTYrsUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setSymbol(m, 1, "time");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_gdOVOlsc_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_SIGX7k0n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setSymbol(m, 1, "lfo_amount");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_eqPnNisd_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_oazcbNDk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setSymbol(m, 1, "volume");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_kK9PpZJ8_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_4ZINuUn6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setSymbol(m, 1, "volume");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_pcjyaVZF_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_V6lagKnt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setSymbol(m, 1, "lfo_amount");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_6Y0So3Cj_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_PulrAWP6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setSymbol(m, 1, "time");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_JcM2queU_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_JzVPeG6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setSymbol(m, 1, "pitch_env");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_C8TNjoHg_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_HzrcGfgS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setSymbol(m, 1, "detune");
  msg_setElementToFrom(m, 2, n, 0);
  cSend_F7ejE0RC_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_ORzBJ6HN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setSymbol(m, 1, "waveshape");
  msg_setBang(m, 2);
  cSend_ysdlPuL8_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cMsg_ocfyt4CJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setSymbol(m, 1, "octave");
  msg_setBang(m, 2);
  cSend_GEwPZdBG_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cReceive_hMe7PGxx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Fv5xgjmL, 0, m, &cVar_Fv5xgjmL_sendMessage);
}

void Heavy_Untitled::cReceive_ZPhvGKpL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cm1Gzd8C, 0, m, &cVar_cm1Gzd8C_sendMessage);
}

void Heavy_Untitled::cReceive_AKws1oXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WDuRPF4n, 0, m, &cVar_WDuRPF4n_sendMessage);
}

void Heavy_Untitled::cReceive_c3XGOhuw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tVeQJVEI, 0, m, &cVar_tVeQJVEI_sendMessage);
}

void Heavy_Untitled::cReceive_d5feZlk9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K7O8mIQ3_sendMessage);
}

void Heavy_Untitled::cReceive_qeHbXAYY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nRemtf7I_sendMessage);
}

void Heavy_Untitled::cReceive_Ry9yxjV0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_X2jbbUPs, 0, m, &cVar_X2jbbUPs_sendMessage);
}

void Heavy_Untitled::cReceive_XuT1YHTM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jbpZq4pP_sendMessage);
}

void Heavy_Untitled::cReceive_h5WJw1JZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aEJwSe8z_sendMessage);
}

void Heavy_Untitled::cReceive_1jaa6YZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3pOwWtlG, 0, m, &cVar_3pOwWtlG_sendMessage);
}

void Heavy_Untitled::cReceive_BtfpbEBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iIDA6JTg, 0, m, &cVar_iIDA6JTg_sendMessage);
}

void Heavy_Untitled::cReceive_q7RUK0SS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XffgEhuw, 0, m, &cVar_XffgEhuw_sendMessage);
}

void Heavy_Untitled::cReceive_33USMx9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SQS2tnpp, 0, m, &cVar_SQS2tnpp_sendMessage);
}

void Heavy_Untitled::cReceive_6bjpiw4p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jfMleBYg, 0, m, &cVar_jfMleBYg_sendMessage);
}

void Heavy_Untitled::cReceive_EPrwLsyU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8hwBDaR1, 0, m, &cVar_8hwBDaR1_sendMessage);
}

void Heavy_Untitled::cReceive_I78xt0KX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aRfpLERf, 0, m, &cVar_aRfpLERf_sendMessage);
}

void Heavy_Untitled::cReceive_x47lDcoV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_E0be3iPi, 0, m, &cVar_E0be3iPi_sendMessage);
}

void Heavy_Untitled::cReceive_m3VhSH08_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_IYEqQOod_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_SAbJ3XtC_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Rg1JlhXx_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_ISnfPaqC_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_se1o76yr_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_mxGndGVx_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_KwJUq8XY_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_1OXmRQOy_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_VrWb35jf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSlice_onMessage(_c, &Context(_c)->cSlice_nWDER41e, 0, m, &cSlice_nWDER41e_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RR8pHges, 0, m, &cSlice_RR8pHges_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_UcVQFB8Y, 0, m, &cSlice_UcVQFB8Y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6fPXXwVY, 0, m, &cSlice_6fPXXwVY_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_MIDRRCgR, 0, m, &cSlice_MIDRRCgR_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_b0Sz0ZuQ, 0, m, &cSlice_b0Sz0ZuQ_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_CooJrV4H, 0, m, &cSlice_CooJrV4H_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ls7cpEN1, 0, m, &cSlice_Ls7cpEN1_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_ZiAIfSV2, 0, m, &cSlice_ZiAIfSV2_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_fHSMbU9W, 0, m, &cSlice_fHSMbU9W_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_zx8a9Wax, 0, m, &cSlice_zx8a9Wax_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RlURvp4e, 0, m, &cSlice_RlURvp4e_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_DOD9KU08, 0, m, &cSlice_DOD9KU08_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_oJgYkUT4, 0, m, &cSlice_oJgYkUT4_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_to6bR4at, 0, m, &cSlice_to6bR4at_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yhra3fVS, 0, m, &cSlice_yhra3fVS_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JonYBon0, 0, m, &cSlice_JonYBon0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Ua6omJ3y, 0, m, &cSlice_Ua6omJ3y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_227n5T6F, 0, m, &cSlice_227n5T6F_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_uwCKxtsO, 0, m, &cSlice_uwCKxtsO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_xEpavzLn, 0, m, &cSlice_xEpavzLn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_vlBrDppn, 0, m, &cSlice_vlBrDppn_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_foRmkhEN, 0, m, &cSlice_foRmkhEN_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_q9fM4m75, 0, m, &cSlice_q9fM4m75_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_QVXgL2S6, 0, m, &cSlice_QVXgL2S6_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_EfoTYKrb, 0, m, &cSlice_EfoTYKrb_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HxQtIkQd, 0, m, &cSlice_HxQtIkQd_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_stFSzL51, 0, m, &cSlice_stFSzL51_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Af9gpXbc, 0, m, &cSlice_Af9gpXbc_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JDxErB3q, 0, m, &cSlice_JDxErB3q_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_rWUPsnzM, 0, m, &cSlice_rWUPsnzM_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_s1wQR12M, 0, m, &cSlice_s1wQR12M_sendMessage);
}

void Heavy_Untitled::cReceive_oPKNuXaR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zXWr9XVu_sendMessage(_c, 0, m);
  cMsg_OBa0t9QO_sendMessage(_c, 0, m);
  cMsg_xfbwMRSA_sendMessage(_c, 0, m);
  cMsg_lGrrG1QK_sendMessage(_c, 0, m);
  cMsg_MyvjSfy7_sendMessage(_c, 0, m);
  cMsg_66CVssXV_sendMessage(_c, 0, m);
  cMsg_WIy9VEaD_sendMessage(_c, 0, m);
  cMsg_s3ijqdFG_sendMessage(_c, 0, m);
  cMsg_BedEtWUD_sendMessage(_c, 0, m);
  cMsg_2ycmAyE3_sendMessage(_c, 0, m);
  cMsg_eHU2IMMi_sendMessage(_c, 0, m);
  cMsg_cSuRRebp_sendMessage(_c, 0, m);
  cMsg_GY3zG8DT_sendMessage(_c, 0, m);
  cMsg_YtePwG67_sendMessage(_c, 0, m);
  cMsg_ca8cYSq1_sendMessage(_c, 0, m);
  cMsg_LSfQfTKW_sendMessage(_c, 0, m);
  cMsg_jEbAzfNz_sendMessage(_c, 0, m);
  cMsg_2OIDo7qs_sendMessage(_c, 0, m);
  cMsg_Ry6XK4K1_sendMessage(_c, 0, m);
  cMsg_jZ5gDgGc_sendMessage(_c, 0, m);
  cMsg_SZlx7zYX_sendMessage(_c, 0, m);
  cMsg_mEkVfOBO_sendMessage(_c, 0, m);
  cMsg_HmLGxLAO_sendMessage(_c, 0, m);
  cMsg_BajSTPKz_sendMessage(_c, 0, m);
  cMsg_kHhulc2N_sendMessage(_c, 0, m);
  cMsg_FulYqLHa_sendMessage(_c, 0, m);
  cMsg_Rdp6rcWM_sendMessage(_c, 0, m);
  cMsg_CtRY8vte_sendMessage(_c, 0, m);
  cMsg_73reofAG_sendMessage(_c, 0, m);
  cMsg_zaKFxkIB_sendMessage(_c, 0, m);
  cMsg_HYlbvNrp_sendMessage(_c, 0, m);
  cMsg_N2T2oIHn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FDb6S0CW, 0, m, &cVar_FDb6S0CW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_4tCznaMI, 0, m, &cVar_4tCznaMI_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_JOCTvkMZ, 0, m, &cVar_JOCTvkMZ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ILktxGl6, 0, m, &cVar_ILktxGl6_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_UEZfqvKi, 0, m, &cVar_UEZfqvKi_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_pvemYhFw, 0, m, &cVar_pvemYhFw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FixwDbXA, 0, m, &cVar_FixwDbXA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_S66gRHEi, 0, m, &cVar_S66gRHEi_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_oJr9KyJL, 0, m, &cVar_oJr9KyJL_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_4z0BTbF3, 0, m, &cVar_4z0BTbF3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_BYSN50Gd, 0, m, &cVar_BYSN50Gd_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_hcZMmU1n, 0, m, &cVar_hcZMmU1n_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9IGf1yZR, 0, m, &cVar_9IGf1yZR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9WmUTDJQ, 0, m, &cVar_9WmUTDJQ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WaiUB1pW, 0, m, &cVar_WaiUB1pW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_M3l3tjnP, 0, m, &cVar_M3l3tjnP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K9ieUwzs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RZ9YgnBv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_of2gayZu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pWg0vxq0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tbovIii9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8fx4FG0A_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k8cyzhWR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_j4Ctz6Q2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KCTcPHfA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RcuzUjhX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2YU7sdg8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BfyvIePU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rCi4iPAC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vlaaMI6Q_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QajeXx5T_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B9JSW7Nr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GIZNpRfj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4AngLcNo_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_q7IjFj0S, 0, m, &cVar_q7IjFj0S_sendMessage);
}

void Heavy_Untitled::cReceive_xDvzGs8u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_veURLP2R_sendMessage);
}

void Heavy_Untitled::cReceive_mBAHuBvr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_82ENoIDz, 0, m, &cIf_82ENoIDz_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_JqZ1bf9e, HV_BINOP_ADD, 0, m, &cBinop_JqZ1bf9e_sendMessage);
}

void Heavy_Untitled::cReceive_N0Rb75o6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EjHtBhDq, 0, m, &cVar_EjHtBhDq_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_GpTE1YYi_sendMessage);
}

void Heavy_Untitled::cReceive_tt2c1oOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_q6gSBU4A, 0, m, &cVar_q6gSBU4A_sendMessage);
}

void Heavy_Untitled::cReceive_G9QFjqHd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_ckhsgub6_sendMessage);
}

void Heavy_Untitled::cReceive_h6PZrm0M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0n9KqC3D, m);
}

void Heavy_Untitled::cReceive_fn9PCI5i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_sYE7l8Va_sendMessage);
}

void Heavy_Untitled::cReceive_jxWVlGm0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_5T0Y3LWQ_sendMessage);
}

void Heavy_Untitled::cReceive_sWPri9Qw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_GjFBo1wX_sendMessage);
}

void Heavy_Untitled::cReceive_OT9ciWmO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K9ieUwzs_sendMessage);
}

void Heavy_Untitled::cReceive_qxk3lOpY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QdMKHzBZ, m);
}

void Heavy_Untitled::cReceive_jHOFZFDt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_L2lK28Pt_sendMessage);
}

void Heavy_Untitled::cReceive_kNCihHjM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_9PLUYGIV, 0, m, &cIf_9PLUYGIV_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8ToBVNEF, HV_BINOP_ADD, 0, m, &cBinop_8ToBVNEF_sendMessage);
}

void Heavy_Untitled::cReceive_Kca98wH8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Y8Dvxb8n, 0, m, &cVar_Y8Dvxb8n_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_zoWhXKqw_sendMessage);
}

void Heavy_Untitled::cReceive_uvJWEGDZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fkSbbs5j, 0, m, &cVar_fkSbbs5j_sendMessage);
}

void Heavy_Untitled::cReceive_XW1aYSNd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_8fCyVk72_sendMessage);
}

void Heavy_Untitled::cReceive_xwRruQmN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3yVxl9Ys, m);
}

void Heavy_Untitled::cReceive_mjrctxxa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_3DDTvKmx_sendMessage);
}

void Heavy_Untitled::cReceive_AiA7ggEN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_tAlkjIZJ_sendMessage);
}

void Heavy_Untitled::cReceive_QhUJydKS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_e6PJfM3x_sendMessage);
}

void Heavy_Untitled::cReceive_lRWSoASh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RZ9YgnBv_sendMessage);
}

void Heavy_Untitled::cReceive_sYGCclTH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_mNTa5oYO, m);
}

void Heavy_Untitled::cReceive_Pz0XiGkS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_AnCHzcmY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_pnL96Z0M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DsrR8Pmg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_4QYg6ncf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_AnCHzcmY_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_DsrR8Pmg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_pvNbjQsr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8aUhhzYH_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cReceive_fjZ1Mrri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vr79d1nL_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cReceive_f6vzeKju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_YMW6tjuY_sendMessage);
}

void Heavy_Untitled::cReceive_VGAXsYg7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_hBEBeEOp, 0, m, &cIf_hBEBeEOp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_sa9FEwcJ, HV_BINOP_ADD, 0, m, &cBinop_sa9FEwcJ_sendMessage);
}

void Heavy_Untitled::cReceive_GRQnmAxC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lobgS3FS, 0, m, &cVar_lobgS3FS_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_9iVx35SN_sendMessage);
}

void Heavy_Untitled::cReceive_bdVjrez0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wqDEbLRj, 0, m, &cVar_wqDEbLRj_sendMessage);
}

void Heavy_Untitled::cReceive_Yr8BgsuX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_35O5Jraa_sendMessage);
}

void Heavy_Untitled::cReceive_Ep2LyQ8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HJTdzBRI, m);
}

void Heavy_Untitled::cReceive_UtLcwFIR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_Sxi7EST3_sendMessage);
}

void Heavy_Untitled::cReceive_7KgeBsws_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_4vZuhqLG_sendMessage);
}

void Heavy_Untitled::cReceive_s478T6Gh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_SC89ZqRb_sendMessage);
}

void Heavy_Untitled::cReceive_5SKZonon_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_of2gayZu_sendMessage);
}

void Heavy_Untitled::cReceive_RvNZRcY3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iKCUmQ0k, m);
}

void Heavy_Untitled::cReceive_UJntILxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_dkqmsMXF_sendMessage);
}

void Heavy_Untitled::cReceive_ZeehLNiU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_p6yZA3NU, 0, m, &cIf_p6yZA3NU_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_p8EcIigj, HV_BINOP_ADD, 0, m, &cBinop_p8EcIigj_sendMessage);
}

void Heavy_Untitled::cReceive_zBUMVjQ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BQwFbWE2, 0, m, &cVar_BQwFbWE2_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_qd08Ypdz_sendMessage);
}

void Heavy_Untitled::cReceive_RYtbb2nJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0eppjdlV, 0, m, &cVar_0eppjdlV_sendMessage);
}

void Heavy_Untitled::cReceive_ray7d9XJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_ixIqk57X_sendMessage);
}

void Heavy_Untitled::cReceive_ugkgPAY7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LBmqqbgM, m);
}

void Heavy_Untitled::cReceive_1U1ttR6n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_BukTnn3W_sendMessage);
}

void Heavy_Untitled::cReceive_dkGECHM1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_PJpEuH7i_sendMessage);
}

void Heavy_Untitled::cReceive_OYlFVCfF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_KACz6nfQ_sendMessage);
}

void Heavy_Untitled::cReceive_UurKUdrz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pWg0vxq0_sendMessage);
}

void Heavy_Untitled::cReceive_aMyLYAMS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KgBwuRTo, m);
}

void Heavy_Untitled::cReceive_x6HmGCRH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_AH79Lh6l_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_pnsypTrc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ZB76NCpc_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_zbgUyudN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_AH79Lh6l_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_ZB76NCpc_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_ZLcfojeK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_czTDW3AD_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cReceive_rIG8He9V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OaPLXtGb_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cReceive_hGRB3r7j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_OUNKxNFX_sendMessage);
}

void Heavy_Untitled::cReceive_8nWzEmbo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_G3qaLhpI, 0, m, &cIf_G3qaLhpI_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_kQPpssRS, HV_BINOP_ADD, 0, m, &cBinop_kQPpssRS_sendMessage);
}

void Heavy_Untitled::cReceive_VAqqPQWm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PJ9pBR1O, 0, m, &cVar_PJ9pBR1O_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_vpUZM6K9_sendMessage);
}

void Heavy_Untitled::cReceive_eBOSVi4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TzGRSzu1, 0, m, &cVar_TzGRSzu1_sendMessage);
}

void Heavy_Untitled::cReceive_lRkeYTZW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_VVpcZ7nz_sendMessage);
}

void Heavy_Untitled::cReceive_HL0ZsO5f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JkJcJTgY, m);
}

void Heavy_Untitled::cReceive_cpjieji4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_azw9Li7x_sendMessage);
}

void Heavy_Untitled::cReceive_rgEASNsG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_TiDxp7ui_sendMessage);
}

void Heavy_Untitled::cReceive_nY89Kmuk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_v9EioLfy_sendMessage);
}

void Heavy_Untitled::cReceive_cceREs6N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tbovIii9_sendMessage);
}

void Heavy_Untitled::cReceive_4hvNAuoU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_epHzvFVv, m);
}

void Heavy_Untitled::cReceive_iWd3gysd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_3UhV713k_sendMessage);
}

void Heavy_Untitled::cReceive_uTZ5vkzH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_d2uYi1Bu, 0, m, &cIf_d2uYi1Bu_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_eelQHj0I, HV_BINOP_ADD, 0, m, &cBinop_eelQHj0I_sendMessage);
}

void Heavy_Untitled::cReceive_EJAKKF79_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9MnPbIo9, 0, m, &cVar_9MnPbIo9_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_IQeMk5aO_sendMessage);
}

void Heavy_Untitled::cReceive_K7gXbUth_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YEBn3xam, 0, m, &cVar_YEBn3xam_sendMessage);
}

void Heavy_Untitled::cReceive_5TAuI9MJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_jqfi0n2p_sendMessage);
}

void Heavy_Untitled::cReceive_V7Rfbn4i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_G6Qw1z3k, m);
}

void Heavy_Untitled::cReceive_yD28zahH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_wmaBv48a_sendMessage);
}

void Heavy_Untitled::cReceive_FeeABZSy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_v7hY9Ncp_sendMessage);
}

void Heavy_Untitled::cReceive_goq80Tmn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_26FA4AaE_sendMessage);
}

void Heavy_Untitled::cReceive_dnp1qlPK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8fx4FG0A_sendMessage);
}

void Heavy_Untitled::cReceive_FCN7s31U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Wm1wq5c1, m);
}

void Heavy_Untitled::cReceive_0PZqkoHM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_dWHm5Fw3_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_FJXyOwsj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_58WcnDBh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_wqHTL2as_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_dWHm5Fw3_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_58WcnDBh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_B1AupDJz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_CYxb1MYB_sendMessage);
}

void Heavy_Untitled::cReceive_OmcwYAir_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_N9Sup1dy, 0, m, &cIf_N9Sup1dy_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_s4rN62Gr, HV_BINOP_ADD, 0, m, &cBinop_s4rN62Gr_sendMessage);
}

void Heavy_Untitled::cReceive_ctDTLeiD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_56T67YCv, 0, m, &cVar_56T67YCv_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_uG1f7e4q_sendMessage);
}

void Heavy_Untitled::cReceive_xiHKTZYj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GX7D0OWJ, 0, m, &cVar_GX7D0OWJ_sendMessage);
}

void Heavy_Untitled::cReceive_V6dh2Kss_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_pk19KVPK_sendMessage);
}

void Heavy_Untitled::cReceive_WRlWTpQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_F6H9JpCa, m);
}

void Heavy_Untitled::cReceive_SdX4Od82_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_fsRH3IZF_sendMessage);
}

void Heavy_Untitled::cReceive_S8PmQ37o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_2H0YPO9w_sendMessage);
}

void Heavy_Untitled::cReceive_gczRzVNo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_wGdB9niz_sendMessage);
}

void Heavy_Untitled::cReceive_2YE5Ddrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k8cyzhWR_sendMessage);
}

void Heavy_Untitled::cReceive_fHSU41JL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PQChtMgV, m);
}

void Heavy_Untitled::cReceive_1oq4n42U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_dyiMSbee_sendMessage);
}

void Heavy_Untitled::cReceive_RBQXIGpe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_NMElIoEx, 0, m, &cIf_NMElIoEx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_R3xQMPK8, HV_BINOP_ADD, 0, m, &cBinop_R3xQMPK8_sendMessage);
}

void Heavy_Untitled::cReceive_OWQJX8AB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Mn3cFg8R, 0, m, &cVar_Mn3cFg8R_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_3YvC2G07_sendMessage);
}

void Heavy_Untitled::cReceive_71MvUvx2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZiKx4Wwe, 0, m, &cVar_ZiKx4Wwe_sendMessage);
}

void Heavy_Untitled::cReceive_w2kGSjLx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_C7rIHNOw_sendMessage);
}

void Heavy_Untitled::cReceive_eq8iY4pJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_paNU3VfV, m);
}

void Heavy_Untitled::cReceive_Q6zzcLYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_2DJSfFkC_sendMessage);
}

void Heavy_Untitled::cReceive_gxVFgBS8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_gn7Z8QXd_sendMessage);
}

void Heavy_Untitled::cReceive_dJkcIYSv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_nwNMaOcn_sendMessage);
}

void Heavy_Untitled::cReceive_u2dLeBix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_j4Ctz6Q2_sendMessage);
}

void Heavy_Untitled::cReceive_dYBCd65l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yMAE3s9Z, m);
}

void Heavy_Untitled::cReceive_VYbQ71tp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_W4cBaA7Q_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_bUwPJUFD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Ggjlf2P7_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_FdJW9KBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_W4cBaA7Q_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ggjlf2P7_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_xstzFzZ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_tO8YC0jz, 1, m, &cIf_tO8YC0jz_sendMessage);
}

void Heavy_Untitled::cReceive_xbMxawFB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mHaEzPdM, 1, m, &cVar_mHaEzPdM_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_KCuB7toO, 1, m, &cVar_KCuB7toO_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_wfHA9BG5, 1, m, &cVar_wfHA9BG5_sendMessage);
}

void Heavy_Untitled::cReceive_jtRs8vkx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eGfEkAme, 0, m, &cVar_eGfEkAme_sendMessage);
}

void Heavy_Untitled::cReceive_x6mk0LQo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ygKDTdkj, 1, m, &cVar_ygKDTdkj_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_w9NwxkNW, 1, m, &cVar_w9NwxkNW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wwy5j0MH, HV_BINOP_MOD_UNIPOLAR, 1, m, &cBinop_wwy5j0MH_sendMessage);
}

void Heavy_Untitled::cReceive_K7XRV2jC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pUc4SrXg, 1, m, &cTabwrite_pUc4SrXg_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Kl78IjB2, 1, m, &cTabwrite_Kl78IjB2_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_G8H1C4Yp, 1, m, &cTabwrite_G8H1C4Yp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_KbwvmGi3, 1, m, &cVar_KbwvmGi3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_tyBMIoav, 1, m, &cVar_tyBMIoav_sendMessage);
}

void Heavy_Untitled::cReceive_mzlyeRHz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_psoJlvXW, 1, m, &cVar_psoJlvXW_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_nKNA232x, 1, m, &cTabwrite_nKNA232x_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_r1MvUxfI, 1, m, &cTabwrite_r1MvUxfI_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_yRAQhZV7, 1, m, &cTabwrite_yRAQhZV7_sendMessage);
}

void Heavy_Untitled::cReceive_0uRV4xwd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CJFYuN3l_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PXFFrv9D_sendMessage);
}

void Heavy_Untitled::cReceive_iATENhU1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Su1YEqkY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_irUhafVd_sendMessage);
}

void Heavy_Untitled::cReceive_W5rxwpqC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gpSYTWYt_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cReceive_8OzdpKTf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hNoG3spN_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cReceive_kstLSRVh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DdTgJhUn_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cReceive_AayLHd4V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HqfFdXBY_sendMessage(_c, 0, m);
}

void Heavy_Untitled::cReceive_9Ei8mCAL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_SZgZGMgp_sendMessage);
}

void Heavy_Untitled::cReceive_I2Mbv6YN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_23eomtGF, 0, m, &cIf_23eomtGF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_b6s9hZC0, HV_BINOP_ADD, 0, m, &cBinop_b6s9hZC0_sendMessage);
}

void Heavy_Untitled::cReceive_4RAU41uv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tM2bGRon, 0, m, &cVar_tM2bGRon_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_UfdO6S3s_sendMessage);
}

void Heavy_Untitled::cReceive_QVCVoUgg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xDpvG2BH, 0, m, &cVar_xDpvG2BH_sendMessage);
}

void Heavy_Untitled::cReceive_alxFZCMi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_MzY1OfWZ_sendMessage);
}

void Heavy_Untitled::cReceive_4HVnENc3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6Z1aW35e, m);
}

void Heavy_Untitled::cReceive_2d9wmi2n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_VEA4JsqD_sendMessage);
}

void Heavy_Untitled::cReceive_t8FcDJqk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_6QO66tQz_sendMessage);
}

void Heavy_Untitled::cReceive_amriBnAQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_0NKgm6r4_sendMessage);
}

void Heavy_Untitled::cReceive_kOLnqRN5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KCTcPHfA_sendMessage);
}

void Heavy_Untitled::cReceive_MGKtMHPt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xoHTgvCF, m);
}

void Heavy_Untitled::cReceive_HRkzPdBF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_jnZRn78Q_sendMessage);
}

void Heavy_Untitled::cReceive_LEUQyyi4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_WIN34lcw, 0, m, &cIf_WIN34lcw_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_kp19ddPr, HV_BINOP_ADD, 0, m, &cBinop_kp19ddPr_sendMessage);
}

void Heavy_Untitled::cReceive_YQqvAyAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tyBqUqFp, 0, m, &cVar_tyBqUqFp_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_OHaGRZCm_sendMessage);
}

void Heavy_Untitled::cReceive_mzF1lPi0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gtD2AWZ3, 0, m, &cVar_gtD2AWZ3_sendMessage);
}

void Heavy_Untitled::cReceive_3rtVjkuF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_GhkAXNHI_sendMessage);
}

void Heavy_Untitled::cReceive_f1MmvNrP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rDsXkGqI, m);
}

void Heavy_Untitled::cReceive_WDOnjyKs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_erA9bsHJ_sendMessage);
}

void Heavy_Untitled::cReceive_VDikrZjj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_8GsLQagd_sendMessage);
}

void Heavy_Untitled::cReceive_oIdjvBsP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_7dSl9Z91_sendMessage);
}

void Heavy_Untitled::cReceive_ssyf6iw0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RcuzUjhX_sendMessage);
}

void Heavy_Untitled::cReceive_PTl9FZFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KLd23hfC, m);
}

void Heavy_Untitled::cReceive_lhKEbms1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_rq43YVJF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_bbPUVqdQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_CLC6smHk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_NJjcF6Ax_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_rq43YVJF_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_CLC6smHk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_GT9za2es_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_tQUn9kng_sendMessage);
}

void Heavy_Untitled::cReceive_Ad1mZhrB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Fg9lxMEJ, 0, m, &cIf_Fg9lxMEJ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_OMhGOqM2, HV_BINOP_ADD, 0, m, &cBinop_OMhGOqM2_sendMessage);
}

void Heavy_Untitled::cReceive_PK1woDXd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UwtjzTdf, 0, m, &cVar_UwtjzTdf_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_UgdHlFYG_sendMessage);
}

void Heavy_Untitled::cReceive_klxI3ITb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_r7AnVJu0, 0, m, &cVar_r7AnVJu0_sendMessage);
}

void Heavy_Untitled::cReceive_iIP57MZj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_ZEXbz1Nl_sendMessage);
}

void Heavy_Untitled::cReceive_fDoMek6Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UU9jSQT1, m);
}

void Heavy_Untitled::cReceive_81gi2F8B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_2wkopXtr_sendMessage);
}

void Heavy_Untitled::cReceive_SzGuBqom_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_AY54nfui_sendMessage);
}

void Heavy_Untitled::cReceive_3J5aIxzw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_Un8v3Tai_sendMessage);
}

void Heavy_Untitled::cReceive_7mmQLkkf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2YU7sdg8_sendMessage);
}

void Heavy_Untitled::cReceive_DgKepLan_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0Agf9l8P, m);
}

void Heavy_Untitled::cReceive_Ndm7W1KJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_l283F6Xp_sendMessage);
}

void Heavy_Untitled::cReceive_V8WDwH5m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_x7ZGuxf2, 0, m, &cIf_x7ZGuxf2_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_z05RfaJf, HV_BINOP_ADD, 0, m, &cBinop_z05RfaJf_sendMessage);
}

void Heavy_Untitled::cReceive_p8CezAoV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Qz6RD2tk, 0, m, &cVar_Qz6RD2tk_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_uAVWnp0c_sendMessage);
}

void Heavy_Untitled::cReceive_VetqLdSh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Mdjtiue2, 0, m, &cVar_Mdjtiue2_sendMessage);
}

void Heavy_Untitled::cReceive_suASLOVa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_NUoqeG7Z_sendMessage);
}

void Heavy_Untitled::cReceive_f4Ubmbga_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_w2vgR8Wn, m);
}

void Heavy_Untitled::cReceive_dRRJfJcq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_DpxgDyJ4_sendMessage);
}

void Heavy_Untitled::cReceive_H6ad9qAK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_DV2xszB4_sendMessage);
}

void Heavy_Untitled::cReceive_F3Wv7Jal_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_7lENrC7D_sendMessage);
}

void Heavy_Untitled::cReceive_0I5WdysI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BfyvIePU_sendMessage);
}

void Heavy_Untitled::cReceive_SGFuwjPo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_twB05mzi, m);
}

void Heavy_Untitled::cReceive_VKfz8Njt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ilBzFehZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_1zMuBmuS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_84AJreI9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_1EzvYyDI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ilBzFehZ_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_84AJreI9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_l74ny3jc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_4eihOHoL_sendMessage);
}

void Heavy_Untitled::cReceive_2Z1iGdWi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_naBuOW8G, 0, m, &cIf_naBuOW8G_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_BqIEt6aU, HV_BINOP_ADD, 0, m, &cBinop_BqIEt6aU_sendMessage);
}

void Heavy_Untitled::cReceive_ujiIC2J7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qEJ1hXqd, 0, m, &cVar_qEJ1hXqd_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_0AgJ0zgQ_sendMessage);
}

void Heavy_Untitled::cReceive_srw9wTOZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NNZ9ArtD, 0, m, &cVar_NNZ9ArtD_sendMessage);
}

void Heavy_Untitled::cReceive_7JKF3pJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_T6OeDnJh_sendMessage);
}

void Heavy_Untitled::cReceive_9GP7OyhF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_INJmOl8q, m);
}

void Heavy_Untitled::cReceive_OByuP7Eo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_mIxJr6DJ_sendMessage);
}

void Heavy_Untitled::cReceive_1NHArLCk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_wgJAkrRi_sendMessage);
}

void Heavy_Untitled::cReceive_3NYw92uR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_T6rUg4Ra_sendMessage);
}

void Heavy_Untitled::cReceive_fThrOeAa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rCi4iPAC_sendMessage);
}

void Heavy_Untitled::cReceive_yQMaiAD8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SrocAAvI, m);
}

void Heavy_Untitled::cReceive_Hq3quGwK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_jmXHMlHv_sendMessage);
}

void Heavy_Untitled::cReceive_3qkhwjYg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_yztp4TEq, 0, m, &cIf_yztp4TEq_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_twAWR3WU, HV_BINOP_ADD, 0, m, &cBinop_twAWR3WU_sendMessage);
}

void Heavy_Untitled::cReceive_JkycOjKC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FC3CUnf5, 0, m, &cVar_FC3CUnf5_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_cEtP2zot_sendMessage);
}

void Heavy_Untitled::cReceive_C0kVY3hi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_e2sB8L0i, 0, m, &cVar_e2sB8L0i_sendMessage);
}

void Heavy_Untitled::cReceive_QhXexdrq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_NdHMIu2z_sendMessage);
}

void Heavy_Untitled::cReceive_ru5HoshC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kMgiwvct, m);
}

void Heavy_Untitled::cReceive_9ZZwCy5t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_eJXAs4dc_sendMessage);
}

void Heavy_Untitled::cReceive_h0zyme5Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_M3mK3p0T_sendMessage);
}

void Heavy_Untitled::cReceive_AugloDxk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_iLstP0Dw_sendMessage);
}

void Heavy_Untitled::cReceive_JBIN0Nea_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vlaaMI6Q_sendMessage);
}

void Heavy_Untitled::cReceive_2X930Jt3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZN0mDRGw, m);
}

void Heavy_Untitled::cReceive_ldsNFcNC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_NP96Wkxs_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_U8Lar2r6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_9JSlXT2L_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_p1yi4RWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_NP96Wkxs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_9JSlXT2L_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_SxcDGTov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_kgMTxn2F_sendMessage);
}

void Heavy_Untitled::cReceive_pTPleUgG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_QBNXtwke, 0, m, &cIf_QBNXtwke_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_5uuKPZOy, HV_BINOP_ADD, 0, m, &cBinop_5uuKPZOy_sendMessage);
}

void Heavy_Untitled::cReceive_ma7O8xMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0qxAMtoI, 0, m, &cVar_0qxAMtoI_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_NiNc1zm8_sendMessage);
}

void Heavy_Untitled::cReceive_V2N2xsPS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_05hMRZ7I, 0, m, &cVar_05hMRZ7I_sendMessage);
}

void Heavy_Untitled::cReceive_kjtoRtcL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_gufs4yj1_sendMessage);
}

void Heavy_Untitled::cReceive_OaDdFmfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_grbKgKrQ, m);
}

void Heavy_Untitled::cReceive_wfRDQd1P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_Qrlx7RTE_sendMessage);
}

void Heavy_Untitled::cReceive_PFlN9q31_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_DyZuqiXv_sendMessage);
}

void Heavy_Untitled::cReceive_0UHLmAMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_Ob0B5VQx_sendMessage);
}

void Heavy_Untitled::cReceive_rQKlmpCi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QajeXx5T_sendMessage);
}

void Heavy_Untitled::cReceive_J9vo5L9F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_aroe2NJf, m);
}

void Heavy_Untitled::cReceive_g9w4zcLU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_4XLGY8HK_sendMessage);
}

void Heavy_Untitled::cReceive_mRlqCrMk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_knKe3Lfj, 0, m, &cIf_knKe3Lfj_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Cv1dDpV4, HV_BINOP_ADD, 0, m, &cBinop_Cv1dDpV4_sendMessage);
}

void Heavy_Untitled::cReceive_ngqET1tY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6cgUlokf, 0, m, &cVar_6cgUlokf_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_NSzsq6Sa_sendMessage);
}

void Heavy_Untitled::cReceive_Gj5OR2ib_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5Ha2vFNy, 0, m, &cVar_5Ha2vFNy_sendMessage);
}

void Heavy_Untitled::cReceive_doxgUVfT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 24.0f, 0, m, &cBinop_OXUN4FCV_sendMessage);
}

void Heavy_Untitled::cReceive_yzh3VN89_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iAjC31u8, m);
}

void Heavy_Untitled::cReceive_vQ4b0nZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5000.0f, 0, m, &cBinop_fYsnqtqI_sendMessage);
}

void Heavy_Untitled::cReceive_smLu2wiE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_ytl4nMmd_sendMessage);
}

void Heavy_Untitled::cReceive_AF2ALf1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 15000.0f, 0, m, &cBinop_SFY6dtXh_sendMessage);
}

void Heavy_Untitled::cReceive_h9MSdh2z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B9JSW7Nr_sendMessage);
}

void Heavy_Untitled::cReceive_lDOGSK0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jE36np7U, m);
}

void Heavy_Untitled::cReceive_9hlyOgXG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_w7u5Ja5C_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_Tid3Fdtz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qHmZAqHv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_PFJrkzwr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_w7u5Ja5C_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_qHmZAqHv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Untitled::cReceive_egIclm4Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSlice_onMessage(_c, &Context(_c)->cSlice_hHhZ2LVk, 0, m, &cSlice_hHhZ2LVk_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_97oCxuhE, 0, m, &cSlice_97oCxuhE_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_1dDWIbUh, 0, m, &cSlice_1dDWIbUh_sendMessage);
}

void Heavy_Untitled::cReceive_IzovBtTm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_QUT4EKz3_onMessage(_c, NULL, 0, m, NULL);
  cSend_KGD4lQg1_sendMessage(_c, 0, m);
}



/*
 * Code for expr~ implementation
 * Write out the generic implementation code
 */

 // per class code

 // per object code


/*
 * Context Process Implementation
 */

int Heavy_Untitled::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9, Bf10, Bf11, Bf12, Bf13, Bf14, Bf15;

  // input and output vars
  hv_bufferf_t O0, O1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_varread_f(&sVarf_U2baHhbY, VOf(Bf0));
    __hv_varread_f(&sVarf_RBLHUtht, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_XfanOuS8, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_rLYxPhwj, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_HioGV8zn, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_oIgqQSB1, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_IRTytDTK, VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_VzrPYTPy, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_SVRaYmMd, VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_0n9KqC3D, VOf(Bf3));
    __hv_line_f(&sLine_PmsMC0KJ, VOf(Bf4));
    __hv_varread_f(&sVarf_zJcyMWIN, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_H3xH3lpg, VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_IhKsix6N, VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_exp_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_phasor_f(&sPhasor_hy8E3JB4, VIf(Bf5), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf3), VOf(Bf2));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_oP6nUbVn, VOf(Bf2));
    __hv_mul_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf2), VOf(Bf7));
    __hv_mul_f(VIf(Bf3), VIf(Bf7), VOf(Bf8));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf3), VIf(Bf2), VOf(Bf10));
    __hv_and_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf7), VIf(Bf6), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_gte_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_TIGnm9Jp, VOf(Bf4));
    __hv_phasor_f(&sPhasor_Ns4HBRu1, VIf(Bf5), VOf(Bf10));
    __hv_var_k_f(VOf(Bf7), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_abs_f(VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf10), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf7), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf7), VOf(Bf10));
    __hv_mul_f(VIf(Bf7), VIf(Bf10), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf6), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf8), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf3), VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf10), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_Bk5IbEvT, VOf(Bf6));
    __hv_phasor_f(&sPhasor_S0At7UpW, VIf(Bf5), VOf(Bf10));
    __hv_add_f(VIf(Bf10), VIf(Bf10), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_7XU05AA1, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf8), VOf(Bf9));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf5), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf12), VOf(Bf12));
    __hv_lte_f(VIf(Bf10), VIf(Bf8), VOf(Bf13));
    __hv_and_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf9), VIf(Bf5), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf5));
    __hv_gte_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_E32FodEy, VIf(Bf10), VOf(Bf13));
    __hv_lt_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_samphold_f(&sSamphold_d9eODZTG, VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf10), VIf(Bf13), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf3));
    __hv_sub_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf3), VOf(Bf10));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf10), VIf(Bf8), VOf(Bf11));
    __hv_mul_f(VIf(Bf3), VIf(Bf11), VOf(Bf12));
    __hv_sub_f(VIf(Bf12), VIf(Bf10), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf14), VOf(Bf14));
    __hv_lte_f(VIf(Bf3), VIf(Bf8), VOf(Bf15));
    __hv_and_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf11));
    __hv_sub_f(VIf(Bf12), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_gte_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf15), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf13), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_HYGqqZ7z, VOf(Bf13));
    __hv_mul_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf7), VIf(Bf6), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf2), VIf(Bf4), VIf(Bf13), VOf(Bf13));
    __hv_line_f(&sLine_zMfDgr78, VOf(Bf4));
    __hv_mul_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_QdMKHzBZ, VOf(Bf13));
    __hv_mul_f(VIf(Bf4), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf4), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_3yVxl9Ys, VOf(Bf0));
    __hv_line_f(&sLine_CQHcKh0V, VOf(Bf2));
    __hv_varread_f(&sVarf_8xgRoS7N, VOf(Bf6));
    __hv_add_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_F32B556E, VOf(Bf2));
    __hv_add_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_KDdJwPvd, VOf(Bf6));
    __hv_add_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf4), VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf0), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_exp_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_phasor_f(&sPhasor_vl7MxQdN, VIf(Bf6), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(Bf0), VOf(Bf4));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_046xjfal, VOf(Bf4));
    __hv_mul_f(VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf7), VIf(Bf4), VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf5));
    __hv_sub_f(VIf(Bf5), VIf(Bf7), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf0), VIf(Bf4), VOf(Bf15));
    __hv_and_f(VIf(Bf9), VIf(Bf15), VOf(Bf15));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf8));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_gte_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf15), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_yXfqWA6Y, VOf(Bf2));
    __hv_phasor_f(&sPhasor_4PniFbu5, VIf(Bf6), VOf(Bf15));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf15), VIf(Bf8), VOf(Bf8));
    __hv_abs_f(VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf15), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf8), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf15), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf15));
    __hv_mul_f(VIf(Bf8), VIf(Bf15), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf7), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf5), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf0), VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf15), VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_3SJhthoj, VOf(Bf7));
    __hv_phasor_f(&sPhasor_mqJywyjX, VIf(Bf6), VOf(Bf15));
    __hv_add_f(VIf(Bf15), VIf(Bf15), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_MoEy4uIf, VOf(Bf5));
    __hv_mul_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf5), VOf(Bf9));
    __hv_mul_f(VIf(Bf15), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf6), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf3));
    __hv_lte_f(VIf(Bf15), VIf(Bf5), VOf(Bf10));
    __hv_and_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf9), VIf(Bf6), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf6));
    __hv_gte_f(VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_o6IR07hH, VIf(Bf15), VOf(Bf10));
    __hv_lt_f(VIf(Bf15), VIf(Bf10), VOf(Bf10));
    __hv_samphold_f(&sSamphold_VpuAT0W8, VIf(Bf0), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf15), VIf(Bf10), VOf(Bf15));
    __hv_floor_f(VIf(Bf15), VOf(Bf0));
    __hv_sub_f(VIf(Bf15), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(Bf0), VOf(Bf15));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf15), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf15), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf15), VIf(Bf5), VOf(Bf11));
    __hv_mul_f(VIf(Bf0), VIf(Bf11), VOf(Bf3));
    __hv_sub_f(VIf(Bf3), VIf(Bf15), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf12), VOf(Bf12));
    __hv_lte_f(VIf(Bf0), VIf(Bf5), VOf(Bf14));
    __hv_and_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf11), VIf(Bf15), VOf(Bf11));
    __hv_sub_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf15), VIf(Bf5), VOf(Bf5));
    __hv_gte_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf10), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_PjsLP8fz, VOf(Bf10));
    __hv_mul_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf8), VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf4), VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_line_f(&sLine_0dMvHCx0, VOf(Bf2));
    __hv_mul_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_mNTa5oYO, VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf13), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf13), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_varwrite_f(&sVarf_U2baHhbY, VIf(Bf13));
    __hv_phasor_k_f(&sPhasor_FQXSm0Or, VOf(Bf13));
    __hv_var_k_f(VOf(Bf10), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf13), VIf(Bf10), VOf(Bf10));
    __hv_abs_f(VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf13), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf10), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf13), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf10), VOf(Bf13));
    __hv_mul_f(VIf(Bf10), VIf(Bf13), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf4), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf7), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf2), VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf13), VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf10), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_mul_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_varwrite_f(&sVarf_SVRaYmMd, VIf(Bf10));
    __hv_varread_f(&sVarf_SVRaYmMd, VOf(Bf10));
    __hv_var_k_f(VOf(Bf4), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_HJTdzBRI, VOf(Bf13));
    __hv_line_f(&sLine_iuhJ2gXy, VOf(Bf7));
    __hv_varread_f(&sVarf_OrgYdfCK, VOf(Bf2));
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_8NSkn7Ns, VOf(Bf7));
    __hv_add_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_jIumIt7I, VOf(Bf2));
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf4), VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf13), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_exp_f(VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf2), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_phasor_f(&sPhasor_a3g9vIDa, VIf(Bf2), VOf(Bf13));
    __hv_add_f(VIf(Bf13), VIf(Bf13), VOf(Bf4));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_dZ0w2RFw, VOf(Bf4));
    __hv_mul_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf6));
    __hv_sub_f(VIf(Bf6), VIf(Bf8), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf13), VIf(Bf4), VOf(Bf14));
    __hv_and_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf5));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_gte_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf14), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_UPTqzg7l, VOf(Bf7));
    __hv_phasor_f(&sPhasor_SO6OjBwZ, VIf(Bf2), VOf(Bf14));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf14), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf5), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf14));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf8), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf6), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf13), VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf14), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_hCgaW25B, VOf(Bf8));
    __hv_phasor_f(&sPhasor_n4vLqwWZ, VIf(Bf2), VOf(Bf14));
    __hv_add_f(VIf(Bf14), VIf(Bf14), VOf(Bf6));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_ZqXFS7tC, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf14), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_lte_f(VIf(Bf14), VIf(Bf6), VOf(Bf15));
    __hv_and_f(VIf(Bf0), VIf(Bf15), VOf(Bf15));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf2));
    __hv_gte_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf15), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf13), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_ihYHU1hi, VIf(Bf14), VOf(Bf15));
    __hv_lt_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_samphold_f(&sSamphold_7qTuRkxj, VIf(Bf13), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf14), VIf(Bf15), VOf(Bf14));
    __hv_floor_f(VIf(Bf14), VOf(Bf13));
    __hv_sub_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf13), VIf(Bf13), VOf(Bf14));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf14), VIf(Bf6), VOf(Bf11));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf0));
    __hv_sub_f(VIf(Bf0), VIf(Bf14), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf3));
    __hv_lte_f(VIf(Bf13), VIf(Bf6), VOf(Bf12));
    __hv_and_f(VIf(Bf3), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf11), VIf(Bf14), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_gte_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf15), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf6), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_3PK8ohpr, VOf(Bf15));
    __hv_mul_f(VIf(Bf6), VIf(Bf15), VOf(Bf15));
    __hv_fma_f(VIf(Bf5), VIf(Bf8), VIf(Bf15), VOf(Bf15));
    __hv_fma_f(VIf(Bf4), VIf(Bf7), VIf(Bf15), VOf(Bf15));
    __hv_line_f(&sLine_86qnBhlM, VOf(Bf7));
    __hv_mul_f(VIf(Bf15), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_iKCUmQ0k, VOf(Bf15));
    __hv_mul_f(VIf(Bf7), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf7), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_LBmqqbgM, VOf(Bf10));
    __hv_line_f(&sLine_gclSMKpV, VOf(Bf4));
    __hv_varread_f(&sVarf_zsXGmMCj, VOf(Bf8));
    __hv_add_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_KmPm73fz, VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_WRBx10c9, VOf(Bf8));
    __hv_add_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf7), VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf10), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_exp_f(VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_phasor_f(&sPhasor_znhrGTik, VIf(Bf8), VOf(Bf10));
    __hv_add_f(VIf(Bf10), VIf(Bf10), VOf(Bf7));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_DwarooOM, VOf(Bf7));
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf7), VOf(Bf6));
    __hv_mul_f(VIf(Bf10), VIf(Bf6), VOf(Bf2));
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf10), VIf(Bf7), VOf(Bf12));
    __hv_and_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf6));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_gte_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_zXEys9sF, VOf(Bf4));
    __hv_phasor_f(&sPhasor_HbJ4EF79, VIf(Bf8), VOf(Bf12));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_abs_f(VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf12), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf6), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf12));
    __hv_mul_f(VIf(Bf6), VIf(Bf12), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf5), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf2), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf10), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf12), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_sxInAC0y, VOf(Bf5));
    __hv_phasor_f(&sPhasor_zJdjbxbI, VIf(Bf8), VOf(Bf12));
    __hv_add_f(VIf(Bf12), VIf(Bf12), VOf(Bf2));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_Uvvwo6GU, VOf(Bf2));
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf12), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf8), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf13), VOf(Bf13));
    __hv_lte_f(VIf(Bf12), VIf(Bf2), VOf(Bf14));
    __hv_and_f(VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf9), VIf(Bf8), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf8));
    __hv_gte_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf14), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf10), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_GuHJfesE, VIf(Bf12), VOf(Bf14));
    __hv_lt_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_samphold_f(&sSamphold_iKjfsrQ0, VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf12), VIf(Bf14), VOf(Bf12));
    __hv_floor_f(VIf(Bf12), VOf(Bf10));
    __hv_sub_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf10), VIf(Bf10), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf12), VIf(Bf2), VOf(Bf11));
    __hv_mul_f(VIf(Bf10), VIf(Bf11), VOf(Bf13));
    __hv_sub_f(VIf(Bf13), VIf(Bf12), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_lte_f(VIf(Bf10), VIf(Bf2), VOf(Bf3));
    __hv_and_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf11), VIf(Bf12), VOf(Bf11));
    __hv_sub_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_gte_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf14), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_ZFsXQIZy, VOf(Bf14));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf6), VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf7), VIf(Bf4), VIf(Bf14), VOf(Bf14));
    __hv_line_f(&sLine_nTdq4Oq2, VOf(Bf4));
    __hv_mul_f(VIf(Bf14), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_KgBwuRTo, VOf(Bf14));
    __hv_mul_f(VIf(Bf4), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf15), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_varwrite_f(&sVarf_RBLHUtht, VIf(Bf15));
    __hv_varread_f(&sVarf_SVRaYmMd, VOf(Bf15));
    __hv_var_k_f(VOf(Bf14), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_JkJcJTgY, VOf(Bf4));
    __hv_line_f(&sLine_BBr0IaoC, VOf(Bf7));
    __hv_varread_f(&sVarf_lQTjixvu, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_KDEPBvjR, VOf(Bf7));
    __hv_add_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_JoGv6H0n, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf14), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_exp_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_phasor_f(&sPhasor_1YV42Hwe, VIf(Bf5), VOf(Bf4));
    __hv_add_f(VIf(Bf4), VIf(Bf4), VOf(Bf14));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_S6qETae3, VOf(Bf14));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf14), VOf(Bf2));
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf8));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf4), VIf(Bf14), VOf(Bf3));
    __hv_and_f(VIf(Bf9), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf2));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf6), VIf(Bf14), VOf(Bf14));
    __hv_gte_f(VIf(Bf4), VIf(Bf14), VOf(Bf14));
    __hv_and_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_WvnECfNw, VOf(Bf7));
    __hv_phasor_f(&sPhasor_NA7Z9Jwk, VIf(Bf5), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf8), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf4), VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf3), VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_NdRfeLn3, VOf(Bf6));
    __hv_phasor_f(&sPhasor_hkOm9mJF, VIf(Bf5), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf3), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_hXwmUOgE, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf8), VOf(Bf9));
    __hv_mul_f(VIf(Bf3), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf5), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf10), VOf(Bf10));
    __hv_lte_f(VIf(Bf3), VIf(Bf8), VOf(Bf12));
    __hv_and_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf9), VIf(Bf5), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf5));
    __hv_gte_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_uFUDhzis, VIf(Bf3), VOf(Bf12));
    __hv_lt_f(VIf(Bf3), VIf(Bf12), VOf(Bf12));
    __hv_samphold_f(&sSamphold_NXR2hJLC, VIf(Bf4), VIf(Bf12), VOf(Bf12));
    __hv_add_f(VIf(Bf3), VIf(Bf12), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf4), VIf(Bf4), VOf(Bf3));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf3), VIf(Bf8), VOf(Bf11));
    __hv_mul_f(VIf(Bf4), VIf(Bf11), VOf(Bf10));
    __hv_sub_f(VIf(Bf10), VIf(Bf3), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf13), VOf(Bf13));
    __hv_lte_f(VIf(Bf4), VIf(Bf8), VOf(Bf0));
    __hv_and_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf11), VIf(Bf3), VOf(Bf11));
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_gte_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf12), VIf(Bf12), VOf(Bf12));
    __hv_add_f(VIf(Bf8), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_NtLDlFwQ, VOf(Bf12));
    __hv_mul_f(VIf(Bf8), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf2), VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf14), VIf(Bf7), VIf(Bf12), VOf(Bf12));
    __hv_line_f(&sLine_M6Ok85Bb, VOf(Bf7));
    __hv_mul_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_epHzvFVv, VOf(Bf12));
    __hv_mul_f(VIf(Bf7), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf7), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf15), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_G6Qw1z3k, VOf(Bf15));
    __hv_line_f(&sLine_NkRCyxr6, VOf(Bf14));
    __hv_varread_f(&sVarf_YhNAf26i, VOf(Bf6));
    __hv_add_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_qcTGpxXc, VOf(Bf14));
    __hv_add_f(VIf(Bf6), VIf(Bf14), VOf(Bf14));
    __hv_line_f(&sLine_5KTMThrA, VOf(Bf6));
    __hv_add_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf7), VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf15), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf6), VIf(Bf15), VOf(Bf15));
    __hv_exp_f(VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf6), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_phasor_f(&sPhasor_LJLFI9kX, VIf(Bf6), VOf(Bf15));
    __hv_add_f(VIf(Bf15), VIf(Bf15), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_zm9iVCVJ, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf7), VOf(Bf8));
    __hv_mul_f(VIf(Bf15), VIf(Bf8), VOf(Bf5));
    __hv_sub_f(VIf(Bf5), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf15), VIf(Bf7), VOf(Bf0));
    __hv_and_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf8));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_gte_f(VIf(Bf15), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_75p50Ovd, VOf(Bf14));
    __hv_phasor_f(&sPhasor_kxw2XcbU, VIf(Bf6), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_abs_f(VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf0));
    __hv_mul_f(VIf(Bf8), VIf(Bf0), VOf(Bf15));
    __hv_mul_f(VIf(Bf15), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf5), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf15), VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf0), VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_bGqkhqET, VOf(Bf2));
    __hv_phasor_f(&sPhasor_dCOPJAmP, VIf(Bf6), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(Bf0), VOf(Bf5));
    __hv_var_k_f(VOf(Bf15), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf5), VIf(Bf15), VOf(Bf15));
    __hv_varread_f(&sVarf_PVK129YD, VOf(Bf5));
    __hv_mul_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf5), VOf(Bf9));
    __hv_mul_f(VIf(Bf0), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf6), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf4));
    __hv_lte_f(VIf(Bf0), VIf(Bf5), VOf(Bf3));
    __hv_and_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf9), VIf(Bf6), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf6));
    __hv_gte_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf15), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_ysw0z0db, VIf(Bf0), VOf(Bf3));
    __hv_lt_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_samphold_f(&sSamphold_hvFHaMS5, VIf(Bf15), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf0), VIf(Bf3), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf15));
    __hv_sub_f(VIf(Bf0), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf15), VIf(Bf15), VOf(Bf0));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf0), VIf(Bf5), VOf(Bf11));
    __hv_mul_f(VIf(Bf15), VIf(Bf11), VOf(Bf4));
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf10), VOf(Bf10));
    __hv_lte_f(VIf(Bf15), VIf(Bf5), VOf(Bf13));
    __hv_and_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf11), VIf(Bf0), VOf(Bf11));
    __hv_sub_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_gte_f(VIf(Bf15), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_1v6udkQo, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf8), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_fHuNcuMm, VOf(Bf14));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_Wm1wq5c1, VOf(Bf3));
    __hv_mul_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf12), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf12), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf3), VIf(Bf12), VOf(Bf12));
    __hv_varwrite_f(&sVarf_XfanOuS8, VIf(Bf12));
    __hv_varread_f(&sVarf_SVRaYmMd, VOf(Bf12));
    __hv_var_k_f(VOf(Bf3), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf12), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_F6H9JpCa, VOf(Bf14));
    __hv_line_f(&sLine_bA4KDyH0, VOf(Bf7));
    __hv_varread_f(&sVarf_ur4vfbIM, VOf(Bf2));
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_6HjJAOft, VOf(Bf7));
    __hv_add_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_ciQ8Ruek, VOf(Bf2));
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf3), VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf14), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_exp_f(VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf2), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_phasor_f(&sPhasor_JOhz74dL, VIf(Bf2), VOf(Bf14));
    __hv_add_f(VIf(Bf14), VIf(Bf14), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_1AjNWAgV, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf14), VIf(Bf5), VOf(Bf6));
    __hv_sub_f(VIf(Bf6), VIf(Bf8), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf14), VIf(Bf3), VOf(Bf13));
    __hv_and_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf5));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_gte_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf13), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_unvIab3l, VOf(Bf7));
    __hv_phasor_f(&sPhasor_kcflisLZ, VIf(Bf2), VOf(Bf13));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf13), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf5), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf13));
    __hv_mul_f(VIf(Bf5), VIf(Bf13), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf8), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf6), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf14), VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf13), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_ABi4QhT4, VOf(Bf8));
    __hv_phasor_f(&sPhasor_1g4837Gq, VIf(Bf2), VOf(Bf13));
    __hv_add_f(VIf(Bf13), VIf(Bf13), VOf(Bf6));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_W4zxyIcy, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf2), VOf(Bf15));
    __hv_mul_f(VIf(Bf15), VIf(Bf15), VOf(Bf15));
    __hv_lte_f(VIf(Bf13), VIf(Bf6), VOf(Bf0));
    __hv_and_f(VIf(Bf15), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf2));
    __hv_gte_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_AtR4pFpm, VIf(Bf13), VOf(Bf0));
    __hv_lt_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_samphold_f(&sSamphold_kBW54JS3, VIf(Bf14), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf13), VIf(Bf0), VOf(Bf13));
    __hv_floor_f(VIf(Bf13), VOf(Bf14));
    __hv_sub_f(VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf14), VIf(Bf14), VOf(Bf13));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf13), VIf(Bf6), VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf15));
    __hv_sub_f(VIf(Bf15), VIf(Bf13), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf4));
    __hv_lte_f(VIf(Bf14), VIf(Bf6), VOf(Bf10));
    __hv_and_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf13), VOf(Bf11));
    __hv_sub_f(VIf(Bf15), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_gte_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_1yjXCpCJ, VOf(Bf0));
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf5), VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf3), VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_ePKyky3u, VOf(Bf7));
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_PQChtMgV, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_paNU3VfV, VOf(Bf12));
    __hv_line_f(&sLine_PiXOJm8p, VOf(Bf3));
    __hv_varread_f(&sVarf_cXhSZULd, VOf(Bf8));
    __hv_add_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_V91XEMIz, VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_oNNXdS7Z, VOf(Bf8));
    __hv_add_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf7), VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf12), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf8), VIf(Bf12), VOf(Bf12));
    __hv_exp_f(VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf8), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_phasor_f(&sPhasor_YGfGc66r, VIf(Bf8), VOf(Bf12));
    __hv_add_f(VIf(Bf12), VIf(Bf12), VOf(Bf7));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_jFm5catj, VOf(Bf7));
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf7), VOf(Bf6));
    __hv_mul_f(VIf(Bf12), VIf(Bf6), VOf(Bf2));
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf12), VIf(Bf7), VOf(Bf10));
    __hv_and_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf6));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_gte_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_LoItmH1V, VOf(Bf3));
    __hv_phasor_f(&sPhasor_JHeWlFl8, VIf(Bf8), VOf(Bf10));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_abs_f(VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf10), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf6), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf10));
    __hv_mul_f(VIf(Bf6), VIf(Bf10), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf2), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf12), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf10), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_2u3sTigZ, VOf(Bf5));
    __hv_phasor_f(&sPhasor_RZTyeUdl, VIf(Bf8), VOf(Bf10));
    __hv_add_f(VIf(Bf10), VIf(Bf10), VOf(Bf2));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_fh9tKgau, VOf(Bf2));
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf8), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf14), VOf(Bf14));
    __hv_lte_f(VIf(Bf10), VIf(Bf2), VOf(Bf13));
    __hv_and_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf9), VIf(Bf8), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf8));
    __hv_gte_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf12), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_W2fl11pO, VIf(Bf10), VOf(Bf13));
    __hv_lt_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_samphold_f(&sSamphold_d9LdyR6A, VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf10), VIf(Bf13), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf12));
    __hv_sub_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_add_f(VIf(Bf12), VIf(Bf12), VOf(Bf10));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf10), VIf(Bf2), VOf(Bf11));
    __hv_mul_f(VIf(Bf12), VIf(Bf11), VOf(Bf14));
    __hv_sub_f(VIf(Bf14), VIf(Bf10), VOf(Bf15));
    __hv_mul_f(VIf(Bf15), VIf(Bf15), VOf(Bf15));
    __hv_lte_f(VIf(Bf12), VIf(Bf2), VOf(Bf4));
    __hv_and_f(VIf(Bf15), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf11));
    __hv_sub_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_gte_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf13), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_LPq9nC6e, VOf(Bf13));
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf6), VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_line_f(&sLine_8qsnd4FU, VOf(Bf3));
    __hv_mul_f(VIf(Bf13), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_yMAE3s9Z, VOf(Bf13));
    __hv_mul_f(VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf0), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_varwrite_f(&sVarf_rLYxPhwj, VIf(Bf0));
    __hv_varread_f(&sVarf_SVRaYmMd, VOf(Bf0));
    __hv_var_k_f(VOf(Bf13), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_6Z1aW35e, VOf(Bf3));
    __hv_line_f(&sLine_7BccC2Vo, VOf(Bf7));
    __hv_varread_f(&sVarf_08pU2lv2, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_lAJTqkZW, VOf(Bf7));
    __hv_add_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_k8GDXGsb, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf13), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_exp_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_phasor_f(&sPhasor_k12gqiF3, VIf(Bf5), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf3), VOf(Bf13));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf13), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_iDEcza7Z, VOf(Bf13));
    __hv_mul_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf13), VOf(Bf2));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf8));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf3), VIf(Bf13), VOf(Bf4));
    __hv_and_f(VIf(Bf9), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf2));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf6), VIf(Bf13), VOf(Bf13));
    __hv_gte_f(VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_and_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf4), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf7), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_6ddiEHh4, VOf(Bf7));
    __hv_phasor_f(&sPhasor_SfTGvu53, VIf(Bf5), VOf(Bf4));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf2), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf4));
    __hv_mul_f(VIf(Bf2), VIf(Bf4), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf6), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf8), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf3), VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf4), VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_tzCnj0IM, VOf(Bf6));
    __hv_phasor_f(&sPhasor_nGEcvVyT, VIf(Bf5), VOf(Bf4));
    __hv_add_f(VIf(Bf4), VIf(Bf4), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_jpFaYw3l, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf8), VOf(Bf9));
    __hv_mul_f(VIf(Bf4), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf5), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf12), VOf(Bf12));
    __hv_lte_f(VIf(Bf4), VIf(Bf8), VOf(Bf10));
    __hv_and_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf9), VIf(Bf5), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf5));
    __hv_gte_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_GQ50w2y7, VIf(Bf4), VOf(Bf10));
    __hv_lt_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_samphold_f(&sSamphold_nQkBzu6i, VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf4), VIf(Bf10), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf3));
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf3), VOf(Bf4));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf4), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf4), VIf(Bf8), VOf(Bf11));
    __hv_mul_f(VIf(Bf3), VIf(Bf11), VOf(Bf12));
    __hv_sub_f(VIf(Bf12), VIf(Bf4), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf14), VOf(Bf14));
    __hv_lte_f(VIf(Bf3), VIf(Bf8), VOf(Bf15));
    __hv_and_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_sub_f(VIf(Bf11), VIf(Bf4), VOf(Bf11));
    __hv_sub_f(VIf(Bf12), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_gte_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf15), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf10), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_uvmOGlWp, VOf(Bf10));
    __hv_mul_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf2), VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf13), VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_line_f(&sLine_SqW1jNmV, VOf(Bf7));
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_xoHTgvCF, VOf(Bf10));
    __hv_mul_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf7), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_rDsXkGqI, VOf(Bf0));
    __hv_line_f(&sLine_PHX6rp4L, VOf(Bf13));
    __hv_varread_f(&sVarf_zSuec1u8, VOf(Bf6));
    __hv_add_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_paNbZdPb, VOf(Bf13));
    __hv_add_f(VIf(Bf6), VIf(Bf13), VOf(Bf13));
    __hv_line_f(&sLine_5fm4ekRq, VOf(Bf6));
    __hv_add_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf7), VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf0), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_exp_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_phasor_f(&sPhasor_eEEctYGx, VIf(Bf6), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(Bf0), VOf(Bf7));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf7), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_WvsXoMEW, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf7), VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf5));
    __hv_sub_f(VIf(Bf5), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf0), VIf(Bf7), VOf(Bf15));
    __hv_and_f(VIf(Bf9), VIf(Bf15), VOf(Bf15));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf8));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_gte_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf15), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf13), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_TdWWjeUj, VOf(Bf13));
    __hv_phasor_f(&sPhasor_0ax0X5RY, VIf(Bf6), VOf(Bf15));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf15), VIf(Bf8), VOf(Bf8));
    __hv_abs_f(VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf15), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf8), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf15), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf15));
    __hv_mul_f(VIf(Bf8), VIf(Bf15), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf2), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf5), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf0), VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf15), VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_UjApd58n, VOf(Bf2));
    __hv_phasor_f(&sPhasor_EBD8dmnD, VIf(Bf6), VOf(Bf15));
    __hv_add_f(VIf(Bf15), VIf(Bf15), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_vqRPKfJY, VOf(Bf5));
    __hv_mul_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf5), VOf(Bf9));
    __hv_mul_f(VIf(Bf15), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf6), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf3));
    __hv_lte_f(VIf(Bf15), VIf(Bf5), VOf(Bf4));
    __hv_and_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf9), VIf(Bf6), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf6));
    __hv_gte_f(VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_PrcKckkt, VIf(Bf15), VOf(Bf4));
    __hv_lt_f(VIf(Bf15), VIf(Bf4), VOf(Bf4));
    __hv_samphold_f(&sSamphold_I32rm6Wk, VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf15), VIf(Bf4), VOf(Bf15));
    __hv_floor_f(VIf(Bf15), VOf(Bf0));
    __hv_sub_f(VIf(Bf15), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(Bf0), VOf(Bf15));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf15), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf15), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf15), VIf(Bf5), VOf(Bf11));
    __hv_mul_f(VIf(Bf0), VIf(Bf11), VOf(Bf3));
    __hv_sub_f(VIf(Bf3), VIf(Bf15), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf12), VOf(Bf12));
    __hv_lte_f(VIf(Bf0), VIf(Bf5), VOf(Bf14));
    __hv_and_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf11), VIf(Bf15), VOf(Bf11));
    __hv_sub_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf15), VIf(Bf5), VOf(Bf5));
    __hv_gte_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_nlTDH2a4, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf8), VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf7), VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_RoBMwHPq, VOf(Bf13));
    __hv_mul_f(VIf(Bf4), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_KLd23hfC, VOf(Bf4));
    __hv_mul_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf10), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_varwrite_f(&sVarf_HioGV8zn, VIf(Bf10));
    __hv_varread_f(&sVarf_SVRaYmMd, VOf(Bf10));
    __hv_var_k_f(VOf(Bf4), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_UU9jSQT1, VOf(Bf13));
    __hv_line_f(&sLine_vWPP8Yev, VOf(Bf7));
    __hv_varread_f(&sVarf_7fw6jKmB, VOf(Bf2));
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_8rSpnYK9, VOf(Bf7));
    __hv_add_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_2IGqJSE7, VOf(Bf2));
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf4), VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf13), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_exp_f(VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf2), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_phasor_f(&sPhasor_uZjgvMAl, VIf(Bf2), VOf(Bf13));
    __hv_add_f(VIf(Bf13), VIf(Bf13), VOf(Bf4));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_LIsai2m0, VOf(Bf4));
    __hv_mul_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf6));
    __hv_sub_f(VIf(Bf6), VIf(Bf8), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf13), VIf(Bf4), VOf(Bf14));
    __hv_and_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf5));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_gte_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf14), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_2kg7Mb5t, VOf(Bf7));
    __hv_phasor_f(&sPhasor_cuI97pZh, VIf(Bf2), VOf(Bf14));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf14), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf5), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf14), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf14));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf8), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf6), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf13), VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf14), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_QaWNg4dk, VOf(Bf8));
    __hv_phasor_f(&sPhasor_AgQiE6IX, VIf(Bf2), VOf(Bf14));
    __hv_add_f(VIf(Bf14), VIf(Bf14), VOf(Bf6));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_CaYVHYNo, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf14), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_lte_f(VIf(Bf14), VIf(Bf6), VOf(Bf15));
    __hv_and_f(VIf(Bf0), VIf(Bf15), VOf(Bf15));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf2));
    __hv_gte_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf15), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf13), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_xDADu3PU, VIf(Bf14), VOf(Bf15));
    __hv_lt_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_samphold_f(&sSamphold_Fd55JPXn, VIf(Bf13), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf14), VIf(Bf15), VOf(Bf14));
    __hv_floor_f(VIf(Bf14), VOf(Bf13));
    __hv_sub_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf13), VIf(Bf13), VOf(Bf14));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf14), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf14), VIf(Bf6), VOf(Bf11));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf0));
    __hv_sub_f(VIf(Bf0), VIf(Bf14), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf3));
    __hv_lte_f(VIf(Bf13), VIf(Bf6), VOf(Bf12));
    __hv_and_f(VIf(Bf3), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf11), VIf(Bf14), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_gte_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf15), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf6), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_mVlzXWrG, VOf(Bf15));
    __hv_mul_f(VIf(Bf6), VIf(Bf15), VOf(Bf15));
    __hv_fma_f(VIf(Bf5), VIf(Bf8), VIf(Bf15), VOf(Bf15));
    __hv_fma_f(VIf(Bf4), VIf(Bf7), VIf(Bf15), VOf(Bf15));
    __hv_line_f(&sLine_6nmAdPaQ, VOf(Bf7));
    __hv_mul_f(VIf(Bf15), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_0Agf9l8P, VOf(Bf15));
    __hv_mul_f(VIf(Bf7), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf7), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_w2vgR8Wn, VOf(Bf10));
    __hv_line_f(&sLine_XPhxDAET, VOf(Bf4));
    __hv_varread_f(&sVarf_MvJ3Cq9E, VOf(Bf8));
    __hv_add_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_0uPLnlQ8, VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_rLjFIdMF, VOf(Bf8));
    __hv_add_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf7), VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf10), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_exp_f(VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_phasor_f(&sPhasor_2SOBhUd2, VIf(Bf8), VOf(Bf10));
    __hv_add_f(VIf(Bf10), VIf(Bf10), VOf(Bf7));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_W81XXPCw, VOf(Bf7));
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf7), VOf(Bf6));
    __hv_mul_f(VIf(Bf10), VIf(Bf6), VOf(Bf2));
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf10), VIf(Bf7), VOf(Bf12));
    __hv_and_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf6));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_gte_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_P6Gq71ID, VOf(Bf4));
    __hv_phasor_f(&sPhasor_TCW74vzr, VIf(Bf8), VOf(Bf12));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_abs_f(VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf12), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf6), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf12));
    __hv_mul_f(VIf(Bf6), VIf(Bf12), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf5), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf2), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf10), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf12), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_9dVZiC85, VOf(Bf5));
    __hv_phasor_f(&sPhasor_nEs43q1m, VIf(Bf8), VOf(Bf12));
    __hv_add_f(VIf(Bf12), VIf(Bf12), VOf(Bf2));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_ELsNqxIo, VOf(Bf2));
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf12), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf8), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf13), VOf(Bf13));
    __hv_lte_f(VIf(Bf12), VIf(Bf2), VOf(Bf14));
    __hv_and_f(VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf9), VIf(Bf8), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf8));
    __hv_gte_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf14), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf10), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_vX6UqIyp, VIf(Bf12), VOf(Bf14));
    __hv_lt_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_samphold_f(&sSamphold_sHtu9ojK, VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf12), VIf(Bf14), VOf(Bf12));
    __hv_floor_f(VIf(Bf12), VOf(Bf10));
    __hv_sub_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf10), VIf(Bf10), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf12), VIf(Bf2), VOf(Bf11));
    __hv_mul_f(VIf(Bf10), VIf(Bf11), VOf(Bf13));
    __hv_sub_f(VIf(Bf13), VIf(Bf12), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_lte_f(VIf(Bf10), VIf(Bf2), VOf(Bf3));
    __hv_and_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf11), VIf(Bf12), VOf(Bf11));
    __hv_sub_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_gte_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf14), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_cov8rsmQ, VOf(Bf14));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf6), VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_fma_f(VIf(Bf7), VIf(Bf4), VIf(Bf14), VOf(Bf14));
    __hv_line_f(&sLine_4xHmH7xn, VOf(Bf4));
    __hv_mul_f(VIf(Bf14), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_twB05mzi, VOf(Bf14));
    __hv_mul_f(VIf(Bf4), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf15), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_varwrite_f(&sVarf_oIgqQSB1, VIf(Bf15));
    __hv_varread_f(&sVarf_SVRaYmMd, VOf(Bf15));
    __hv_var_k_f(VOf(Bf14), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_INJmOl8q, VOf(Bf4));
    __hv_line_f(&sLine_5miPnQAo, VOf(Bf7));
    __hv_varread_f(&sVarf_olkPUiJW, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_b3mRdrJ9, VOf(Bf7));
    __hv_add_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_6FSUDIKj, VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf14), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_exp_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_phasor_f(&sPhasor_nj27eovR, VIf(Bf5), VOf(Bf4));
    __hv_add_f(VIf(Bf4), VIf(Bf4), VOf(Bf14));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_Ghs2jpIE, VOf(Bf14));
    __hv_mul_f(VIf(Bf5), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf14), VOf(Bf2));
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf8));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf4), VIf(Bf14), VOf(Bf3));
    __hv_and_f(VIf(Bf9), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf2));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf6), VIf(Bf14), VOf(Bf14));
    __hv_gte_f(VIf(Bf4), VIf(Bf14), VOf(Bf14));
    __hv_and_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_sub_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_cPPi2bHO, VOf(Bf7));
    __hv_phasor_f(&sPhasor_K22dRWdo, VIf(Bf5), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf8), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf4), VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf3), VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_9tLpUqLR, VOf(Bf6));
    __hv_phasor_f(&sPhasor_BjN5iQz7, VIf(Bf5), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf3), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_m4kSCGK5, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf8), VOf(Bf9));
    __hv_mul_f(VIf(Bf3), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf5), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf10), VOf(Bf10));
    __hv_lte_f(VIf(Bf3), VIf(Bf8), VOf(Bf12));
    __hv_and_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf9), VIf(Bf5), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf5));
    __hv_gte_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_0qaUYRt9, VIf(Bf3), VOf(Bf12));
    __hv_lt_f(VIf(Bf3), VIf(Bf12), VOf(Bf12));
    __hv_samphold_f(&sSamphold_87YV9kAB, VIf(Bf4), VIf(Bf12), VOf(Bf12));
    __hv_add_f(VIf(Bf3), VIf(Bf12), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf4), VIf(Bf4), VOf(Bf3));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf3), VIf(Bf8), VOf(Bf11));
    __hv_mul_f(VIf(Bf4), VIf(Bf11), VOf(Bf10));
    __hv_sub_f(VIf(Bf10), VIf(Bf3), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf13), VOf(Bf13));
    __hv_lte_f(VIf(Bf4), VIf(Bf8), VOf(Bf0));
    __hv_and_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf11), VIf(Bf3), VOf(Bf11));
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_gte_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf12), VIf(Bf12), VOf(Bf12));
    __hv_add_f(VIf(Bf8), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_wAgQ15Zu, VOf(Bf12));
    __hv_mul_f(VIf(Bf8), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf2), VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf14), VIf(Bf7), VIf(Bf12), VOf(Bf12));
    __hv_line_f(&sLine_zz0cGhMV, VOf(Bf7));
    __hv_mul_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_SrocAAvI, VOf(Bf12));
    __hv_mul_f(VIf(Bf7), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf7), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf15), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_kMgiwvct, VOf(Bf15));
    __hv_line_f(&sLine_KuZVDVhP, VOf(Bf14));
    __hv_varread_f(&sVarf_OlSj51w0, VOf(Bf6));
    __hv_add_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_tzoqWO7H, VOf(Bf14));
    __hv_add_f(VIf(Bf6), VIf(Bf14), VOf(Bf14));
    __hv_line_f(&sLine_VuVrVSNf, VOf(Bf6));
    __hv_add_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf7), VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf15), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf6), VIf(Bf15), VOf(Bf15));
    __hv_exp_f(VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf6), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_phasor_f(&sPhasor_xADsE52v, VIf(Bf6), VOf(Bf15));
    __hv_add_f(VIf(Bf15), VIf(Bf15), VOf(Bf7));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_skDEKbB7, VOf(Bf7));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf7), VOf(Bf8));
    __hv_mul_f(VIf(Bf15), VIf(Bf8), VOf(Bf5));
    __hv_sub_f(VIf(Bf5), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf15), VIf(Bf7), VOf(Bf0));
    __hv_and_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf8));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_gte_f(VIf(Bf15), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_Q6sFgKqr, VOf(Bf14));
    __hv_phasor_f(&sPhasor_1sbZ0QLE, VIf(Bf6), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_abs_f(VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf0));
    __hv_mul_f(VIf(Bf8), VIf(Bf0), VOf(Bf15));
    __hv_mul_f(VIf(Bf15), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf5), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf15), VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf0), VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_eSAHdzGy, VOf(Bf2));
    __hv_phasor_f(&sPhasor_AYVzMBCC, VIf(Bf6), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(Bf0), VOf(Bf5));
    __hv_var_k_f(VOf(Bf15), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf5), VIf(Bf15), VOf(Bf15));
    __hv_varread_f(&sVarf_JbdvNABy, VOf(Bf5));
    __hv_mul_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf5), VOf(Bf9));
    __hv_mul_f(VIf(Bf0), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf6), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf4));
    __hv_lte_f(VIf(Bf0), VIf(Bf5), VOf(Bf3));
    __hv_and_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf9), VIf(Bf6), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf6));
    __hv_gte_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf15), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_uxbs0m77, VIf(Bf0), VOf(Bf3));
    __hv_lt_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_samphold_f(&sSamphold_H1WeXFKI, VIf(Bf15), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf0), VIf(Bf3), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf15));
    __hv_sub_f(VIf(Bf0), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf15), VIf(Bf15), VOf(Bf0));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf0), VIf(Bf5), VOf(Bf11));
    __hv_mul_f(VIf(Bf15), VIf(Bf11), VOf(Bf4));
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf10), VOf(Bf10));
    __hv_lte_f(VIf(Bf15), VIf(Bf5), VOf(Bf13));
    __hv_and_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf11), VIf(Bf0), VOf(Bf11));
    __hv_sub_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_gte_f(VIf(Bf15), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_d7f71WlD, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf8), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_1nkeMPDn, VOf(Bf14));
    __hv_mul_f(VIf(Bf3), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_ZN0mDRGw, VOf(Bf3));
    __hv_mul_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf12), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf12), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf3), VIf(Bf12), VOf(Bf12));
    __hv_varwrite_f(&sVarf_IRTytDTK, VIf(Bf12));
    __hv_varread_f(&sVarf_SVRaYmMd, VOf(Bf12));
    __hv_var_k_f(VOf(Bf3), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf12), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_grbKgKrQ, VOf(Bf14));
    __hv_line_f(&sLine_arP1mCFQ, VOf(Bf7));
    __hv_varread_f(&sVarf_QIIKATsa, VOf(Bf2));
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_icuUklYR, VOf(Bf7));
    __hv_add_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_CWGk2C76, VOf(Bf2));
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf3), VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf14), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_exp_f(VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf2), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_phasor_f(&sPhasor_8urdDxEw, VIf(Bf2), VOf(Bf14));
    __hv_add_f(VIf(Bf14), VIf(Bf14), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_elgvhwVh, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf14), VIf(Bf5), VOf(Bf6));
    __hv_sub_f(VIf(Bf6), VIf(Bf8), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf14), VIf(Bf3), VOf(Bf13));
    __hv_and_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf5));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_gte_f(VIf(Bf14), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf13), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_70tHdQIF, VOf(Bf7));
    __hv_phasor_f(&sPhasor_ix4rFUXG, VIf(Bf2), VOf(Bf13));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf13), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf5), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf13));
    __hv_mul_f(VIf(Bf5), VIf(Bf13), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf8), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf6), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf14), VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf13), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_r2wpaeT5, VOf(Bf8));
    __hv_phasor_f(&sPhasor_wejTzCiJ, VIf(Bf2), VOf(Bf13));
    __hv_add_f(VIf(Bf13), VIf(Bf13), VOf(Bf6));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_fawqHQoI, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf2), VOf(Bf15));
    __hv_mul_f(VIf(Bf15), VIf(Bf15), VOf(Bf15));
    __hv_lte_f(VIf(Bf13), VIf(Bf6), VOf(Bf0));
    __hv_and_f(VIf(Bf15), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf2));
    __hv_gte_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf14), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_Mbbhl3Yh, VIf(Bf13), VOf(Bf0));
    __hv_lt_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_samphold_f(&sSamphold_cKSjwRPC, VIf(Bf14), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf13), VIf(Bf0), VOf(Bf13));
    __hv_floor_f(VIf(Bf13), VOf(Bf14));
    __hv_sub_f(VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf14), VIf(Bf14), VOf(Bf13));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf13), VIf(Bf6), VOf(Bf11));
    __hv_mul_f(VIf(Bf14), VIf(Bf11), VOf(Bf15));
    __hv_sub_f(VIf(Bf15), VIf(Bf13), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf4));
    __hv_lte_f(VIf(Bf14), VIf(Bf6), VOf(Bf10));
    __hv_and_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf13), VOf(Bf11));
    __hv_sub_f(VIf(Bf15), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_gte_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_4wkZXWdO, VOf(Bf0));
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf5), VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf3), VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_rilzf60Q, VOf(Bf7));
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_aroe2NJf, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f, 24.0f);
    __hv_mul_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_iAjC31u8, VOf(Bf12));
    __hv_line_f(&sLine_uCRGSfyr, VOf(Bf3));
    __hv_varread_f(&sVarf_9fmY7yR6, VOf(Bf8));
    __hv_add_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_yGsr6RLI, VOf(Bf3));
    __hv_add_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_wTFPCzEZ, VOf(Bf8));
    __hv_add_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf7), VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf12), 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f, 0.057762265046662f);
    __hv_mul_f(VIf(Bf8), VIf(Bf12), VOf(Bf12));
    __hv_exp_f(VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf8), 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f, 8.175798915643707f);
    __hv_mul_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_phasor_f(&sPhasor_XkXbvPb3, VIf(Bf8), VOf(Bf12));
    __hv_add_f(VIf(Bf12), VIf(Bf12), VOf(Bf7));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Z8kiRdiD, VOf(Bf7));
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf7), VOf(Bf6));
    __hv_mul_f(VIf(Bf12), VIf(Bf6), VOf(Bf2));
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_lte_f(VIf(Bf12), VIf(Bf7), VOf(Bf10));
    __hv_and_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf6));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_gte_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_meZvB6MF, VOf(Bf3));
    __hv_phasor_f(&sPhasor_knx7C54m, VIf(Bf8), VOf(Bf10));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_abs_f(VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf10), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf6), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf10));
    __hv_mul_f(VIf(Bf6), VIf(Bf10), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf2), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf12), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf10), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_Urue7WXU, VOf(Bf5));
    __hv_phasor_f(&sPhasor_G8Sw6KeB, VIf(Bf8), VOf(Bf10));
    __hv_add_f(VIf(Bf10), VIf(Bf10), VOf(Bf2));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_318npeAw, VOf(Bf2));
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf11), VIf(Bf8), VOf(Bf14));
    __hv_mul_f(VIf(Bf14), VIf(Bf14), VOf(Bf14));
    __hv_lte_f(VIf(Bf10), VIf(Bf2), VOf(Bf13));
    __hv_and_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf9), VIf(Bf8), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf8));
    __hv_gte_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_and_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf12), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_del1_f(&sDel1_WY5SC1dY, VIf(Bf10), VOf(Bf13));
    __hv_lt_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_samphold_f(&sSamphold_1wWZUC4l, VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf10), VIf(Bf13), VOf(Bf10));
    __hv_floor_f(VIf(Bf10), VOf(Bf12));
    __hv_sub_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_add_f(VIf(Bf12), VIf(Bf12), VOf(Bf10));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf10), VIf(Bf2), VOf(Bf11));
    __hv_mul_f(VIf(Bf12), VIf(Bf11), VOf(Bf14));
    __hv_sub_f(VIf(Bf14), VIf(Bf10), VOf(Bf15));
    __hv_mul_f(VIf(Bf15), VIf(Bf15), VOf(Bf15));
    __hv_lte_f(VIf(Bf12), VIf(Bf2), VOf(Bf4));
    __hv_and_f(VIf(Bf15), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf11));
    __hv_sub_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_gte_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf13), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_VhG5Kz7l, VOf(Bf13));
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf6), VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_line_f(&sLine_lUH6n4LQ, VOf(Bf3));
    __hv_mul_f(VIf(Bf13), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_jE36np7U, VOf(Bf13));
    __hv_mul_f(VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf0), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_varwrite_f(&sVarf_VzrPYTPy, VIf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(O1), VOf(O1));
    __hv_add_f(VIf(Bf1), VIf(O0), VOf(O0));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_Untitled::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s)
  float **const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_Untitled::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s), uninterleave
  float *const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
