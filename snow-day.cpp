#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;

    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
    }

    float snowMelted = snowOnGround * snowMeltingRate;
    snowOnGround -= snowMelted;

    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;

    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    std::cout << result << std::endl;

    return 0;
}