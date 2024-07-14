#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    double snow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow *= (1 - proportionMelting);
    }
    
    return snow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfFall, proportionMelting;
    std::cin >> initialSnow >> rateOfFall >> proportionMelting;
    double result = snowDay(hours, initialSnow, rateOfFall, proportionMelting);
    std::cout << result << std::endl;
    
    return 0;
}