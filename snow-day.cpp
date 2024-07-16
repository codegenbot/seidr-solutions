```cpp
#include <iostream>

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float newTotalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        newTotalSnow += rateOfSnowfall - proportionOfMeltingPerHour * newTotalSnow;
    }
    return newTotalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;

    std::cout << "Enter number of hours: ";
    std::cin >> hours;
    std::cout << "Enter initial snow: ";
    std::cin >> initialSnow;
    std::cout << "Enter rate of snow fall: ";
    std::cin >> rateOfSnowfall;
    std::cout << "Enter proportion of melting per hour: ";
    std::cin >> proportionOfMeltingPerHour;

    float totalSnow = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour);
    std::cout << "Total snow after " << hours << " hours: " << totalSnow << std::endl;

    return 0;
}