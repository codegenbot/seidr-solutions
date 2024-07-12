#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float snow_fallen = snow_fall_rate - snow_melt_rate * snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        float temp_snow_fallen = snow_fallen;
        float temp_snow_remaining = snow_on_ground + temp_snow_fallen;
        snow_on_ground = (temp_snow_remaining < 0) ? 0 : temp_snow_remaining;
        snow_fallen = snow_fall_rate - snow_melt_rate * snow_on_ground;
    }

    std::cout << std::fixed << std::setprecision(9) << snow_on_ground << std::endl;

    return 0;
}