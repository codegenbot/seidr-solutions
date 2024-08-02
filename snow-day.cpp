#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        snow += rateOfFall;
        snow *= (1 - meltingRate);
    }
    return snow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfFall, meltingRate;
    std::cin >> initialSnow >> rateOfFall >> meltingRate;
    double result = snowDay(hours, initialSnow, rateOfFall, meltingRate);
    std::cout << std::fixed << std::setprecision(10) << result << std::endl;
    return 0;
}