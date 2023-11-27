#include <iostream>
#include <iomanip>
#include <cmath>

double calculateSnow(double hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        double snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return round(snow * 10000000000000000) / 10000000000000000;
}

int main() {
    double hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << std::fixed << std::setprecision(16) << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}