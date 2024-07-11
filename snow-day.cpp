#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float last_hour_snow = snow_on_ground;
        snow_on_ground += snow_fall_rate;
        float melt_amount = last_hour_snow * snow_melt_rate;
        snow_on_ground -= melt_amount;
    }

    std::cout << std::fixed << snow_on_ground << std::endl;

    return 0;
}