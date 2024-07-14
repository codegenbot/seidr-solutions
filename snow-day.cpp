float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        float accumulation = rateOfSnowFall;
        initialSnow += accumulation;
        
        // Calculate melting based on the new total snow
        float melting = initialSnow * proportionOfSnowMeltingPerHour;
        initialSnow -= melting;
    }
    
    return initialSnow;
}