#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    double snow = initialSnow;
    
    for (int i = 0; i < hours; ++i) {
        snow += rateOfSnowfall;
        snow -= snow * proportionMelting / 100.0;
    }
    
    return snow;
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