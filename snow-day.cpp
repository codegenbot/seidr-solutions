float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate - (snowOnGround * snowMeltingRate);
    }
    return snowOnGround;
}