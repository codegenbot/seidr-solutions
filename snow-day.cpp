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
    std::string inputHours, initialSnowInput, rateOfSnowFallInput, proportionOfSnowMeltingPerHourInput;

    std::cout << "Enter the number of hours: ";
    inputHours = std::to_string(std::stoi(std::cin >> std::ws .nochat));
    int hours = std::stoi(inputHours);

    std::cout << "Enter the initial amount of snow: ";
    initialSnowInput = std::to_string(std::stof(std::cin >> std::ws .nochat));
    float initialSnow = std::stof(initialSnowInput);

    std::cout << "Enter the rate of snow fall per hour: ";
    rateOfSnowFallInput = std::to_string(std::stof(std::cin >> std::ws .nochat));
    float rateOfSnowFall = std::stof(rateOfSnowFallInput);

    std::cout << "Enter the proportion of snow melting per hour: ";
    proportionOfSnowMeltingPerHourInput = std::to_string(std::stof(std::cin >> std::ws .nochat));
    float proportionOfSnowMeltingPerHour = std::stof(proportionOfSnowMeltingPerHourInput);

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}