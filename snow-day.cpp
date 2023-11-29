#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate; 
        initialSnow -= snowFallRate * snowMeltRate;
    }
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours;
    std::cin >> initialSnow;
    std::cin >> snowFallRate;
    std::cin >> snowMeltRate;

    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << finalSnow << std::endl;

    return 0;
}