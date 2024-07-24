#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;
    
    std::cout << std::fixed << std::setprecision(15);
    
    for (int i = 0; i < hours; ++i) {
        float snowfall = rate - (snow * melt);
        float snowUpdated = snow + snowfall;
        snow = snowUpdated;
    }
    
    std::cout << snow << std::endl;
    
    return 0;
}