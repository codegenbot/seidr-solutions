#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfFall, float meltingPerHour) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow -= meltingPerHour * snow;
    }
    return snow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfFall, meltingPerHour;
    std::cin >> initialSnow >> rateOfFall >> meltingPerHour;
    double result = snowDay(hours, initialSnow, rateOfFall, meltingPerHour);
    std::cout << result << "\n";
    return 0;
}