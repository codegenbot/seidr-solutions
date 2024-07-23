#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    snow += hours * rate - hours * melt * snow;
    
    std::cout << snow << std::endl;
    
    return 0;
}