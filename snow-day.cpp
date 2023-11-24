#include <iostream>

float calculateSnowOnGround(int hours, float initialSnow, float snowfallRate, float proportionMelt) {
    float snowOnGround = initialSnow;
    
    for(int i = 0; i < hours; i++) {
        snowOnGround += snowfallRate;
        snowOnGround -= snowOnGround * proportionMelt;
    }
    
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowfallRate, proportionMelt;
    
    std::cin >> hours >> initialSnow >> snowfallRate >> proportionMelt;
    
    float result = calculateSnowOnGround(hours, initialSnow, snowfallRate, proportionMelt);
    
    std::cout << result << std::endl;
    
    return 0;
}