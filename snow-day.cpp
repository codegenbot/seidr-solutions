#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate; // add snow
        initialSnow *= (1 - snowMeltRate); // melt snow
    }
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << finalSnow << std::endl;
    
    return 0;
}