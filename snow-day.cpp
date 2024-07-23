#include <iostream>

int main() {
    int hours;
    double totalSnow = 0.0, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 1; i <= hours; i++) {
        double newSnow = rateOfSnowFall - proportionOfSnowMeltingPerHour;
        totalSnow += newSnow;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;

    return 0;
}