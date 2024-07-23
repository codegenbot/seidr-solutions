#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        snow += snow_fall_rate - snow * snow_melt_rate;
    }

    std::cout << snow << std::endl;

    return 0;
}