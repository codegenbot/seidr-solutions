#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double remaining_snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        double snow_fallen = std::max(snow_fall_rate - snow_melt_rate * remaining_snow, 0.0) / (1 + snow_melt_rate);
        remaining_snow += snow_fallen;
        remaining_snow = std::max(remaining_snow - snow_melt_rate, 0.0);
    }

    std::cout << std::fixed;
    std::cout.precision(15);
    std::cout << remaining_snow << std::endl;
    
    return 0;
}