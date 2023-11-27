#include <iostream>

float calculateSnow(int hours, float initialSnow, float snowFallRate, float meltRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= meltRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    float result = calculateSnow(hours, initialSnow, snowFallRate, meltRate);
    std::cout << result << std::endl;
    return 0;
}