#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += initialSnow + rateOfSnowfall - proportionMelting * totalSnow;
        totalSnow *= (1-proportionMelting);
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMelting;
    std::cin >> initialSnow >> rateOfSnowfall >> proportionMelting;
    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMelting);
    std::cout << result << std::endl;
    return 0;
}