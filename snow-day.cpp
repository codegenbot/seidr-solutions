#include <iostream>

double snowDay(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowfallRate - meltingRate;
    }
    return snow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, snowfallRate, meltingRate;
    std::cin >> initialSnow >> snowfallRate >> meltingRate;
    double result = snowDay(hours, initialSnow, snowfallRate, meltingRate);
    std::cout << result << std::endl;
    return 0;
}