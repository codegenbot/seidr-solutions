#include <iostream>
#include <algorithm>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double snow_remaining = snow_on_ground;
    for (int i = 1; i <= hours; ++i) {
        snow_remaining = std::max(0.0, snow_remaining + snow_fall_rate - snow_melt_rate);
    }
    
    std::cout << snow_remaining << std::endl;
    
    return 0;
}