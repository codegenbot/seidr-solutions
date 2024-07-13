#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 1; i <= hours; ++i) {
        float snow_added = snow_fall_rate - snow_on_ground * snow_melt_rate; // Update snow added in this hour considering snow melting
        float snow_melted = snow_on_ground * snow_melt_rate; // snow melted in this hour
        snow_on_ground += snow_added - snow_melted; // update snow on the ground
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}