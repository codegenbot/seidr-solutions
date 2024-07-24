#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;

    std::cin >> hours >> snow >> rate >> melt;

    float snowOnGround = snow;

    for (int i = 0; i < hours; ++i) {
        float snowfall = rate - (snowOnGround * melt);
        snowOnGround += snowfall;
    }

    std::cout << snowOnGround << std::endl;

    return 0;
}