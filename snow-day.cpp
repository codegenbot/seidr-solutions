#include <iostream>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        double net_snow_change = snow_fall_rate - snow_melt_rate;
        snow_on_ground += net_snow_change;
        if (snow_on_ground < 0) {
            snow_on_ground = 0;
        }
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}