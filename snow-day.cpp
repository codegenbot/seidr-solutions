#include <iostream>
#include <algorithm>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double snow_melt_amount = std::max(0.0, snow_on_ground + hours * (snow_fall_rate - snow_melt_rate));
    
    std::cout << snow_melt_amount << std::endl;
    
    return 0;
}