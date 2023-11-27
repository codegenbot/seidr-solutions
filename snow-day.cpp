float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow *= (1 - snowMeltRate);
    }
    return snow;
}