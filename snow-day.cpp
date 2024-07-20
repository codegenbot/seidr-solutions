#include <iostream>
#include <cmath>

int main() {
    int hours = 0; 
    float initialSnow = 0.0f;
    float rateOfFall = 0.0f;
    float meltRate = 0.0f;

    std::cout << "Enter hours: ";
    std::cin >> hours;
    std::cout << "Enter initial snow: ";
    std::cin >> initialSnow;
    std::cout << "Enter rate of fall: ";
    std::cin >> rateOfFall;
    std::cout << "Enter melt rate (as a percentage): ";
    std::cin >> meltRate;

    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow *= (1 - meltRate / 100.0);
    }
    std::cout << "Result: " << snow << std::endl;

    return 0;
}