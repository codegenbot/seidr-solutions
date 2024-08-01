#include <iostream>

double snowDay(int hours, double initialSnow, double snowfallRate, double meltingRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; ++i) {
        if (initialSnow > 0 && i == 0) {
            totalSnow += initialSnow;
        } else {
            totalSnow += snowfallRate - meltingRate;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    double initialSnow, snowfallRate, meltingRate;
    std::cin >> initialSnow >> snowfallRate >> meltingRate;

    std::cout << std::fixed << std::setprecision(10) << snowDay(hours, initialSnow, snowfallRate, meltingRate);

    return 0;
}