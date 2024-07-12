#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        float snowmelt = melt * snow;
        snow = snow + rate - snowmelt;
    }

    std::cout << std::fixed << std::setprecision(15) << std::fixed << snow << std::endl;

    return 0;
}