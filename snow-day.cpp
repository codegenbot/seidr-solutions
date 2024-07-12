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
    float initialSnow;
    float snowFallRate;
    float meltPerHour;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    
    std::cout << "Enter the initial amount of snow on the ground (in feet): ";
    std::cin >> initialSnow;
    
    std::cout << "Enter the rate at which snow falls per hour (in feet/hour): ";
    std::cin >> snowFallRate;
    
    std::cout << "Enter the proportion of snow that melts per hour: ";
    std::cin >> meltPerHour;

    double result = snowDay(hours, initialSnow, snowFallRate, meltPerHour);
    std::cout << "Total snow after " << hours << " hours: " << result << std::endl;
    return 0;