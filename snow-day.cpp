```
#include <iostream>
#include <cmath>
using namespace std;

double snowDay(int hours, float groundSnow, float snowFallRate, float meltProportion) {
    double snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate * (1 - meltProportion); // Add new snow
        snow -= meltProportion * snow; // Melt existing snow
        snow -= snowFallRate * (1 - meltProportion) / 2; // Subtract half of the new snow that will melt in the next hour
    }
    return snow;
}
```