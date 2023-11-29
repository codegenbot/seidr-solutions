#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate;
        initialSnow -= snowFallRate * snowMeltRate;
    }
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial snow amount: ";
    std::cin >> initialSnow;
    std::cout << "Enter the snow fall rate: ";
    std::cin >> snowFallRate;
    std::cout << "Enter the snow melt rate: ";
    std::cin >> snowMeltRate;

    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);

    std::cout << "The amount of snow after " << hours << " hours is: " << finalSnow << std::endl;

    return 0;
}