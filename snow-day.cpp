#include <iostream>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    
    float result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate);
    std::cout << result << std::endl;
    
    return 0;
}