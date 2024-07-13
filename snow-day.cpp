#include <iostream>
#include <algorithm>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate, snow_added, snow_melted;

    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_added = std::min(snow_fall_rate, snow_on_ground);
        snow_melted = snow_on_ground * snow_melt_rate;
        
        snow_on_ground = (snow_on_ground + snow_added - snow_melted);
        snow_on_ground = std::max(0.0, snow_on_ground);
    }

    std::cout << snow_on_ground;
    
    return 0;
}