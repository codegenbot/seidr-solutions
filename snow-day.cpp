#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int hours;
    long double snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        long double snowmelt = melt * snow;
        snow = std::round(snow + rate - snowmelt);
    }

    std::cout << std::fixed << std::setprecision(15) << snow << std::endl;

    return 0;
}