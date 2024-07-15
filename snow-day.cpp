```cpp
#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow -= proportionMelting * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMelting;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Enter the initial snow: ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall: ";
    std::cin >> rateOfSnowfall;

    std::cout << "Enter the proportion melting per hour: ";
    std::cin >> proportionMelting;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMelting);

    std::cout << "Total Snow after " << hours << " hours is: " << result << "\n";

    return 0;
}