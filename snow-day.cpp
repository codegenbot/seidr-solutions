#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    for (int i = 0; i < hours; i++) {
        snow_on_ground += snow_fall_rate;
        float snow_to_melt = snow_on_ground * snow_melt_rate;
        snow_on_ground -= snow_to_melt;
    }
    
    std::cout.precision(15);
    std::cout << snow_on_ground << std::endl;
    
    return 0;
}