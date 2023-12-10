```
#include <iostream>
using namespace std;

double snowDay(int hours, double groundSnow, double snowFallRate, double meltProportion) {
    double snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate * (1 - meltProportion);
        snow -= snow * meltProportion;
    }
    return snow;
}

int main() {
    int hours;
    double groundSnow, snowFallRate, meltProportion;
    cin >> hours >> groundSnow >> snowFallRate >> meltProportion;
    cout << snowDay(hours, groundSnow, snowFallRate, meltProportion) << endl;
    return 0;
}
```