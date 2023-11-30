#include <iostream>

float calculateSnowAmount(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowAmount = initialSnow;

    for (int i = 0; i < hours; i++) {
        snowAmount += snowFallRate;
        snowAmount *= (1 - meltingRate);
    }

    return snowAmount;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;

    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    float result = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);

    std::cout << result << std::endl;

    return 0;
}