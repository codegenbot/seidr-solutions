```cpp
#include <iostream>
#include <string>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snowOnGround = initialSnow;
    for (float i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltRate);
    }
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::string input;
    std::cin >> input;
    hours = std::stof(input);
    std::cin >> input;
    initialSnow = std::stof(input);
    std::cin >> input;
    snowFallRate = std::stof(input);
    std::cin >> input;
    snowMeltRate = std::stof(input);
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << result;
    return 0;
}
```