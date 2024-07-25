#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float new_snow_on_ground = snow_on_ground + snow_fall_rate - (snow_on_ground * snow_melt_rate);
        snow_on_ground = std::round(new_snow_on_ground * 100000000000000) / 100000000000000;  // Rounding up to 15 decimal places
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}