#include <iostream>
int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float total_snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        total_snow -= snow_melt_rate; // Melt existing snow
        total_snow += snow_fall_rate; // Add newly fallen snow
    }

    std::cout << total_snow << std::endl;

return 0;
}