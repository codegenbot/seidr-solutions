double snowDay(int hours, double initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall; 
        totalSnow *= (1 - proportionMeltingPerHour); 
    }
    
    return totalSnow;
}