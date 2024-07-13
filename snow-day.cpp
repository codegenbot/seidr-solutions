#include <iostream>
#include <iomanip>
#include <cmath>

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall;
        groundSnow -= proportionMeltingPerHour;
    }
    return groundSnow;
}

int main() {
    int hours = 10; 
    float groundSnow = 18.11547058083426f; 
    float rateOfSnowFall = 2.5f; 
    float proportionMeltingPerHour = 0.1f; 
    
    float result = snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour);
    
    std::cout << std::fixed << std::setprecision(6) << result << "\n";
    return 0;
}