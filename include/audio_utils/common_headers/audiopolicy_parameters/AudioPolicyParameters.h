/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_AUDIO_POLICY_PARAMETERS_H
#define ANDROID_AUDIO_POLICY_PARAMETERS_H

enum PolicyParameters {
    POLICY_LOAD_VOLUME =         0,
    POLICY_SET_FM_SPEAKER,
    POLICY_CHECK_FM_PRIMARY_KEY_ROUTING,
    POLICY_SET_FM_PRESTOP,
    POLICY_SET_A2DP_FORCE_IGNORE,
    POLICY_SET_FM_TX_ENABLE,
    POLICY_SET_FM_RX_FORCE_DISABLE_TX,
    POLICY_SET_LOSSLESS_BT_STATUS,
    POLICY_SET_CROSSMOUNT_LOCAL_PLAYBACK, //For MTK_CROSSMOUNT_SUPPORT
    POLICY_SET_CROSSMOUNT_MIC_LOCAL_PLAYBACK, //For MTK_CROSSMOUNT_SUPPORT
    POLICY_SET_TTY_MODE,
    POLICY_SET_HDMI_CHANNEL_SUPPORT, // for MTK_HDMI_MULTI_CHANNEL_SUPPORT
    POLICY_SET_NUM_HS_POLE,
    POLICY_SET_AUDIO_RATE,
    POLICY_SET_SCENE_GAIN,
    POLICY_SET_HIFI_STATE,
    POLICY_SET_A2DP_CODEC,
    POLICY_SET_BT_VGS_SETTING,
    POLICY_SET_VOW_WITH_HOTWORD,
};

enum FMStatus {
    FM_STATE_STOP = 0,
    FM_STATE_PLAY,
    FM_STATE_PRESTOP,
    FM_STATE_PRESTOP_WITH_MUTE,
};
enum a2dp_codec {
    A2DP_CODEC_ERROR = -1,
    A2DP_CODEC_APTX	= 0,
    A2DP_CODEC_LDAC = 1,
    A2DP_CODEC_SBC	= 2,
    A2DP_CODEC_AAC	= 3,
    A2DP_CODEC_NUM,
};

//!  BESLOUDNESS_CONTROL_CALLBACK_STRUCT interface
/*!
this structure is hold for flinger callback funtion
*/
typedef struct _BESLOUDNESS_CONTROL_CALLBACK_STRUCT {
    void (*callback)(void *data);
} BESLOUDNESS_CONTROL_CALLBACK_STRUCT;

#endif // end of ANDROID_AUDIO_POLICY_PARAMETERS_H
