```cpp
#include <iostream>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        if(initialSnow < 0) {
            std::cout << "Error: Initial amount of snow cannot be negative. Please try again." << std::endl;
            return -1.0f;
        }
        initialSnow += (rateOfSnowFall / 100.0f) - initialSnow * proportionOfSnowMeltingPerHour;
    }
    
    return initialSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial amount of snow: ";
    std::cin >> initialSnow;
    std::cout << "Enter the rate of snow fall (in %): ";
    std::cin >> rateOfSnowFall;
    std::cin.ignore(); 
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall / 100.0f, proportionOfSnowMeltingPerHour);

    if(result == -1.0f) {
        return 1;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << std::endl;

    return 0;
}