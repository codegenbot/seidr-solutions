#include <iostream>
#include <iomanip>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snow = initialSnow;
    for (float i = 0.0; i < hours; i += 0.1) {
        float snowChange = (snowFallRate - (snow * snowMeltRate)) / 10.0;
        snow += snowChange;
    }
    return std::round(snow * 100000000000000.0) / 100000000000000.0;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << std::setprecision(15) << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}