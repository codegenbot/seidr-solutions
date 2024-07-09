```cpp
#include <iostream>
#include <iomanip>

int main() {
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    double initialSnow;
    std::cout << "Enter the initial snow on the ground (in feet): ";
    std::cin >> initialSnow;

    double rateOfSnowFall;
    std::cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    std::cin >> rateOfSnowFall;

    double proportionOfSnowMeltingPerHour;
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionOfSnowMeltingPerHour;

    double totalSnow = initialSnow;

    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= initialSnow * proportionOfSnowMeltingPerHour;
    }

    std::cout << std::fixed << std::setprecision(6) << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << std::endl;

    return 0;
}