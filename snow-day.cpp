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
    std::getline(std::cin, inputHours);
    int hours = std::stoi(inputHours);

    std::cout << "Enter the initial amount of snow: ";
    std::getline(std::cin, initialSnowInput);
    float initialSnow = std::stof(initialSnowInput);

    std::cout << "Enter the rate of snow fall per hour: ";
    std::getline(std::cin, rateOfSnowFallInput);
    float rateOfSnowFall = std::stof(rateOfSnowFallInput);

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::getline(std::cin, proportionOfSnowMeltingPerHourInput);
    float proportionOfSnowMeltingPerHour = std::stof(proportionOfSnowMeltingPerHourInput);

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}