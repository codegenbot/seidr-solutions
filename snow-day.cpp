#include <iostream>
#include <iomanip>

double calculateSnow(double hours, double initialSnow, double snowFallRate, double meltingRate) {
    double totalSnow = initialSnow;
    for(int i = 1; i <= hours; i++) {
        totalSnow += snowFallRate - (meltingRate * totalSnow);
    }
    return totalSnow;
}

int main() {
    double hours, initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    double finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << std::fixed << std::setprecision(14) << finalSnow << std::endl;

    return 0;
}