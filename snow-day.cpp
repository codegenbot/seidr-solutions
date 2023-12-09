```cpp
#include <iostream>

double calculateSnow(int hours, double initialSnow, double snowFallRate, double snowMeltRate) {
    double snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltRate);
    }
    return snowOnGround;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, snowMeltRate;
    std::string input;
    
    std::getline(std::cin, input);
    hours = std::stoi(input);
    
    std::getline(std::cin, input);
    initialSnow = std::stod(input);
    
    std::getline(std::cin, input);
    snowFallRate = std::stod(input);
    
    std::getline(std::cin, input);
    snowMeltRate = std::stod(input);
    
    double result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << result;
    
    return 0;
}
```