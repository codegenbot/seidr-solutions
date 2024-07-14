```cpp
#include <iostream>
#include <string>

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        double snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        totalSnow += snowThisHour > 0 ? snowThisHour : 0; // ensure no negative snow
    }
    
    return totalSnow;
}

int main() {
    int hoursStr;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    if (!(std::cin >> hoursStr)) {
        std::cerr << "Invalid input for hours. Please try again.\n";
        return 1; 
    }
    int hours = hoursStr; 

    std::cout << "Enter the initial amount of snow: ";
    if (!(std::cin >> initialSnow)) {
        std::cerr << "Invalid input for initial snow. Please try again.\n";
        return 1; 
    }

    std::cout << "Enter the rate of snow fall per hour: ";
    if (!(std::cin >> rateOfSnowFall)) {
        std::cerr << "Invalid input for rate of snow fall. Please try again.\n";
        return 1; 
    }

    std::cout << "Enter the proportion of snow melting per hour: ";
    if (!(std::cin >> proportionOfSnowMeltingPerHour)) {
        std::cerr << "Invalid input for proportion of snow melting. Please try again.\n";
        return 1; 
    }

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}