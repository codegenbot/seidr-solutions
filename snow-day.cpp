#include <iostream>
#include <cmath>

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;

    for (int i = 0; i < hours; i++) {
        totalSnow = totalSnow + rateOfSnowFall - (totalSnow * proportionOfSnowMeltingPerHour);
    }

    return totalSnow;
}

int main() {
    double totalSnow = snowDay(5, 10.0f, 2.0f, 0.1f);
    std::cout << "Total Snow: " << totalSnow << std::endl;
    return 0;
}