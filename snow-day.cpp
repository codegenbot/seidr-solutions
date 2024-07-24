#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelt) {
    double snow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        snow += rateOfFall;
        snow *= (1 - proportionMelt);
    }
    return snow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfFall, proportionMelt;
    std::cin >> initialSnow >> rateOfFall >> proportionMelt;
    double result = snowDay(hours, initialSnow, rateOfFall, proportionMelt);
    std::cout << std::setprecision(std::numeric_limits<double>::max_digits10) << result << std::endl;
    return 0;
}