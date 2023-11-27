#include <iostream>
#include <cmath>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        float snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return round(snow * 10000000) / 10000000;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}