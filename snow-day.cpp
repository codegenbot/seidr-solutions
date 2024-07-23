#include <iostream>

int main() {
    int hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    double totalSnow = 0.0;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 1; i <= hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;

    return 0;
}