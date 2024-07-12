double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= min(totalSnow, meltPerHour);
    }
    return totalSnow;
}