```cpp
#include <iostream>
#include <iomanip>

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
    std::cin >> hours;

    std::cout << "Enter the initial amount of snow: ";
    std::cin >> std::fixed >> std::setprecision(6) >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour: ";
    std::cin >> std::fixed >> std::setprecision(6) >> rateOfSnowFall;

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> std::fixed >> std::setprecision(6) >> proportionOfSnowMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}