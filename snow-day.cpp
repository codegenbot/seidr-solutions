#include <iostream>
#include <iomanip>

double calculateSnow(double hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    double snow = initialSnow;
    for (double i = 0.0; i < hours; i++) {
        float snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return snow;
}

int main() {
    double hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << std::fixed << std::setprecision(16) << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}