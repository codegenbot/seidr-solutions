#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= snow * snowMeltingRate;
    }
    return snow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    std::cout << calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate) << std::endl;
    return 0;
}