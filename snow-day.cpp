#include <algorithm>

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow; 

    for (int i = 0; i < hours; i++) {
        double netSnowfall = rateOfSnowfall - (totalSnow * proportionMeltingPerHour);
        if (netSnowfall > 0) {
            totalSnow += netSnowfall;
        } else if (netSnowfall < 0) {
            totalSnow = std::max(0.0, totalSnow + netSnowfall);
        }
    }
    
    return totalSnow;