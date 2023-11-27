#include <iostream>

double calculateSnow(double hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        double snowChange = snowFallRate - (initialSnow * snowMeltRate);
        snow += snowChange;
        initialSnow += snowFallRate;
    }
    return snow;
}

int main() {
    double hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}