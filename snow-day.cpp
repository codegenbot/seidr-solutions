float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow *= (1 - meltRate);
    }
    return snow;
}