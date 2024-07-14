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
    int tempHours;
    std::cout << "Enter the number of hours: ";
    std::cin >> tempHours;

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::cout << "Enter the initial amount of snow: ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour: ";
    std::cin >> rateOfSnowFall;

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(tempHours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << std::to_string(tempHours) << " hours is: " << result << "\n";

    return 0;
}