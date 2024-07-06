double snowDay(int hours, double initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall; // Apply snowfall first
        totalSnow *= (1 - proportionMeltingPerHour); // Then apply melting
    }
    
    return totalSnow;
}