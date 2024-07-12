#include <iostream>
#include <algorithm>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double remaining_snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        remaining_snow = std::max(0.0, remaining_snow + snow_fall_rate - snow_melt_rate);
        remaining_snow = std::max(0.0, remaining_snow + snow_fall_rate);
    }

    std::cout << remaining_snow << std::endl;
    
    return 0;
}