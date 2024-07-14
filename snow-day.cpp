```cpp
#include <iostream>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        initialSnow += (rateOfSnowFall / 100.0f) - initialSnow * proportionOfSnowMeltingPerHour;
    }
    
    return initialSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFallInput, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial amount of snow: ";
    std::cin >> initialSnow;
    std::cout << "Enter the rate of snow fall (in %): ";
    float rateOfSnowFallInput;
    std::cin >> rateOfSnowFallInput; 
    int rateOfSnowFall = static_cast<int>(rateOfSnowFallInput); 
    rateOfSnowFall /= 100.0f; 

    std::cout << "Enter the proportion of snow melting per hour: ";
    float proportionOfSnowMeltingPerHourInput;
    std::cin >> proportionOfSnowMeltingPerHourInput;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << std::endl;

    return 0;
}