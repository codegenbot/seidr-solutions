#include <iostream>
#include <sstream>

double calculateSnow(double hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    double snowOnGround = initialSnow;
    for (double i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltRate);
    }
    return snowOnGround;
}

int main() {
    double hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    double result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << result;
    return 0;
}