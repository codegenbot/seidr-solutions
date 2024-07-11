#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    float original_snow = snow_on_ground;
    
    for (int i = 0; i < hours; ++i) {
        snow_on_ground = original_snow + snow_fall_rate - (original_snow * snow_melt_rate);
        original_snow = snow_on_ground;
    }
    
    std::cout << snow_on_ground << std::endl;
    
    return 0;
}