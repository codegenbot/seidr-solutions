#include <cmath>
#include <iostream>

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall / 100.0f;
        groundSnow = std::max(0.0f, groundSnow * (1 - proportionMeltingPerHour)); 
    }
    return groundSnow;
}

int main() {
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    float groundSnow;
    std::cout << "Enter the initial amount of snow on the ground: ";
    std::cin >> groundSnow;

    float rateOfSnowFall;
    std::cout << "Enter the rate of snow fall (in mm per 100): ";
    std::cin >> rateOfSnowFall;

    float proportionMeltingPerHour;
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionMeltingPerHour;

    float result = snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour);
    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << std::endl;
    return 0;
}