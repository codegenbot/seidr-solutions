#include <iostream>

double calculateSnow(double hours, double snowOnGround, double rateOfSnowFall, double proportionOfMelting) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += rateOfSnowFall;
        snowOnGround -= snowOnGround * proportionOfMelting;
    }
    return snowOnGround;
}

int main() {
    double hours, snowOnGround, rateOfSnowFall, proportionOfMelting;
    std::cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfMelting;

    double finalSnow = calculateSnow(hours, snowOnGround, rateOfSnowFall, proportionOfMelting);
    std::cout << finalSnow << std::endl;

    return 0;
}