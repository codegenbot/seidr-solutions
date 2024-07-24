#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    std::cout << std::fixed << std::setprecision(15);

    for (int i = 0; i < hours; ++i) {
        float snowfall = rate - (snow * melt);
        float rounded_snowfall = std::round(snowfall * 1000000000000.0) / 1000000000000.0;
        snow = snow + rounded_snowfall;
    }

    std::cout << snow << std::endl;

    return 0;
}