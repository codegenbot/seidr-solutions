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

    std::cout << "Enter the number of hours (int): ";
    std::cin >> hours;

    std::cout << "Enter the initial amount of snow (float): ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour (float): ";
    std::cin >> rateOfSnowFall;

    std::cout << "Enter the proportion of snow melting per hour (float): ";
    std::cin >> proportionOfSnowMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << std::fixed << std::setprecision(2) << result << "\n";

    return 0;
}