```c++
#include <iostream>
double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;

    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
    }

    return totalSnow;
}

int main() {
    std::cout << "Total snow after " << snowDay(3, 10.0f, 0.5f, 0.2f) << " hours: ";
    std::cout << std::endl;
    return 0;
}