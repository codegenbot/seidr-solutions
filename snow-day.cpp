```cpp
#include <iostream>
#include <string>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        initialSnow += (rateOfSnowFall / 100.0f) - initialSnow * proportionOfSnowMeltingPerHour;
    }
    
    return initialSnow;
}

int main() {
    char input[256];
    std::cout << "Enter the number of hours: ";
    cin.getline(input, 256);
    int hours = atoi(input);
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cout << "Enter the initial amount of snow: ";
    cin >> initialSnow;
    std::cout << "Enter the rate of snow fall (in %): ";
    cin >> rateOfSnowFall;
    std::cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall / 100.0f, proportionOfSnowMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << std::endl;

    return 0;
}