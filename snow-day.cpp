#include <iostream>
#include <algorithm>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;
    
    for (float i = 0; i < hours; i += 1.0) {
        snowOnGround += snowFallRate;
        float snowMelted = snowOnGround * snowMeltingRate;
        snowOnGround -= snowMelted;
        snowOnGround = std::max(0.0f, snowOnGround); // Prevent negative snow on the ground
    }
    
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    std::cout << result << std::endl;
    
    return 0;
}