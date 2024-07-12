#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        snow = std::round((snow + rate - (melt * snow)) * 1000000000000000) / 1000000000000000;
    }

    std::cout << std::fixed << std::setprecision(15) << snow << std::endl;

    return 0;
}