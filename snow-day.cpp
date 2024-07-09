#include <iostream>

int main() {
    float snow_on_ground = 0.0, snow_fall_rate, snow_melt_rate;
    int hours;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate - snow_melt_rate;
    }

    std::cout << snow_on_ground;

    return 0;
}