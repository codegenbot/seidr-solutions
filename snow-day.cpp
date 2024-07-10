```cpp
#include <iostream>
#include <iomanip>

int main() {
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;  

    double initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour; 
    std::cout << "Enter the total amount of snow initially (in feet): ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    std::cin >> rateOfSnowFall;

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionOfSnowMeltingPerHour;

    double totalSnow = initialSnow;  // Declare and initialize totalSnow

    for (int i = 0; i < hours; i++) {
        std::cout << "Before calculation: initialSnow=" << initialSnow << ", rateOfSnowFall=" << rateOfSnowFall << ", proportionOfSnowMeltingPerHour=" << proportionOfSnowMeltingPerHour << std::endl;
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow;
    }
    
    std::cout << std::fixed << std::setprecision(10);  
    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << std::endl;
    return 0;
}