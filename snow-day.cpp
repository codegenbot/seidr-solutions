#include <iostream>
#include <iomanip>

int main() {
    double current_snow, snow_fall_rate, snow_melt_rate;
    double hours;
    std::cin >> current_snow >> snow_fall_rate >> snow_melt_rate >> hours;

    for (double i = 1; i <= hours; i++) {
        current_snow = current_snow + snow_fall_rate - (snow_melt_rate * current_snow);
    }

    std::cout << std::fixed << std::setprecision(6) << current_snow << std::endl;

    return 0;
}