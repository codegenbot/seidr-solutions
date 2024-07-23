#include <iostream>

int main() {
    int hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    double totalSnow = 0.0;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 1; i <= hours; i++) {
        groundSnow += rateOfSnowFall * i - proportionOfSnowMeltingPerHour * i;
    }

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << groundSnow;

    return 0;
}