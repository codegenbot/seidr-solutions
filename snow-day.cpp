float calculateSnow(float hours, float currentSnow, float snowFallRate, float meltRate) {
    for (float i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * meltRate;
    }
    return currentSnow;
}