#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;

    std::cin >> hours >> snow >> rate >> melt;

    float snowOnGround = snow;

    for (int i = 0; i < hours; ++i) {
        float newSnow = snowOnGround + rate - (snowOnGround * melt);
        snowOnGround = newSnow;
    }

    std::cout << snowOnGround << std::endl;

    return 0;
}