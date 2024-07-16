float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    float snow = initialSnow;
    for (int i = 1; i <= hours; ++i) {
        snow += rateOfSnowfall;
        if (i < hours) {
            snow -= proportionMeltingPerHour / 60.0f;
        }
    }
    return snow;
}