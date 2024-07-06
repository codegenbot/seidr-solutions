double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        // Melting occurs first, then new snow falls
        totalSnow -= totalSnow * proportionMeltingPerHour / 100.0; 
        totalSnow += rateOfSnowfall; 
    }
    
    return totalSnow;
}