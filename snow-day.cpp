#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float new_snow_on_ground = snow_on_ground + (snow_fall_rate - snow_on_ground * snow_melt_rate);
        snow_on_ground = new_snow_on_ground;
    }

    std::cout << std::fixed << std::setprecision(14) << snow_on_ground << '\n';

    return 0;
}