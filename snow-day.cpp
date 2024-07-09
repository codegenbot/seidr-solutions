#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    snow_on_ground += hours * snow_fall_rate - hours * snow_melt_rate;
    snow_on_ground = std::max(0.0f, snow_on_ground);
    
    std::cout << snow_on_ground << std::endl;
    
    return 0;
}