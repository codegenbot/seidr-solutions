#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        float snowFall = snowFallRate - meltRate;
        initialSnow += snowFall;
        initialSnow = std::max(0.0f, initialSnow);
    }
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltRate);
    std::cout << finalSnow << std::endl;
    return 0;
}