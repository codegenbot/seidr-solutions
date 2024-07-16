```c++
#include <iostream>
#include <iomanip>

int snowAfterHours(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall - meltingRate;
    }
    return static_cast<int>(currentSnow);
}

int main() {
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    float initialSnow, rateOfSnowFall, meltingRate;
    std::cout << "Enter the initial snow: ";
    std::cin >> initialSnow;
    std::cout << "Enter the rate of snow fall: ";
    std::cin >> rateOfSnowFall;
    std::cout << "Enter the melting rate per hour: ";
    std::cin >> meltingRate;

    int result = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);
    std::cout << "Snow after " << hours << " hours: " << std::fixed << std::setprecision(6) << (double)result << std::endl;

    return 0;
}