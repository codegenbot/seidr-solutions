```cpp
double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow; // Initialize to the initial amount of snow

    for (int i = 0; i < hours; i++) {
        double netSnowfall = rateOfSnowfall - (totalSnow * proportionMeltingPerHour);
        if (netSnowfall > 0) {
            totalSnow += netSnowfall;
        } else {
            totalSnow = std::max(0.0, totalSnow + netSnowfall); // Ensure snow can't go below zero
        }
    }
    
    return totalSnow;
}