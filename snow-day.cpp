#include <iostream>
#include <cmath>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;

    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fall = snow_fall_rate;
        float snow_melt = snow_melt_rate * snow_on_ground;
        snow_on_ground += snow_fall - snow_melt;
    }

    std::cout << std::round(snow_on_ground * 1000000000000000) / 1000000000000000 << std::endl;

    return 0;
}