#include <iostream>

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        totalSnow -= totalSnow * meltRate;
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rate, meltRate;
    std::cin >> initialSnow >> rate >> meltRate;
    double result = snowDay(hours, initialSnow, rate, meltRate);
    std::cout << result << std::endl;
    return 0;
}