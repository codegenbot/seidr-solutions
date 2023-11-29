double calculateSnowOnGround(int hours, double snowOnGround, double snowFallRate, double meltingRate) {
    for (int i = 0; i < hours; i++) {
        double snowMelting = snowOnGround * meltingRate;
        snowOnGround += snowFallRate - snowMelting;
    }
    return snowOnGround;
}