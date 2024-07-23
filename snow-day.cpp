#include <iostream>

int main() {
    int hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 1; i <= hours; i++) {
        groundSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << groundSnow;

    return 0;
}