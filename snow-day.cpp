#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        snow = snow + rate - (melt * snow);
        snow = round(snow * 100000000000000) / 100000000000000; // Round off to 15 decimal places
    }

    std::cout << std::setprecision(15) << snow << std::endl;

    return 0;
}