#include <iostream>
#include <cmath>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * meltingRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltingRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> meltingRate;
    std::cout << calculateSnow(hours, snowOnGround, snowFallRate, meltingRate) << std::endl;
    return 0;
}