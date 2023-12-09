```cpp
#include <iostream>

float calculateSnow(int hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltRate);
    }
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours;
    std::cin >> initialSnow >> snowFallRate >> snowMeltRate;
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << result;
    return 0;
}
```