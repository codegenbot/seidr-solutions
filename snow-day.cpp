```cpp
#include <iostream>
#include <limits>

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        double snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        totalSnow += snowThisHour > 0 ? snowThisHour : 0; 
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    if (!(std::cin >> hours)) {
        std::cerr << "Invalid input for hours. Exiting.\n";
        return 1;
    }

    std::cout << "Enter the initial amount of snow: ";
    if (!(std::cin >> initialSnow)) {
        std::cerr << "Invalid input for initial snow. Exiting.\n";
        return 1;
    }

    std::cout << "Enter the rate of snow fall per hour: ";
    if (!(std::cin >> rateOfSnowFall)) {
        std::cerr << "Invalid input for rate of snow fall. Exiting.\n";
        return 1;
    }

    std::cout << "Enter the proportion of snow melting per hour: ";
    if (!(std::cin >> proportionOfSnowMeltingPerHour)) {
        std::cerr << "Invalid input for proportion of snow melting. Exiting.\n";
        return 1;
    }

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}