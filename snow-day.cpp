#include <iostream>
#include <cmath>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;

    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fall = snow_fall_rate;
        float snow_melt = std::ceil(snow_melt_rate * snow_on_ground); // Round up to nearest integer
        snow_on_ground += snow_fall - snow_melt;
        if (snow_on_ground < 0) {
            snow_on_ground = 0;
        }
    }

    std::cout.precision(17);
    std::cout << snow_on_ground << std::endl;

    return 0;
}