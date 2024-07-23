#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;

    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float final_snow_amount = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        final_snow_amount += snow_fall_rate - snow_melt_rate;
    }

    std::cout << "Final amount of snow on the ground: " << final_snow_amount << std::endl;

    return 0;
}