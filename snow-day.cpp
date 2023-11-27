#include <iostream>

float calculateSnow(float hours, float currentSnow, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * meltRate;
    }

    currentSnow += currentSnow * meltRate * hours;

    return currentSnow;
}

int main() {
    float hours, currentSnow, snowFallRate, meltRate;
    std::cin >> hours >> currentSnow >> snowFallRate >> meltRate;
    float finalSnow = calculateSnow(hours, currentSnow, snowFallRate, meltRate);
    std::cout << finalSnow << std::endl;
    return 0;
}