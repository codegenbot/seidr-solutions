#include <iostream>

int main() {
    float totalSnow = 0;

    int hours;
    std::cin >> hours;

    float groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    (std::cin >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour);

    for (int hour = 0; hour < hours; hour++) {
        totalSnow = std::ceil(totalSnow + rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow);
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << ".";

    return 0;
}