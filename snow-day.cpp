#include <iostream>

double calculateSnow(int hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    double snow = initialSnow;
    for (int i = 0; i < int(hours); i++) {
        double snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return snow;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}