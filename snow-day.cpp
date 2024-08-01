#include <iostream>
#include <iomanip>

int main() {
    double current_snow = 0.0;
    double snow_fall_rate, snow_melt_rate;
    int hours;
    
    std::cin >> hours >> current_snow >> snow_fall_rate >> snow_melt_rate;
    
    for (int i = 0; i < hours; ++i) {
        current_snow += snow_fall_rate - (static_cast<double>(snow_melt_rate) * current_snow);
    }
    
    std::cout << std::fixed << std::setprecision(6) << current_snow << std::endl;
    
    return 0;
}