#include <iostream>
#include <algorithm>

int main() {
    double initial_snow_on_ground, snow_fall_rate, snow_melt_rate, hours;
    std::cin >> initial_snow_on_ground >> snow_fall_rate >> snow_melt_rate >> hours;

    double remaining_snow = initial_snow_on_ground;

    for (int i = 0; i <= hours; ++i) {
        remaining_snow = std::max(0.0, remaining_snow + snow_fall_rate - snow_melt_rate * remaining_snow);
    }

    std::cout << remaining_snow << std::endl;

    return 0;
}