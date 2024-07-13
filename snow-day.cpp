float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall / 60.0f; // accumulate snow within this hour
        groundSnow = std::max(0.0f, groundSnow - proportionMeltingPerHour); // melt snow at most per hour
    }
    return groundSnow;
}