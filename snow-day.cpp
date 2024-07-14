```cpp
#include <iostream>
#include <limits>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        float snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        totalSnow += snowThisHour > 0 ? snowThisHour : 0; 
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    while (!(std::cin >> hours)) {
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter numeric values." << std::endl;
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the invalid input
        }
        else {
            break;
        }
    }

    if (!(std::cin)) {
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
        return 1; 
    }

    std::cout << "Enter the initial amount of snow: ";
    while (!(std::cin >> initialSnow)) {
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter numeric values." << std::endl;
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the invalid input
        }
        else {
            break;
        }
    }

    if (!(std::cin)) {
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
        return 1; 
    }

    std::cout << "Enter the rate of snow fall per hour: ";
    while (!(std::cin >> rateOfSnowFall)) {
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter numeric values." << std::endl;
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the invalid input
        }
        else {
            break;
        }
    }

    if (!(std::cin)) {
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
        return 1; 
    }

    std::cout << "Enter the proportion of snow melting per hour: ";
    while (!(std::cin >> proportionOfSnowMeltingPerHour)) {
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter numeric values." << std::endl;
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the invalid input
        }
        else {
            break;
        }
    }

    if (!(std::cin)) {
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
        return 1; 
    }

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}