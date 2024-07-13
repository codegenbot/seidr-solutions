#include <algorithm>

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += (rateOfSnowFall / 100.0f); // add new snow
        groundSnow -= groundSnow * proportionMeltingPerHour; // melt existing snow
        groundSnow = std::max(0.0f, groundSnow);
    }
    return groundSnow;
}