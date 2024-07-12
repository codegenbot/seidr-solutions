#include <iostream>
#include <iomanip>

int main() {
    int hours;
    double snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        double snowmelt = melt * snow;
        snow = snow + static_cast<double>(rate) - snowmelt;
    }

    std::cout << std::fixed << std::setprecision(15) << std::setprecision(14) << snow << std::endl;

    return 0;
}