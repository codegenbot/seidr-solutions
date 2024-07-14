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
    int hours, rate, proportion;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial amount of snow: ";
    float initialSnow;
    std::cin >> initialSnow;
    std::cout << "Enter the rate of snow fall per hour: ";
    std::cin >> rate; 
    float rateOfSnowFall = static_cast<float>(rate);
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportion; 
    float proportionOfSnowMeltingPerHour = static_cast<float>(proportion);

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}