```cpp
#include <iostream>
#include <string>
#include <cstdlib>

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        double snowThisHour = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        totalSnow += snowThisHour > 0 ? snowThisHour : 0; 
    }
    
    return totalSnow;
}

int main() {
    char temp[256]; // temporary storage for user input
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    fgets(temp, sizeof(temp), stdin); 
    hours = atoi(temp);

    if (hours < 0) {
        std::cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    std::cout << "Enter the initial amount of snow: ";
    fgets(temp, sizeof(temp), stdin); 
    initialSnow = atof(temp);

    if (initialSnow < 0) {
        std::cout << "Invalid input. Please enter a non-negative number.\n";
        return 1;
    }

    std::cout << "Enter the rate of snow fall per hour: ";
    fgets(temp, sizeof(temp), stdin); 
    rateOfSnowFall = atof(temp);

    if (rateOfSnowFall < 0) {
        std::cout << "Invalid input. Please enter a non-negative number.\n";
        return 1;
    }

    std::cout << "Enter the proportion of snow melting per hour: ";
    fgets(temp, sizeof(temp), stdin); 
    proportionOfSnowMeltingPerHour = atof(temp);

    if (proportionOfSnowMeltingPerHour < 0) {
        std::cout << "Invalid input. Please enter a non-negative number.\n";
        return 1;
    }

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}