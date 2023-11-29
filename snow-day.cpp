float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;

    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        float snowMelted = snowOnGround * snowMeltingRate;
        snowOnGround -= snowMelted;
    }

    return snowOnGround;
}