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

    std::cout << "Enter the initial amount of snow: ";
    std::string temp;
    std::getline(std::cin, temp);
    initialSnow = std::stof(temp);

    std::cout << "Enter the rate of snow fall per hour: ";
    std::getline(std::cin, temp);
    rateOfSnowFall = std::stof(temp);

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::getline(std::cin, temp);
    proportionOfSnowMeltingPerHour = std::stof(temp);

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}