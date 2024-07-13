```cpp
float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall / 100.0f;
        groundSnow = std::max(0.0f, groundSnow * (1 - proportionMeltingPerHour)); 
    }
    return groundSnow;