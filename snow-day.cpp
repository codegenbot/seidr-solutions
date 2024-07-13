#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    float snow_added, snow_melted;
  
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial snow on the ground, snow fall rate, and snow melt rate: ";
    std::cin >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
  
    for (int i = 0; i < hours; ++i) {
        snow_added = std::min(snow_fall_rate, snow_on_ground);
        snow_melted = snow_on_ground * snow_melt_rate;
    
        snow_on_ground = (snow_on_ground + snow_added - snow_melted);
        snow_on_ground = std::max(0.0f, snow_on_ground);
    }

    std::cout << "Final amount of snow on the ground after " << hours << " hours: " << snow_on_ground << std::endl;
  
    return 0;
}