#include <iostream>
#include <algorithm>

int main() {
    int hours;
    float snow, snow_fall_rate, melt_rate;
    std::cin >> hours >> snow >> snow_fall_rate >> melt_rate;
    
    for (int i = 0; i < hours; ++i) {
        snow += snow_fall_rate;
        snow -= std::min(snow, melt_rate);
    }
    
    std::cout << snow << std::endl;
    
    return 0;
}