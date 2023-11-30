#include <iostream>
#include <cmath>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i <= hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return round(snowOnGround * 10000) / 10000;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    std::cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}