#include <iostream>

float calculateSnowOnGround(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= meltingRate * snowOnGround;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;

    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    std::cout << calculateSnowOnGround(hours, initialSnow, snowFallRate, meltingRate) << std::endl;

    return 0;
}