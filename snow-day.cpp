#include <iostream>
#include <iomanip>

double calculateSnow(double hours, double initialSnow, double snowFallRate, double meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow -= snow * meltingRate;
        snow += snowFallRate;
    }
    return snow;
}

int main() {
    double hours, initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    double finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << std::fixed << std::setprecision(15) << finalSnow << std::endl;

    return 0;
}