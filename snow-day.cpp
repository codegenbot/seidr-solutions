#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    float melted_snow = 0;
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        melted_snow += snow_on_ground * snow_melt_rate;
    }
    
    snow_on_ground -= melted_snow;

    std::cout << snow_on_ground << std::endl;

    return 0;
}