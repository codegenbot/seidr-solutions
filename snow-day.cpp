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
    if (!(std::cin >> hours)) {
        std::cout << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter initial snow: ";
    if (!(std::cin >> initialSnow)) {
        std::cout << "Invalid input. Please enter a floating-point number." << std::endl;
        return 1;
    }

    std::cout << "Enter rate of snow fall: ";
    if (!(std::cin >> rateOfSnowFall)) {
        std::cout << "Invalid input. Please enter a floating-point number." << std::endl;
        return 1;
    }

    std::cout << "Enter proportion of snow melting per hour: ";
    if (!(std::cin >> proportionOfSnowMeltingPerHour)) {
        std::cout << "Invalid input. Please enter a floating-point number." << std::endl;
        return 1;
    }

    std::cout << fixed << setprecision(6) << "Result: " << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}