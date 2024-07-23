```cpp
#include <iostream>
#include <cmath>

int main() {
    float totalSnow = groundSnow;

    int hours;
    std::cin >> hours;

    float groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    (std::cin >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour);

    totalSnow = groundSnow + rateOfSnowFall * hours - proportionOfSnowMeltingPerHour * totalSnow;

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << ".";

    return 0;
}