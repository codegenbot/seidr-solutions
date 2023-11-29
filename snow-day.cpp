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
    std::cout << "Enter initial snow depth: ";
    std::cin >> initialSnow;
    std::cout << "Enter snow fall rate: ";
    std::cin >> snowFallRate;
    std::cout << "Enter snow melt rate: ";
    std::cin >> snowMeltRate;

    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << "Final snow depth after " << hours << " hours: " << finalSnow << std::endl;

    return 0;
}