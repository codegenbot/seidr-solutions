#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        float melted_snow = snow_melt_rate * snow_on_ground;
        snow_melt_rate = melted_snow / snow_on_ground;
        snow_on_ground -= melted_snow;
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}