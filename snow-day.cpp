float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        initialSnow *= (1 - proportionOfMeltingPerHour);
        initialSnow += rateOfSnowfall;
    }
    return initialSnow;
}