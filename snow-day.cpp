#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    float total_snow = snow_on_ground;
    for (int i = 0; i < hours; i++) {
        total_snow += snow_fall_rate;
        total_snow -= snow_melt_rate * total_snow;
    }
    
    std::cout.precision(15);
    std::cout << total_snow << std::endl;
    
    return 0;
}