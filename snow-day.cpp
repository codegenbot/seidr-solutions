#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionMelting;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionMelting;

    float calculatedSnow = groundSnow;

    for(int i = 1; i <= hours; i++) {
        float newSnow = calculatedSnow + rateOfSnowFall;
        while(std::abs(newSnow - calculatedSnow) > 0.00001f) {
            calculatedSnow = newSnow;
            newSnow = calculatedSnow + rateOfSnowFall;
            calculatedSnow -= calculatedSnow * proportionMelting / 100.0f;
        }
    }

    std::cout << std::fixed << std::setprecision(2) << calculatedSnow << std::endl;

    return 0;
}