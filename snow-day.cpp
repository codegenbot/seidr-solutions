#include <iostream>
#include <cmath>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround -= snowOnGround * meltingRate;
        snowOnGround += snowFallRate;
        snowOnGround = std::floor(snowOnGround * 10000) / 10000;  // Round off snow on the ground to 4 decimal places
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltingRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> meltingRate;
    float result = calculateSnow(hours, snowOnGround, snowFallRate, meltingRate);
    std::cout << result << std::endl;
    return 0;
}