#include <iostream>

float calculateSnow(float hours, float currentSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * snowMeltRate;
    }
    return currentSnow;
}

int main() {
    float hours, currentSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> currentSnow >> snowFallRate >> snowMeltRate;
    std::cout << calculateSnow(hours, currentSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}