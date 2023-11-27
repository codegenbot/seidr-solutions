#include <iostream>

double calculateSnow(int hours, double initialSnow, double snowFallRate, double meltRate) {
    double snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= (snowOnGround * meltRate) - snowFallRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    double result = calculateSnow(hours, initialSnow, snowFallRate, meltRate);
    std::cout << result << std::endl;
    return 0;
}