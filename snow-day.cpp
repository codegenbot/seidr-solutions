float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate;
        initialSnow -= snowFallRate * snowMeltRate;
    }
    return initialSnow;
}