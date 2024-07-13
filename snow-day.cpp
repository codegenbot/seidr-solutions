double snowDay(int hours, double groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    rateOfSnowFall = (double)rateOfSnowFall;
    proportionMeltingPerHour = (double)proportionMeltingPerHour;

    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall;
        groundSnow -= proportionMeltingPerHour;
    }
    return groundSnow;
}