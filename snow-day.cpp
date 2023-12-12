```cpp
#include <iostream>
#include <cmath>

float calculateSnow(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= initialSnow * meltingRate;
    }
    return snow;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    std::cout << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << std::endl;
    return 0;
}
```