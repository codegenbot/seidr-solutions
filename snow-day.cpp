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

        double newSnow = rateOfSnowFall - meltingAmount;
        if (newSnow > 0) {
            groundSnow += newSnow; 
        }
        
        meltingAmount = groundSnow > 0 ? std::min(groundSnow, proportionOfSnowMeltingPerHour) : 0;
        groundSnow -= meltingAmount;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: ";
    std::cout << std::setprecision(10) << groundSnow << std::endl;

    return 0;
}