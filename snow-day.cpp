#include <iostream>
#include <iomanip>

int main() {
    int hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    double groundSnow = 0;
    for (int i = 1; i <= hours; i++) {
        double newSnowAmount = groundSnow + rateOfSnowFall - std::min(groundSnow, proportionOfSnowMeltingPerHour);
        groundSnow = newSnowAmount > 0 ? newSnowAmount : 0;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << std::setprecision(10) << groundSnow;

    return 0;
}