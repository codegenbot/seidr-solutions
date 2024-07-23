```cpp
#include <iostream>

int main() {
    int hours;
    double totalSnow = 0.0, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall * groundSnow - proportionOfSnowMeltingPerHour * totalSnow;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;

    return 0;
}