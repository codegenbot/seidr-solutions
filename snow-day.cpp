```cpp
#include <iostream>
#include <cmath>
#include <sstream>

int main() {
    float totalSnow = 0;

    int hours;
    std::cin >> hours;

    std::string groundSnowStr, rateOfSnowFallStr, proportionOfSnowMeltingPerHourStr;
    (std::cin >> groundSnowStr >> rateOfSnowFallStr >> proportionOfSnowMeltingPerHourStr);

    float groundSnow = stof(groundSnowStr);
    float rateOfSnowFall = stof(rateOfSnowFallStr);
    float proportionOfSnowMeltingPerHour = stof(proportionOfSnowMeltingPerHourStr);

    for (int i = 0; i < hours; ++i) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << ".";

    return 0;
}