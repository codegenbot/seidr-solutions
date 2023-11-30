float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate - (snowOnGround * snowMeltRate);
    }
    return snowOnGround;
}