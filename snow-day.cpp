```cpp
#include <iostream>
#include <iomanip>

int main() {
    int hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 1; i <= hours; i++) {
        double meltingAmount = groundSnow > 0 ? std::min(groundSnow, proportionOfSnowMeltingPerHour) : 0;
        groundSnow -= meltingAmount;

        if (rateOfSnowFall > 0) { 
            // add new snow for the next hour
            groundSnow += rateOfSnowFall; 
        }
        
        double newSnow = rateOfSnowFall - meltingAmount;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << std::setprecision(10) << groundSnow;

    return 0;
}