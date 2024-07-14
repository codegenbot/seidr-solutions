```cpp
#include <iostream>
#include <string>

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
    std::cin >> hours;

    std::string temp;
    std::cout << "Enter the initial amount of snow: ";
    std::cin >> temp;
    if (!temp || !std::cin) {
        std::cerr << "Invalid input for initial snow. Defaulting to 0." << std::endl;
        initialSnow = 0.0f;
    } else {
        initialSnow = std::stof(temp);
    }

    std::cout << "Enter the rate of snow fall per hour: ";
    std::cin >> temp;
    if (!temp || !std::cin) {
        std::cerr << "Invalid input for rate of snow fall. Defaulting to 0." << std::endl;
        rateOfSnowFall = 0.0f;
    } else {
        rateOfSnowFall = std::stof(temp);
    }

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> temp;
    if (!temp || !std::cin) {
        std::cerr << "Invalid input for proportion of snow melting. Defaulting to 0." << std::endl;
        proportionOfSnowMeltingPerHour = 0.0f;
    } else {
        proportionOfSnowMeltingPerHour = std::stof(temp);
    }

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}