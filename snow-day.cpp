double calculateSnow(double hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        double snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return snow;
}