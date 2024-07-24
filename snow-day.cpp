#include <iostream>

int main() {
    double hours, snow, rate, melt;

    std::cin >> hours >> snow >> rate >> melt;

    double snowOnGround = snow;

    for (int i = 0; i < hours; ++i) {
        snowOnGround = snowOnGround + rate - (snowOnGround * melt);
    }

    std::cout << snowOnGround << std::endl;

    return 0;
}