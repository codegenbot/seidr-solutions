#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double remaining_snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        double snow_fallen = std::min(snow_fall_rate, remaining_snow);
        double snow_melted = remaining_snow * snow_melt_rate;
        remaining_snow = std::max(0.0, remaining_snow + snow_fallen - snow_melted);

        // Deal with precision errors
        if (remaining_snow < 1e-15) {
            remaining_snow = 0.0;
        }
    }

    std::cout << std::fixed << std::setprecision(15) << remaining_snow << std::endl;
    
    return 0;
}