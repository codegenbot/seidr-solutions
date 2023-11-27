#include <iostream>
#include <iomanip>

double calculateSnow(double hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    double snow = initialSnow;
    for (double i = 0; i < hours; i++) {
        double snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return std::round(snow * 1000000000000000) / 1000000000000000;
}

int main() {
    double hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << std::setprecision(15) << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}