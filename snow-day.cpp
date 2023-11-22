float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i <= hours; i++) {
        float snowMelting = snowOnGround * snowMeltingRate;
        snowOnGround += snowFallRate - snowMelting;
    }
    return snowOnGround;
}