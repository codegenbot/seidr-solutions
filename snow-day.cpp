#include <iostream>
#include <iomanip>

int main() {
    int hours;
    long double snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        snow = snow + static_cast<long double>(rate) * (1 - static_cast<long double>(melt));
    }

    std::cout << std::fixed << std::setprecision(15) << snow << std::endl;

    return 0;
}