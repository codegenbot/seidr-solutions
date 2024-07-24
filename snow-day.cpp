#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;

    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 1; i <= hours; ++i) {
        float snow_fall_increment = snow_fall_rate;
        float snow_melt_increment = snow_melt_rate;
        float net_snow_change = snow_fall_increment - snow_melt_increment;
        snow_on_ground += net_snow_change;
        if (snow_on_ground < 0) {
            snow_on_ground = 0;
        }
    }

    std::cout.precision(17);
    std::cout << snow_on_ground << std::endl;

    return 0;
}