#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 1; i <= hours; ++i) {
        float snow_added = snow_fall_rate; // Snowfall at the beginning of the hour
        float snow_melted_this_hour = snow_on_ground * snow_melt_rate; // Snow melting during this hour
        snow_on_ground += snow_added - snow_melted_this_hour; // Update snow on the ground after snowfall and melting

        snow_on_ground = std::max(snow_on_ground, 0.0f); // Ensure snow on the ground does not go negative
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}