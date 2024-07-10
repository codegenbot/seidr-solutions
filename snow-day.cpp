#include <iostream>

int main() {
    float snow_fall_rate, snow_melt_rate, snow_on_ground = 0.0;
    int hours;
    
    std::cout << "Enter the snow fall rate, snow melt rate, and the number of hours: ";
    std::cin >> snow_fall_rate >> snow_melt_rate >> hours;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = snow_on_ground + snow_fall_rate - (snow_on_ground * snow_melt_rate) + snow_fall_rate;
    }

    std::cout << "Amount of snow on the ground after " << hours << " hours: " << snow_on_ground;

    return 0;
}