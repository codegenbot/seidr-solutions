#include <iostream>
#include <iomanip>

long double calculateSnow(int hours, long double initialSnow, long double snowFallRate, long double snowMeltRate) {
    long double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        long double snowChange = snowFallRate - (snow * snowMeltRate);
        snow += snowChange;
    }
    return snow;
}

int main() {
    int hours;
    long double initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    std::cout << std::fixed << std::setprecision(15) << calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate) << std::endl;
    return 0;
}