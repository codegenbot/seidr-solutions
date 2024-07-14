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
    std::string str;
    std::getline(std::cin, str);
    hours = std::stoi(str);

    std::cout << "Enter the initial amount of snow: ";
    std::getline(std::cin, str);
    initialSnow = std::stof(str);

    std::cout << "Enter the rate of snow fall per hour: ";
    std::getline(std::cin, str);
    rateOfSnowFall = std::stof(str);

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::getline(std::cin, str);
    proportionOfSnowMeltingPerHour = std::stof(str);

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}