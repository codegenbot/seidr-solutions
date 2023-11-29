#include <iostream>
#include <iomanip>

float calculateSnow(int hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;

    for (int i = 0; i < hours; i++) {
        float snowMelted = snowOnGround * snowMeltingRate;
        snowOnGround += snowFallRate;
        snowOnGround -= snowMelted;
    }

    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, snowMeltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;

    std::cout << std::fixed;
    std::cout << std::setprecision(20);

    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    std::cout << result << std::endl;

    return 0;
}