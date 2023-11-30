#include <iostream>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltProportion) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltProportion;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltProportion;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltProportion;
    std::cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltProportion) << std::endl;
    return 0;
}