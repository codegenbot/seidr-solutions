```c++
#include <iostream>

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow;
    std::cin >> initialSnow;
    float rateOfSnowfall;
    std::cin >> rateOfSnowfall;
    float proportionOfMeltingPerHour;
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