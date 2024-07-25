#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fall_per_hour = snow_fall_rate;
        float snow_melt_per_hour = snow_on_ground * snow_melt_rate;
        snow_on_ground = snow_on_ground + snow_fall_per_hour - snow_melt_per_hour;
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}