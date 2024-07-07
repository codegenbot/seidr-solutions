double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow; // Initialize to the initial amount of snow

    for (int i = 0; i < hours; i++) {
        double netSnowfall = rateOfSnowfall - (totalSnow * proportionMeltingPerHour);
        if (netSnowfall > 0) {
            totalSnow += netSnowfall;
        } else if (netSnowfall < 0) {
            totalSnow = max(0.0, totalSnow + netSnowfall);
        }
    }
    
    return totalSnow;
}