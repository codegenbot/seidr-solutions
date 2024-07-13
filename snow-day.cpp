#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_added = std::min(snow_fall_rate, std::max(0.0f, 1.0f - snow_on_ground)) - std::min(snow_on_ground * snow_melt_rate, std::min(snow_fall_rate, std::max(0.0f, 1.0f - snow_on_ground)));
        float snow_melted_1 = std::min(snow_on_ground, snow_fall_rate) * snow_melt_rate;
        float snow_melted_2 = std::min(snow_on_ground - snow_melted_1, snow_fall_rate) * snow_melt_rate;

        snow_on_ground = std::max(0.0f, std::min(1.0f, snow_on_ground + snow_added - snow_melted_1));
        snow_on_ground = std::max(0.0f, std::min(1.0f, snow_on_ground - snow_melted_2));
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}