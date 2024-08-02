#include <iostream>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    
    double snow_added = hours * snow_fall_rate;
    double snow_melted = hours * snow_on_ground * snow_melt_rate;
    double final_snow_on_ground = snow_on_ground + snow_added - snow_melted;
    
    std::cout << final_snow_on_ground << std::endl;
    
    return 0;
}