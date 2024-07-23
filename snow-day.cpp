```cpp
#include <iostream>
#include <iomanip>
#include <sstream>

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
    std::stringstream buffer;
    buffer << initialSnow;
    buffer >> buffer.str();
    initialSnow = std::stof(buffer.str());
    
    std::cout << "Enter rate of snow fall: ";
    buffer.str("");
    buffer << rateOfSnowFall;
    buffer >> buffer.str();
    rateOfSnowFall = std::stof(buffer.str());
    
    std::cout << "Enter proportion of snow melting per hour: ";
    buffer.str("");
    buffer << proportionOfSnowMeltingPerHour;
    buffer >> buffer.str();
    proportionOfSnowMeltingPerHour = std::stof(buffer.str());

    std::cout << fixed << std::setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}