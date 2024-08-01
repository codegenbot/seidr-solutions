#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall - meltingRate;
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfFall, meltingRate;
    std::cin >> initialSnow >> rateOfFall >> meltingRate;
    double result = snowDay(hours, initialSnow, rateOfFall, meltingRate);
    std::cout << result << "\n";
    return 0;
}