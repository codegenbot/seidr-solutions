#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        float snowmelt = melt * snow;
        float snow_update = snow + rate - snowmelt;
        snow = snow_update; // Update snow value once per hour
    }

    std::cout << std::fixed << std::setprecision(15) << snow << std::endl;

    return 0;
}