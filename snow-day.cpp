#include <iostream>
#include <cmath>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltProportion) {
    for (int i = 0; i <= hours; i++) {
        float currentSnow = snowOnGround + snowFallRate - (snowOnGround * snowMeltProportion);
        snowOnGround = std::round(currentSnow * 100000) / 100000;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltProportion;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltProportion;
    std::cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltProportion) << std::endl;
    return 0;
}