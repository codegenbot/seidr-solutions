double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        double snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        if(snowThisHour < 0)
            snowThisHour = 0;
        totalSnow += snowThisHour;
    }
    
    return totalSnow;
}