#include <iostream>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        double current_snow_on_ground = snow_on_ground;
        double snow_melted = snow_fall_rate * snow_melt_rate;  // Update this line
        snow_on_ground -= snow_melted;
    }
    
    std::cout << snow_on_ground << std::endl;
    
    return 0;
}