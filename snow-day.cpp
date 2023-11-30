#include <iostream>

float calculateSnowOnGround(int hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltingRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltingRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    std::cout << calculateSnowOnGround(hours, snowOnGround, snowFallRate, snowMeltingRate) << std::endl;
    return 0;
}