float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate; // add snow
        initialSnow -= snowFallRate * snowMeltRate; // melt snow
    }
    return initialSnow;
}