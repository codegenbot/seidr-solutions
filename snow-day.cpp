#include <iostream>

float calculateSnowAmount(int hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snowAmount = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowAmount += snowFallRate;
        snowAmount -= snowAmount * snowMeltRate;
    }
    return snowAmount;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    
    float finalSnowAmount = calculateSnowAmount(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << finalSnowAmount << std::endl;
    
    return 0;
}