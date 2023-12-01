#include <iostream>
#include <cmath>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltRate) {
    float currentSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= meltRate * currentSnow;
    }
    
    return currentSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltRate);
    
    std::cout << finalSnow << std::endl;
    
    return 0;
}