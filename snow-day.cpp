```c++
#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float currentSnow = initialSnow;
    for(int i = 0; i < hours; i++) {
        if(i == 0) {
            currentSnow += currentSnow * rateOfSnowFall;
        } else {
            currentSnow += currentSnow * rateOfSnowFall - currentSnow * proportionOfSnowMeltingPerHour;
        }
    }
    return currentSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::cin >> hours;
    std::cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    std::cout << std::fixed << std::setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}