#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate; // add snow
        initialSnow -= snowFallRate * snowMeltRate; // melt snow
    }
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << result << std::endl;
    
    return 0;
}