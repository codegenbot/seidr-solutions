#include<iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float currentSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        float snowFall = snowFallRate * 1;
        float remainingSnow = 1 - meltingRate;
        currentSnow = (currentSnow + snowFall) * remainingSnow;
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