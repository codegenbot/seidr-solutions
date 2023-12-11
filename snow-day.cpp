```
#include <iostream>
#include <cmath>
using namespace std;

double snowDay(int hours, double groundSnow, double snowFallRate, double meltProportion) {
    double snowOnGround = groundSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate * std::pow(meltProportion, i + 1);
    }
    return snowOnGround;
}
```