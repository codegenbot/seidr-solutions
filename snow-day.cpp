#include <iostream>
#include <cmath>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    snowOnGround -= snowOnGround * snowMeltingRate;
    snowOnGround += snowFallRate * hours;
    snowOnGround *= pow(1 - snowMeltingRate, hours);
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, snowMeltingRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    std::cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltingRate) << std::endl;
    return 0;
}