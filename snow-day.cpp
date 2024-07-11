#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    for (int i = 0; i < hours; ++i) {
        float original_snow_on_ground = snow_on_ground;
        snow_on_ground = original_snow_on_ground + snow_fall_rate - (original_snow_on_ground * snow_melt_rate);
    }
    
    std::cout << std::fixed << std::setprecision(10) << snow_on_ground << std::endl;
    
    return 0;
}