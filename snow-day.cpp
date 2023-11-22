#include <iostream>

float calculateSnow(float hours, float snow, float snowFallRate, float meltingRate) {
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate - (snow * meltingRate);
    }
    return snow;
}

int main() {
    float hours, snow, snowFallRate, meltingRate;
    std::cin >> hours >> snow >> snowFallRate >> meltingRate;
    
    float finalSnow = calculateSnow(hours, snow, snowFallRate, meltingRate);
    std::cout << finalSnow << std::endl;
    
    return 0;
}