double calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double meltingRate) {
    double currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= initialSnow * meltingRate;
    }
    return currentSnow;
}