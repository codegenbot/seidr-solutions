```cpp
#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        initialSnow += (rateOfSnowFall / 100) - initialSnow * proportionOfSnowMeltingPerHour;
    }
    
    return initialSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial amount of snow: ";
    std::cin >> std::fixed >> std::setprecision(6) >> initialSnow;
    std::cout << "Enter the rate of snow fall (in %): ";
    std::cin >> std::fixed >> std::setprecision(6) >> rateOfSnowFall;
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> std::fixed >> std::setprecision(6) >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << std::endl;

    return 0;
}