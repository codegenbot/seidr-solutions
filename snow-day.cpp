double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= totalSnow * proportionOfSnowMeltingPerHour / 100.0;
    }
    return min(totalSnow, 100.0);
}