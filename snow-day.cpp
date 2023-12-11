```cpp
#include <iostream>
using namespace std;

double calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double meltRate) {
    double currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * meltRate;
    }
    return currentSnow;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    double finalSnow = calculateSnowAmount(hours, initialSnow, snowFallRate, meltRate);
    cout << finalSnow << endl;
    return 0;
}
```