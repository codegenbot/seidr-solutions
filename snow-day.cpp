#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        float snowmelt = melt * snow;
        snow = snow + rate - snowmelt;
        snow = int(snow * 1e9 + 0.5) / 1e9;
    }

    std::cout << std::fixed << std::setprecision(15) << snow << std::endl;

    return 0;
}