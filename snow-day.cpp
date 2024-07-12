#include <iostream>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double snow_amount = snow_on_ground;
    
    for (int i = 1; i <= hours; ++i) {
        snow_amount += snow_fall_rate - snow_melt_rate;
        if (snow_amount < 0) {
            snow_amount = 0;
        }
    }
    
    std::cout << snow_amount << std::endl;
    
    return 0;
}