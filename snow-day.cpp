```cpp
#include <iostream>

float calculateSnow(float hours, float snow, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow = snow - melt * snow;
    }
    return snow;
}

int main() {
    float hours, snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;
    float result = calculateSnow(hours, snow, rate, melt);
    std::cout << result << std::endl;
    return 0;
}
```