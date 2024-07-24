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

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    
    std::cout << "Enter initial snow: ";
    std::cin >> initialSnow;
    
    std::cout << "Enter rate of snow fall: ";
    std::cin >> rateOfSnowFall;

    std::cout << "Enter proportion of snow melting per hour: ";
    std::cin >> proportionOfSnowMeltingPerHour;

    if (!(std::cin >> hours) || !(std::cin >> initialSnow) || !(std::cin >> rateOfSnowFall) || !(std::cin >> proportionOfSnowMeltingPerHour)) {
        std::cout << "Invalid input. Please enter valid numbers.\n";
        return 1;
    }

    if (!(hours >= 0)) {
        std::cout << "Hours must be a non-negative number.\n";
        return 1;
    }

    if (rateOfSnowFall < 0 || proportionOfSnowMeltingPerHour < 0 || proportionOfSnowMeltingPerHour > 1) {
        std::cout << "Rate of snow fall and proportion of snow melting per hour must be non-negative numbers less than or equal to 1.\n";
        return 1;
    }

    std::cout << fixed << std::setprecision(6) << "Result: " << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;