#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    std::cout << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << "\n";
    
    return 0;
}