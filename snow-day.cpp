```cpp
#include <iostream>
#include <iomanip>

int main() {
    int hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    // Add initial snowfall to total snow
    groundSnow += rateOfSnowFall;

    for (int i = 1; i <= hours; i++) {
        groundSnow += rateOfSnowFall;
        groundSnow -= std::min(groundSnow, proportionOfSnowMeltingPerHour);
    }

    // Remove the initial addition of rateOfSnowFall
    groundSnow -= rateOfSnowFall;

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << std::setprecision(10) << groundSnow;

    return 0;
}