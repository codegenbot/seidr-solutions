#include <iostream>
#include <iomanip>

long double calculateSnow(double hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    long double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        long double snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return snow;
}

int main() {
    double hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << std::fixed << std::setprecision(15) << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}