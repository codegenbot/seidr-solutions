#include <iostream>

double snowDay(int hours, double groundSnow, double rateOfSnowFall, double proportionMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionMeltingPerHour * groundSnow;
        groundSnow = totalSnow;
    }
    return groundSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    double groundSnow, rateOfSnowFall, proportionMeltingPerHour;
    std::cin >> groundSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    std::cout << snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour) << std::endl;
    return 0;
}