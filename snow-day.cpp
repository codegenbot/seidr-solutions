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
    initialSnow = stof(buffer.str());

    
    std::cout << "Enter rate of snow fall: ";
    buffer.clear();
    buffer << rateOfSnowFall;
    rateOfSnowFall = stof(buffer.str());
    
    std::cout << "Enter proportion of snow melting per hour: ";
    buffer.clear();
    buffer << proportionOfSnowMeltingPerHour;
    proportionOfSnowMeltingPerHour = stof(buffer.str());

    std::cout << fixed << std::setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}