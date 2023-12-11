#include <iostream>

double calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double meltRate) {
    double currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * meltRate;
    }
    return currentSnow;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    double finalSnow = calculateSnowAmount(hours, initialSnow, snowFallRate, meltRate);
    std::cout << finalSnow << std::endl;
    return 0;
}