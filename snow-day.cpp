#include <iostream>

double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate - meltPerHour;
        if (totalSnow > 0) {
            totalSnow -= meltPerHour;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltPerHour;

    std::cout << "Enter number of hours: ";
    std::cin >> hours;

    std::cout << "Enter initial amount of snow: ";
    std::cin >> initialSnow;

    std::cout << "Enter rate of snow fall per hour: ";
    std::cin >> snowFallRate;

    std::cout << "Enter proportion of snow melting per hour: ";
    std::cin >> meltPerHour;

    double result = snowDay(hours, initialSnow, snowFallRate, meltPerHour);
    std::cout << "Total snow after " << hours << " hours: " << result << std::endl;
    return 0;