#include <iostream>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double total_melted_snow = 0.0;
    
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        total_melted_snow += snow_melt_rate * snow_on_ground;
    }
    
    snow_on_ground -= total_melted_snow;
    
    std::cout << snow_on_ground << std::endl;
    
    return 0;
}