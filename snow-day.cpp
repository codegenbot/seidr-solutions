#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;
    
    std::cout << std::fixed << std::setprecision(15);
    
    for (int i = 0; i < hours; ++i) {
        float snowfall = rate - static_cast<float>(static_cast<int>(snow * melt));
        snow = snow + snowfall;
    }
    
    std::cout << snow << std::endl;
    
    return 0;
}