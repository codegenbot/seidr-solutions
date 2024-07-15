#include <iostream>
#include <iomanip>
#include <limits>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    for (int i = 0; i < hours; ++i) {
        groundSnow += rate - melt;
    }
    return groundSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    float groundSnow, rate, melt;
    std::cin >> groundSnow >> rate >> melt;
    std::cout << std::fixed << std::setprecision(10) << snowDay(hours, groundSnow, rate, melt) << std::endl;
    return 0;
}