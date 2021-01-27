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

#ifndef ANDROID_AUDIO_DETECT_PULSE_H
#define ANDROID_AUDIO_DETECT_PULSE_H

#include <sys/types.h>
#include <pulse.h>

namespace android {

static const int defaultPrecision = 4;

class AudioDetectPulse {
public:
    AudioDetectPulse();
    virtual             ~AudioDetectPulse();

    static AudioDetectPulse *getInstance();

    static void     setDetectPulse(const bool enable);
    static bool     getDetectPulse();

    static void     doDetectPulse(const int TagNum, const int pulseLevel, const int dump, void *ptr,
                                  const size_t desiredFrames, const audio_format_t format,
                                  const int channels, const int sampleRate);

private:
    static AudioDetectPulse *mAudioDetectPulse;
    static bool mIsDetectPulse;
    static int mPrecision;
};


}; // end namespace android

#endif // end of ANDROID_AUDIO_DETECT_PULSE_H
