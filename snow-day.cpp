float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        float meltedSnow = snowFallRate * snowMeltingRate;
        snowOnGround -= meltedSnow;
    }
    return snowOnGround;
}