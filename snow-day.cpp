#include <iostream>

float calculateSnowOnGround(int hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltRate);
    }
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    std::cout << calculateSnowOnGround(hours, snowOnGround, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}