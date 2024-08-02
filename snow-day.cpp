#include <iostream>

int main() {
    int hours;
    float initial_snow_on_ground, snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> initial_snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    snow_on_ground = initial_snow_on_ground;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= snow_on_ground * snow_melt_rate;
    }
    
    std::cout << snow_on_ground << std::endl;
    
    return 0;
}