#include <iostream>

float calculateSnowOnGround(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowfallRate;
        snowOnGround -= snowOnGround * meltingRate;
    }
    
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowfallRate, meltingRate;
    
    std::cin >> hours >> initialSnow >> snowfallRate >> meltingRate;
    
    float result = calculateSnowOnGround(hours, initialSnow, snowfallRate, meltingRate);
    
    std::cout << result << std::endl;
    
    return 0;
}