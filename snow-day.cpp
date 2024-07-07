double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow; 

    for (int i = 0; i < hours; i++) {
        double newSnow = totalSnow + rateOfSnowfall; 
        totalSnow = newSnow - (newSnow * proportionMeltingPerHour); 
    }
    
    return totalSnow;
}