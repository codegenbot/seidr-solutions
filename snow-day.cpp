```cpp
#include <iostream>
#include <iomanip>

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

    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;

    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << std::fixed << std::setprecision(2) << result;

    return 0;
}
```