```cpp
#include <iostream>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour);

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial amount of snow: ";
    std::cin >> initialSnow;
    std::cout << "Enter the rate of snow fall: ";
    std::cin >> rateOfSnowFall;
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << std::endl;
    std::cout << result << std::endl;

    return 0;
}

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        initialSnow += rateOfSnowFall - initialSnow * proportionOfSnowMeltingPerHour;
    }
    
    return initialSnow;
}