#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionMelting;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionMelting;

    for (int h = 0; h < hours; ++h) {
        groundSnow += rateOfSnowFall - groundSnow * proportionMelting / 100.0f;
    }

    std::cout << std::fixed << std::setprecision(9) << groundSnow << std::endl;

    return 0;
}