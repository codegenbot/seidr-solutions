#include <iostream>
#include <iomanip>

double calculateSnowOnGround(int hours, double initialSnow, double snowFallRate, double snowMeltingRate) {
    double snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltingRate);
    }
    return snowOnGround;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, snowMeltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    std::cout << std::fixed << std::setprecision(15) << calculateSnowOnGround(hours, initialSnow, snowFallRate, snowMeltingRate) << std::endl;
    return 0;
}