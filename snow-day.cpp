#include <iostream>
#include <cmath>

int main() {
    int hours;
    float snow, rate, melt;

    std::cin >> hours >> snow >> rate >> melt;

    float snowOnGround = snow;

    for (int i = 0; i < hours; ++i) {
        snowOnGround = std::round((snowOnGround + rate - (snowOnGround * melt)) * 100000000) / 100000000;
    }

    std::cout << snowOnGround << std::endl;

    return 0;
}