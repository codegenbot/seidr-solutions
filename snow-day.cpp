#include <iostream>
#include <iomanip>
#include <cmath>

double snowDay(int hours, double groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall;
        groundSnow -= proportionMeltingPerHour;
    }
    return groundSnow;
}

int main() {
    int hours = 10; 
    double groundSnow = 10.0; 
    float rateOfSnowFall = 2.5f; 
    float proportionMeltingPerHour = 0.1f; 
    
    double result = snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour);
    
    std::cout << std::fixed << std::setprecision(6) << result << "\n";
    return 0;
}