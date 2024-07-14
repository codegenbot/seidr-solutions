```cpp
#include <iostream>
#include <limits>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        float snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        totalSnow += snowThisHour > 0 ? snowThisHour : 0; 
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    if (!(std::cin) || std::cin.fail()) {
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
        return 1; 
    }
    std::cin >> hours;

    std::cout << "Enter the initial amount of snow: ";
    if (!(std::cin) || std::cin.fail()) {
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
        return 1; 
    }
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour: ";
    if (!(std::cin) || std::cin.fail()) {
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
        return 1; 
    }
    std::cin >> rateOfSnowFall;

    std::cout << "Enter the proportion of snow melting per hour: ";
    if (!(std::cin) || std::cin.fail()) {
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
        return 1; 
    }
    std::cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}