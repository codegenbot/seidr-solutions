#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        float snowmelt = melt * snow;
        snow = std::abs(snow + rate - snowmelt) < std::numeric_limits<float>::epsilon() ? 0 : snow + rate - snowmelt;
    }

    std::cout << std::fixed << std::setprecision(15) << snow << std::endl;

    return 0;
}