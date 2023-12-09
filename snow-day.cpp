#include <iostream>
#include <iomanip>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < static_cast<int>(hours); i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltRate);
    }
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << std::fixed << std::setprecision(9) << result;
    return 0;
}