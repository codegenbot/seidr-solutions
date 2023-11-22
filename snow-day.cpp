#include <iostream>

double calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double meltingRate) {
    double snowAmount = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowAmount += snowFallRate;
        snowAmount -= meltingRate * snowAmount;
    }
    return snowAmount;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    double result = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << result << std::endl;
    return 0;
}