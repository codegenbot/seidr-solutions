#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;
    
    std::cout << std::fixed << std::setprecision(15);

    for (int i = 0; i < hours; ++i) {
        snow = snow + rate - (snow * melt);
    }
    
    std::cout << std::setprecision(15) << snow << std::endl;
    
    return 0;
}