#include <iostream>
#include <cmath>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        float snowMelting = std::round(snow * (meltingRate / 100) * 10000) / 10000;
        snow += std::round(snowFallRate * 10000) / 10000 - snowMelting;
    }
    return std::round(snow * 10000) / 10000;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << finalSnow << std::endl;

    return 0;
}