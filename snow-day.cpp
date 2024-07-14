```cpp
#include <iostream>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float result = initialSnow;
    float snowAdded = rateOfSnowFall / 100.0f;
    for (int i = 0; i < hours; i++) {
        float snowMelted = proportionOfSnowMeltingPerHour * result;
        result += snowAdded - snowMelted;
        if(result < 0) {
            result = 0.0f;
        }
        snowAdded *= rateOfSnowFall / 100.0f;
    }
    return result;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter number of hours: ";
    std::cin >> hours;

    std::cout << "Enter initial snow on ground (in cm): ";
    std::cin >> initialSnow;

    std::cout << "Enter rate of snow fall per 100 people (as a percentage): ";
    std::cin >> rateOfSnowFall;

    std::cout << "Enter proportion of snow melting per hour (as a percentage): ";
    std::cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall / 100.0f, proportionOfSnowMeltingPerHour / 100.0f);

    std::cout << "Amount of snow on the ground after " << hours << " hours: " << result << " cm" << std::endl;

    return 0;
}