```cpp
#include <iostream>
#include <string>

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        double snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        totalSnow += snowThisHour > 0 ? snowThisHour : 0; 
    }
    
    return totalSnow;
}

int main() {
    std::string hoursStr, initialSnowStr, rateOfSnowFallStr, proportionOfSnowMeltingPerHourStr;

    std::cout << "Enter the number of hours: ";
    std::getline(std::cin, hoursStr);

    std::cout << "Enter the initial amount of snow: ";
    std::getline(std::cin, initialSnowStr);

    std::cout << "Enter the rate of snow fall per hour: ";
    std::getline(std::cin, rateOfSnowFallStr);

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::getline(std::cin, proportionOfSnowMeltingPerHourStr);

    int hours = std::stoi(hoursStr);
    float initialSnow = std::stof(initialSnowStr);
    float rateOfSnowFall = std::stof(rateOfSnowFallStr);
    float proportionOfSnowMeltingPerHour = std::stof(proportionOfSnowMeltingPerHourStr);

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}