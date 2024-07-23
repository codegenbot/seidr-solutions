#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float initial_snow = snow_on_ground;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        initial_snow = initial_snow + snow_fall_rate - (initial_snow * snow_melt_rate);
    }

    std::cout << initial_snow << std::endl;

    return 0;
}