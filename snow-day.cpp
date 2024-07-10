#include <iostream>
#include <algorithm>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float original_snow_on_ground = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        float melted_snow = original_snow_on_ground * snow_melt_rate;
        snow_on_ground -= std::min(snow_on_ground, melted_snow);
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}