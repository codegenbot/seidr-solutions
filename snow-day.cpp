#include <iostream>
#include <iomanip>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        float snowMelted = snowOnGround * snowMeltRate;
        snowOnGround = snowOnGround + snowFallRate - snowMelted;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;

    float result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate);
    std::cout << std::fixed << std::setprecision(15) << result << std::endl;

    return 0;
}