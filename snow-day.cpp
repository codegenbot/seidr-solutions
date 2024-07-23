#include <iostream>
#include <iomanip>

double snowDay(int hours, double initialSnow, double rateOfSnowFall, double proportionOfSnowMeltingPerHour);

int main() {
    int hours;
    std::cin >> hours;
    double initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    std::cout << std::fixed << std::setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}

double snowDay(int hours, double initialSnow, double rateOfSnowFall, double proportionOfSnowMeltingPerHour) {
    double currentSnow = initialSnow;
    for (int i = 1; i <= hours; ++i) {
        currentSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour;
    }
    return currentSnow;
}