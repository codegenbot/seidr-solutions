#include <iostream>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    return snowOnGround + (hours * (snowFallRate - (snowOnGround * snowMeltingRate)));
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltingRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    
    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate);
    std::cout << finalSnow << std::endl;
    
    return 0;
}