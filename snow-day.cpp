```cpp
#include <iostream>
#include <string>

float snowAfterHours(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall;
        if (currentSnow > 0)
            currentSnow -= meltingRate;
        else
            currentSnow = 0;
    }
    return currentSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, meltingRate;

    std::cout << "Enter number of hours: ";
    std::cin >> hours;
    std::cout << "Enter initial snow (inches): ";
    std::cin >> initialSnow;
    std::cout << "Enter rate of snow fall per hour (inches): ";
    std::cin >> rateOfSnowFall;
    std::cout << "Enter melting rate per hour (proportion): ";
    std::cin >> meltingRate;

    float result = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);

    std::cout << "Amount of snow on ground after " << std::to_string(hours) << " hours: " << std::to_string(result) << " inches.\n";

    return 0;
}