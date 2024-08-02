#include <iostream>

int main() {
    int hours;
    float snow, snow_fall, snow_melt;
    std::cin >> hours >> snow >> snow_fall >> snow_melt;
    
    for (int i = 0; i < hours; ++i) {
        snow += snow_fall;
        snow -= snow * snow_melt;
    }
    
    std::cout << snow << std::endl;
    
    return 0;
}