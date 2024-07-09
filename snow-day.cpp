#include <iostream>

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionMelting;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionMelting;

    float calculatedSnow = (rateOfSnowFall * hours) + groundSnow;

    calculatedSnow -= calculatedSnow * proportionMelting / 100.0f;

    std::cout << std::fixed << std::setprecision(2) << calculatedSnow << std::endl;

    return 0;
}