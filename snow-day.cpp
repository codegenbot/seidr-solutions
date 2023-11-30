#include <iostream>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltingRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltingRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    std::cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate) << std::endl;
    return 0;
}