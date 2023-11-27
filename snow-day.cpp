#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= meltingRate * snow;
    }
    return snow;
}

int main() {
    // Read input
    float hours, initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    // Calculate and print result
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << finalSnow << std::endl;

    return 0;
}