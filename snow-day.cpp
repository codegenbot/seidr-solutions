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
    std::cin >> std::skipws >> std::setprecision(6) >> std::fixed >> initialSnow;
    
    std::cout << "Enter rate of snow fall: ";
    std::cin >> std::skipws >> std::setprecision(6) >> std::fixed >> rateOfSnowFall;

    std::cout << "Enter proportion of snow melting per hour: ";
    std::cin >> std::skipws >> std::setprecision(6) >> std::fixed >> proportionOfSnowMeltingPerHour;

    std::cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}