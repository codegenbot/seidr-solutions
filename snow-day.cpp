float snowDay(int hours, float initialSnow, float snowFall, float meltRate) {
    float hourlySnow = 0;
    for (int i = 0; i < hours; ++i) {
        hourlySnow += snowFall - meltRate;
    }
    return initialSnow + hourlySnow;
}