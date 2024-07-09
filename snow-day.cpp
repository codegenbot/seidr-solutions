#include <iostream>

int main() {
    float snow_fall_rate, snow_melt_rate, snow_on_ground = 0.0, initial_snow_on_ground = 0.0;
    int num_hours;
    
    std::cout << "Enter snow fall rate: ";
    std::cin >> snow_fall_rate;
    
    std::cout << "Enter snow melt rate: ";
    std::cin >> snow_melt_rate;
    
    std::cout << "Enter number of hours: ";
    std::cin >> num_hours;
    
    for (int i = 0; i < num_hours; ++i) {
        initial_snow_on_ground += snow_fall_rate;
        initial_snow_on_ground -= snow_melt_rate;
    }

    snow_on_ground = initial_snow_on_ground;
    
    std::cout << "Final snow on ground after " << num_hours << " hours: " << snow_on_ground << std::endl;

    return 0;
}