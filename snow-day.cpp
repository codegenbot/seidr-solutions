```cpp
#include <iostream>
#include <cmath>

using namespace std;

float calculateSnowAmount(int hours, float startingSnow, float snowFallRate, float meltProportion) {
    float currentSnow = startingSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate - meltProportion * currentSnow;
    }
    return currentSnow;
}

int main() {
    int hours;
    float startingSnow, snowFallRate, meltProportion;
    cin >> hours >> startingSnow >> snowFallRate >> meltProportion;

    float finalSnow = calculateSnowAmount(hours, startingSnow, snowFallRate, meltProportion);
    cout << finalSnow << endl;

    return 0;
}
```