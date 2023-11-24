#include <iostream>

float calculateSnowAmount(int hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowAmount = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowAmount += snowFallRate;
        snowAmount -= snowAmount * snowMeltingRate;
    }
    return snowAmount;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, snowMeltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    
    float result = calculateSnowAmount(hours, initialSnow, snowFallRate, snowMeltingRate);
    std::cout << result << std::endl;
    
    return 0;
}