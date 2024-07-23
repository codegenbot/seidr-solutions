#include <iostream>
#include <iomanip>

int main() {
    int hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 1; i <= hours; i++) {
        double meltingAmount = groundSnow > 0 ? std::min(groundSnow, proportionOfSnowMeltingPerHour) : 0;
        groundSnow -= meltingAmount;
        if (groundSnow >= 0) { 
            groundSnow += rateOfSnowFall;
        }
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << std::setprecision(10) << groundSnow;

    return 0;
}