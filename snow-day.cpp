#include <iostream>

int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, proportionOfMelting;
    std::cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfMelting;

    for (int i = 0; i < hours; ++i) {
        snowOnGround += rateOfSnowFall;
        snowOnGround -= snowOnGround * proportionOfMelting;
    }

    std::cout << snowOnGround << '\n';

    return 0;
}