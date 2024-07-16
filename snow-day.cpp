float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        initialSnow = initialSnow * (1 - proportionOfMeltingPerHour) + rateOfSnowfall;
    }
    return initialSnow;
}