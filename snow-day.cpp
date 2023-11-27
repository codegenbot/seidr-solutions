#include <iostream>
#include <iomanip>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours - 1; i++) {
        float snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return snow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << std::fixed << std::setprecision(17) << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}