#include <iostream>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        float snowFall = snowFallRate - meltRate * snowOnGround;
        snowOnGround = snowOnGround + snowFall;
        if (snowOnGround < 0) {
            snowOnGround = 0;
        }
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    std::cout << finalSnow << std::endl;

    return 0;
}