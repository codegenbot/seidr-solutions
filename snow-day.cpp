float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;

    for (float i = 0; i < hours; i += 1.0) {
        snowOnGround += snowFallRate;
        float snowMelted = snowFallRate * snowMeltingRate;
        snowFallRate -= snowMelted;
    }

    return snowOnGround;
}