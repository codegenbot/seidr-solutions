#include <iostream>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double snow_after_hour = snow_on_ground;
    for (int i = 0; i < hours; i++) {
        snow_after_hour *= (1.0 - snow_melt_rate);
        snow_after_hour += snow_fall_rate;
    }
    
    std::cout.precision(17);
    std::cout << snow_after_hour << std::endl;
    
    return 0;
}