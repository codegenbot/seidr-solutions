```cpp
#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionOfSnowMeltingPerHour);
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cout << "Enter hours: ";
    std::cin >> hours;

    float initialSnow = 0, rateOfSnowFall = 0, proportionOfSnowMeltingPerHour = 0;

    std::cout << "Enter initial snow: ";
    std::cin >> std::fixed >> std::setprecision(6) >> initialSnow;

    std::cout << "Enter rate of snow fall: ";
    std::cin >> std::fixed >> std::setprecision(6) >> rateOfSnowFall;

    std::cout << "Enter proportion of snow melting per hour: ";
    std::cin >> std::fixed >> std::setprecision(6) >> proportionOfSnowMeltingPerHour;

    std::cout << fixed << setprecision(6) << "Result: " << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}