```c++
#include <iostream>
#include <iomanip>

double snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    double totalSnow = initialSnow;
    for (int i = 1; i <= hours; ++i) {
        totalSnow += rateOfFall - proportionMelting * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfFall, proportionMelting;
    std::cin >> initialSnow >> rateOfFall >> proportionMelting;
    double result = snowDay(hours, initialSnow, rateOfFall, proportionMelting);
    std::cout << std::fixed << std::setiosflags(std::ios_base::floatfield, std::showpoint | std::fixed) << result << "\n";
    return 0;
}