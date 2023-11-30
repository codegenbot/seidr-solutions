#include <iostream>
#include <cmath>

float calculateSnowAmount(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float currentSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * meltingRate;
    }
    
    return currentSnow;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;
    
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    float finalSnow = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);
    
    std::cout << finalSnow << std::endl;
    
    return 0;
}