#include <iostream>

double calculateSnowOnGround(int hours, double initialSnow, double snowFallRate, double meltingRate) {
    double snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * meltingRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    double snowOnGround = calculateSnowOnGround(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << snowOnGround << std::endl;
    return 0;
}