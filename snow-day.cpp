#include <iostream>

float calculateSnow(int hours, float initialSnow, float snowFallRate, float snowMeltProportion) {
    float currentSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * snowMeltProportion;
    }
    
    return currentSnow;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, snowMeltProportion;
    
    std::cin >> hours;
    std::cin >> initialSnow;
    std::cin >> snowFallRate;
    std::cin >> snowMeltProportion;
    
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltProportion);
    std::cout << result << std::endl;
    
    return 0;
}