```cpp
#include <iostream>
#include <cmath>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;

    for (int i = 0; i < hours; i++) {
        float snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        if(snowThisHour > 0)
            totalSnow += snowThisHour; 
    }

    return totalSnow;
}

int main() {
    int hours;
    double initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours (int): ";
    std::cin >> hours;

    std::cout << "Enter the initial amount of snow (double): ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour (double): ";
    std::cin >> rateOfSnowFall;

    std::cout << "Enter the proportion of snow melting per hour (double): ";
    std::cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}