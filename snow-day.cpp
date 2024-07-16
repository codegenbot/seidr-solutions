float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        initialSnow += rateOfSnowfall;
        initialSnow -= initialSnow * proportionOfMeltingPerHour;
    }
    return initialSnow;
}