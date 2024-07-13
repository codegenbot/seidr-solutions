#include <cmath>

double snowDay(int hours, double groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall; 
        totalSnow -= round(totalSnow * proportionMeltingPerHour); 
    }
    
    return totalSnow;
}