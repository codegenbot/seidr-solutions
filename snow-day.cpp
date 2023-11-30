#include <iostream>

float calculateSnowOnGround(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * meltingRate;
    }
    
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;
    
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    float result = calculateSnowOnGround(hours, initialSnow, snowFallRate, meltingRate);
    
    std::cout << result << std::endl;
    
    return 0;
}