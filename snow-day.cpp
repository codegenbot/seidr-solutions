#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall;
        snow *= (1 - proportionMeltingPerHour);
    }
    return snow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;
    std::cin >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour);
    std::cout << std::setprecision(10) << result << std::endl;
    return 0;
}