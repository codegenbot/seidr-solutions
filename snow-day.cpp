```c++
#include <iostream>

int main() {
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    float initialSnow;
    std::cout << "Enter the initial amount of snow on the ground: ";
    std::cin >> initialSnow;

    float rateOfSnowfall;
    std::cout << "Enter the rate of snow fall: ";
    std::cin >> rateOfSnowfall;

    float proportionOfMeltingPerHour;
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> proportionOfMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float newTotalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        newTotalSnow += rateOfSnowfall - proportionOfMeltingPerHour * newTotalSnow;
    }
    return newTotalSnow;
}