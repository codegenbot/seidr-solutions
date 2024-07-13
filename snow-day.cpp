#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double remaining_snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        double snow_fallen = std::min(snow_fall_rate, remaining_snow);
        double snow_melted = remaining_snow * snow_melt_rate;
        remaining_snow = std::max(0.0, remaining_snow + snow_fallen - snow_melted);
        
        // Round remaining_snow to smaller precision to compensate for computation errors
        remaining_snow = round(remaining_snow * 1e10) / 1e10;
    }

    std::cout << std::fixed;
    std::cout.precision(15);
    std::cout << remaining_snow << std::endl;
    
    return 0;
}