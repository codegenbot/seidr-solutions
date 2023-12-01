#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate;
        initialSnow -= initialSnow * snowMeltingRate;
    }
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    std::cout << calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate) << std::endl;
    return 0;
}