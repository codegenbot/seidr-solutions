#include <iostream>
#include <iomanip>

int main() {
    double current_snow, snow_fall_rate, snow_melt_rate;
    double snow_melted;
    int hours;
    std::cin >> current_snow >> snow_fall_rate >> snow_melt_rate >> hours;

    for (int i = 0; i < hours; i++) {
        snow_melted = snow_melt_rate * current_snow;
        current_snow = current_snow + snow_fall_rate - snow_melted;
    }

    std::cout << std::fixed << std::setprecision(15) << current_snow << std::endl;

    return 0;
}