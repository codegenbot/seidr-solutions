#include <iostream>

double snowDay(int hours, float snowGround, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (i == 0) {
            totalSnow += snowGround + rateOfSnowFall;
        } else {
            totalSnow += rateOfSnowFall - proportionMeltingPerHour * snowGround;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;

    float snowGround, rateOfSnowFall, proportionMeltingPerHour;
    std::cin >> snowGround >> rateOfSnowFall >> proportionMeltingPerHour;

    double result = snowDay(hours, snowGround, rateOfSnowFall, proportionMeltingPerHour);

    std::cout << std::setprecision(10) << result << std::endl;

    return 0;
}