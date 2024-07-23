#include <iostream>
#include <iomanip>

int main() {
    int hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 1; i <= hours; i++) {
        groundSnow += rateOfSnowFall;
        groundSnow -= std::min(groundSnow, proportionOfSnowMeltingPerHour);
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << std::setprecision(10) << groundSnow;

    return 0;
}