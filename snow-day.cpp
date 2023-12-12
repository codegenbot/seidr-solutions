```cpp
#include <iostream>
#include <cmath>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    for (float i = 0; i < hours; i++) {
        snow += snowFallRate - snow * meltingRate;
    }
    return snow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    std::cout << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << std::endl;
    return 0;
}
```