#include <iostream>

int main() {
    double initial_snow_on_ground, snow_fall_rate, snow_melt_rate, hours;
    std::cin >> initial_snow_on_ground >> snow_fall_rate >> snow_melt_rate >> hours;

    double remaining_snow = initial_snow_on_ground + snow_fall_rate * hours - snow_melt_rate * initial_snow_on_ground * hours;

    std::cout << remaining_snow << std::endl;

    return 0;
}