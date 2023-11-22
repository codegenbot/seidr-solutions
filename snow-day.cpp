#include <iostream>
#include <iomanip>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (float i = 0.0f; i < hours; i += 1.0f) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    std::cout << std::fixed << std::setprecision(15) << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}