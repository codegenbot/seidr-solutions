```cpp
#include <iostream>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::cout << "Enter the initial amount of snow: ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour: ";
    std::cin >> rateOfSnowFall;

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}