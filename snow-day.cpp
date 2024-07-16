```c++
#include <iostream>
#include <iomanip>

float snowAfterHours(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall - meltingRate;
    }
    return currentSnow;
}

int main() {
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    float initialSnow, rateOfSnowFall, meltingRate;
    std::cout << "Enter the initial snow: ";
    std::cin >> std::fixed >> std::setprecision(2) >> initialSnow;
    std::cout << "Enter the rate of snow fall: ";
    std::cin >> rateOfSnowFall;
    std::cout << "Enter the melting rate per hour: ";
    std::cin >> meltingRate;

    float result = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);
    std::cout << "Snow after " << hours << " hours: " << std::fixed << std::setprecision(2) << result << std::endl;

    return 0;
}