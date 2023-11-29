#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours - 1; i++) {
        initialSnow += snowFallRate;
        initialSnow -= initialSnow * snowMeltRate;
    }
    initialSnow += snowFallRate * (hours - 1);
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << finalSnow << std::endl;
    
    return 0;
}