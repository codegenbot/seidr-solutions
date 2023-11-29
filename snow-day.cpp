#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate;
        initialSnow -= snowFallRate * snowMeltRate;
    }
    return initialSnow;
}

int main() {
    // Read input from user
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;

    // Calculate snow
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);

    // Output the amount of snow
    std::cout << finalSnow << std::endl;

    return 0;
}