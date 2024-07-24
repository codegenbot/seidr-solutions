#include <iostream>

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfFall;
        groundSnow -= meltingPerHour * groundSnow;
        totalSnow = max(totalSnow, groundSnow);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    float groundSnow, rateOfFall, meltingPerHour;
    std::cin >> groundSnow >> rateOfFall >> meltingPerHour;

    std::cout << std::fixed << std::setprecision(12) << snowDay(hours, groundSnow, rateOfFall, meltingPerHour) << std::endl;

    return 0;
}