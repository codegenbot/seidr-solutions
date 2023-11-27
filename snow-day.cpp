#include <iostream>
#include <iomanip>

double calculateSnow(double hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        double snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return std::round(snow * 100000000) / 100000000; // Round to 8 decimal places
}

int main() {
    double hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << std::fixed << std::setprecision(8) << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}