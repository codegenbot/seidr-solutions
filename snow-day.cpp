#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double remaining_snow = static_cast<double>(snow_on_ground);
    for (int i = 0; i < hours; ++i) {
        remaining_snow += snow_fall_rate - (snow_melt_rate * remaining_snow);
        if (remaining_snow < 0) {
            remaining_snow = 0;
        }
    }

    std::cout << std::fixed << remaining_snow << std::endl;
    
    return 0;
}