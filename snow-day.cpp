#include <iostream>
#include <cmath>

float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    float current_snow = initial_snow;
    for (int i = 0; i < hours; i++) {
        current_snow += rate_of_snowfall;
        current_snow -= floor(current_snow * proportion_of_melting);
    }
    return current_snow;
}

int main() {
    int hours;
    float initial_snow, rate_of_snowfall, proportion_of_melting;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial snow: ";
    std::cin >> initial_snow;
    std::cout << "Enter the rate of snowfall: ";
    std::cin >> rate_of_snowfall;
    std::cout << "Enter the proportion of melting: ";
    std::cin >> proportion_of_melting;
    float current_snow = snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting);
    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << current_snow;
    return 0;
}