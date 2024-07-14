```cpp
#include <iostream>

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
    int temp; 
    std::cin >> temp;
    hours = temp;

    std::cout << "Enter the initial amount of snow: ";
    int temp2; 
    std::cin >> temp2;
    initialSnow = temp2;

    std::cout << "Enter the rate of snow fall per hour: ";
    int temp3; 
    std::cin >> temp3;
    rateOfSnowFall = temp3;

    std::cout << "Enter the proportion of snow melting per hour: ";
    int temp4; 
    std::cin >> temp4;
    proportionOfSnowMeltingPerHour = temp4;

    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}