#include <iostream>

double calculateSnow(int hours, double initialSnow, double rateOfSnowFall, double proportionMelting) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall;
        snow -= snow * proportionMelting;
    }
    return snow;
}

int main() {
    int hours;
    double initialSnow, rateOfSnowFall, proportionMelting;
    std::cin >> hours >> initialSnow >> rateOfSnowFall >> proportionMelting;

    double finalSnow = calculateSnow(hours, initialSnow, rateOfSnowFall, proportionMelting);
    std::cout << finalSnow << std::endl;

    return 0;
}