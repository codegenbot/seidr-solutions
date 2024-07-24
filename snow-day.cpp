#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow, rate, melt;
    const double EPSILON = 1e-9;
    
    std::cin >> hours >> snow >> rate >> melt;
    
    std::cout << std::fixed << std::setprecision(15);
    
    for (int i = 0; i < hours; ++i) {
        snow = snow + rate - (snow * melt);
    }
    
    snow = std::max(0.0f, snow);
    
    std::cout << snow << std::endl;
    
    return 0;
}