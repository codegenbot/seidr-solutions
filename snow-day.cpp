```cpp
#include <iostream>

float calculateSnowOnGround(int hours, float initialSnowAmount, float snowFallRate, float snowMeltingProportion) {
    float snowOnGround = initialSnowAmount;

    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltingProportion;
    }

    return snowOnGround;
}

int main() {
    int hours;
    float initialSnowAmount, snowFallRate, snowMeltingProportion;
    std::cin >> hours >> initialSnowAmount >> snowFallRate >> snowMeltingProportion;

    float result = calculateSnowOnGround(hours, initialSnowAmount, snowFallRate, snowMeltingProportion);
    std::cout << result;
    
    return 0;
}
```