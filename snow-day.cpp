#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;
    
    std::cout << std::fixed << std::setprecision(15);
    
    float original_snow = snow;
    for (int i = 0; i < hours; ++i) {
        snow = snow + rate - (original_snow * melt);
    }
    
    std::cout << snow << std::endl;
    
    return 0;
}