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
    std::cout << "Enter hours: ";
    std::cin >> std::setw(0) >> hours;

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::string buffer;
    std::cout << "Enter initial snow: ";
    std::cin >> std::setw(0) >> buffer;
    initialSnow = stof(buffer);

    std::cout << "Enter rate of snow fall: ";
    std::cin >> std::setw(0) >> buffer;
    rateOfSnowFall = stof(buffer);

    std::cout << "Enter proportion of snow melting per hour: ";
    std::cin >> std::setw(0) >> buffer;
    proportionOfSnowMeltingPerHour = stof(buffer);

    std::cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}