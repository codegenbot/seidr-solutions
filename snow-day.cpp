```
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

    std::cout << "Enter the initial snow (in cm): ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour (in cm/h): ";
    std::cin >> rateOfSnowfall;

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionMelting;

    double totalSnow = snowDay(hours, initialSnow, rateOfSnowfall, proportionMelting);
    std::cout << "Total snow on the ground after " << hours << " hours is: " << totalSnow << " cm.\n";
    
    return 0;
}