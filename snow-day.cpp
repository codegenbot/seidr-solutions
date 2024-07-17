#include <iostream>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float snow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        snow += rateOfSnowFall - snow * proportionOfSnowMeltingPerHour;
    }
    return snow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);
    std::cout << std::setprecision(10) << result << std::endl;
    return 0;
}