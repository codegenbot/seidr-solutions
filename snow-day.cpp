```cpp
#include <iostream>
#include <cmath>
using namespace std;

float calculateSnow(float hours, float currentSnow, float snowFallRate, float meltingRate) {
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow *= (1 - meltingRate);
    }
    return currentSnow;
}

int main() {
    float hours, currentSnow, snowFallRate, meltingRate;
    cin >> hours >> currentSnow >> snowFallRate >> meltingRate;
    float finalSnow = calculateSnow(hours, currentSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    return 0;
}
```