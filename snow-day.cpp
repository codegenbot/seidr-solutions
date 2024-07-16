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
    std::string input;
    int hours;
    float initialSnow, rateOfSnowFall, meltingRate;

    std::cout << "Enter number of hours: ";
    std::cin >> input;
    hours = stoi(input);
    
    std::cout << "Enter initial snow (inches): ";
    std::cin >> input;
    initialSnow = stof(input);

    std::cout << "Enter rate of snow fall per hour (inches): ";
    std::cin >> input;
    rateOfSnowFall = stof(input);

    std::cout << "Enter melting rate per hour (proportion): ";
    std::cin >> input;
    meltingRate = stof(input);

    float result = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);

    std::cout << "Amount of snow on ground after " << hours << " hours: " << result << " inches.\n";

    return 0;
}