```
#include <iostream>

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltingRate) {
    float snow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate - meltingRate;
        snow *= (1 - meltingRate);
    }
    return snow;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltingRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> meltingRate;
    float result = calculateSnow(hours, snowOnGround, snowFallRate, meltingRate);
    std::cout << result << std::endl;
    return 0;
}
```