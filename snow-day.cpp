#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float currentSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow *= (1 - meltingRate);
    }
    
    return currentSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    
    std::cout << finalSnow << std::endl;
    
    return 0;
}