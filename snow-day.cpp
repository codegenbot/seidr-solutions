#include <iostream>

double snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    double totalSnow = 0.0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (totalSnow > groundSnow) {
            totalSnow -= (totalSnow - groundSnow);
        } else {
            totalSnow -= meltRate * totalSnow;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    float groundSnow, rateOfFall, meltRate;
    std::cin >> groundSnow >> rateOfFall >> meltRate;
    double result = snowDay(hours, groundSnow, rateOfFall, meltRate);
    std::cout << result << std::endl;
    return 0;
}