```
#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    for (float i = 0; i < hours; i += 1.0) {
        snowOnGround += snowFallRate - snowOnGround * meltingRate;
    }
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    return 0;
}
```