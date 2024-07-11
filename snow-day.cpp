#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float last_hour_snow = snow_on_ground;
        float melt_amount = snow_on_ground * snow_melt_rate;
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= melt_amount;
        snow_on_ground = last_hour_snow + snow_fall_rate - melt_amount; // Update snow_on_ground for next iteration
    }

    std::cout << std::fixed << snow_on_ground << std::endl;

    return 0;
}