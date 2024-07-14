float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        initialSnow += rateOfSnowFall - initialSnow * proportionOfSnowMeltingPerHour;
    }
    
    return initialSnow;
}