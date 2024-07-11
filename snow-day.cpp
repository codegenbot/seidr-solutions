#include <iostream>
#include <algorithm>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        totalSnow -= std::min<float>(totalSnow, rate * melt);
    }
    return totalSnow;
}