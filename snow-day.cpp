```cpp
#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionMelting;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial amount of snow on the ground: ";
    std::cin >> groundSnow;
    std::cout << "Enter the rate of snow fall per hour: ";
    std::cin >> rateOfSnowFall;
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionMelting;

    for(int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall - proportionMelting;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << std::fixed << std::setprecision(10) << groundSnow;

    return 0;
}