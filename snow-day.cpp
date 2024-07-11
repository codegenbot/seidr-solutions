```cpp
#include <algorithm>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        totalSnow -= totalSnow > rate * melt ? 0 : rate * melt;
    }
    return totalSnow;
}