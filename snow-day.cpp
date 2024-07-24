```cpp
#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionOfSnowMeltingPerHour);
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cout << "Enter hours: ";
    std::cin >> hours;

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    
    std::cout << "Enter initial snow: ";
    std::cin >> std::ws; 
    std::getline(std::cin, std::to_string(initialSnow));
    
    std::cout << "Enter rate of snow fall: ";
    std::cin >> std::ws; 
    std::getline(std::cin, std::to_string(rateOfSnowFall));

    std::cout << "Enter proportion of snow melting per hour: ";
    std::cin >> std::ws; 
    std::getline(std::cin, std::to_string(proportionOfSnowMeltingPerHour));

    std::cout << fixed << setprecision(6) << "Result: " << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}