```cpp
#include <iostream>
#include <string>
using namespace std;

string calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double meltRate) {
    double currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * meltRate;
    }
    return to_string(currentSnow);
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    string finalSnow = calculateSnowAmount(hours, initialSnow, snowFallRate, meltRate);
    cout << finalSnow << endl;
    return 0;
}
```