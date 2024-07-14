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
    std::string inputHours, inputInitialSnow, inputRateOfSnowFall, inputProportionOfSnowMeltingPerHour;
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    std::cin >> inputHours;
    hours = std::stoi(inputHours);

    std::cout << "Enter the initial amount of snow: ";
    std::cin >> inputInitialSnow;
    initialSnow = std::stof(inputInitialSnow);

    std::cout << "Enter the rate of snow fall per hour: ";
    std::cin >> inputRateOfSnowFall;
    rateOfSnowFall = std::stof(inputRateOfSnowFall);

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> inputProportionOfSnowMeltingPerHour;
    proportionOfSnowMeltingPerHour = std::stof(inputProportionOfSnowMeltingPerHour);

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}