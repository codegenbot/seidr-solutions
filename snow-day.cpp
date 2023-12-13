#include <iostream>
#include <iomanip>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float currentSnow = initialSnow;

    for (int i = 0; i < hours; i++) {
        currentSnow = (currentSnow + snowFallRate) * (1 - meltingRate);
    }

    return std::round(currentSnow * 100000000000.0) / 100000000000.0;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);

    std::cout << std::fixed << std::setprecision(14) << finalSnow << std::endl;

    return 0;
}