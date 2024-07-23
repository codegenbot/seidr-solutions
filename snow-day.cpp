```cpp
#include <iostream>
#include <iomanip>
#include <string>

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
    std::string buffer;
    std::cout << "Enter hours: ";
    getline(std::cin, buffer); 
    hours = std::stoi(buffer);

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::cout << "Enter initial snow: ";
    getline(std::cin, buffer); 
    initialSnow = std::stof(buffer);
    std::cout << "Enter rate of snow fall: ";
    getline(std::cin, buffer); 
    rateOfSnowFall = std::stof(buffer);
    std::cout << "Enter proportion of snow melting per hour: ";
    getline(std::cin, buffer); 
    proportionOfSnowMeltingPerHour = std::stof(buffer);

    std::cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}