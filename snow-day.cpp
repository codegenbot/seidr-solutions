```cpp
#include <iostream>
#include <string>

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        double snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        totalSnow += snowThisHour > 0 ? snowThisHour : 0; // ensure no negative snow
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    hours = std::stoi(std::getline(std::cin));

    std::cout << "Enter the initial amount of snow: ";
    initialSnow = std::stof(std::getline(std::cin));

    std::cout << "Enter the rate of snow fall per hour: ";
    rateOfSnowFall = std::stof(std::getline(std::cin));

    std::cout << "Enter the proportion of snow melting per hour: ";
    proportionOfSnowMeltingPerHour = std::stof(std::getline(std::cin));

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}