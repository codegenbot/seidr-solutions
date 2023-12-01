#include <iostream>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= (snowOnGround * meltRate);
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> meltRate;
    std::cout << calculateSnow(hours, snowOnGround, snowFallRate, meltRate) << std::endl;
    return 0;
}