#include <iostream>

int main() {
    double initial_snow_on_ground, snow_fall_rate, snow_melt_rate, hours;
    std::cin >> initial_snow_on_ground >> snow_fall_rate >> snow_melt_rate >> hours;

    double remaining_snow = initial_snow_on_ground;

    for (double i = 0.0; i < hours; i += 1.0) {
        if (remaining_snow > 0.0) {
            remaining_snow = remaining_snow + snow_fall_rate - snow_melt_rate * remaining_snow;
            if (remaining_snow < 0.0) {
                remaining_snow = 0.0;
                break;
            }
        }
    }

    std::cout << remaining_snow << std::endl;

    return 0;
}