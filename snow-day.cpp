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
    char buffer[256];
    std::cout << "Enter hours: ";
    std::cin >> buffer;
    std::string hoursStr = buffer;
    hours = std::stoi(hoursStr);

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::cout << "Enter initial snow: ";
    std::cin >> buffer;
    std::string initialSnowStr = buffer;
    initialSnow = std::stof(initialSnowStr);
    std::cout << "Enter rate of snow fall: ";
    std::cin >> buffer;
    std::string rateOfSnowFallStr = buffer;
    rateOfSnowFall = std::stof(rateOfSnowFallStr);
    std::cout << "Enter proportion of snow melting per hour: ";
    std::cin >> buffer;
    std::string proportionOfSnowMeltingPerHourStr = buffer;
    proportionOfSnowMeltingPerHour = std::stof(proportionOfSnowMeltingPerHourStr);

    std::cout << fixed << std::setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}