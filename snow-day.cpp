Here is the solution:

```cpp
#include <iomanip>
#include <iostream>

int snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour);

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}

int snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float snow = initialSnow;
    for (int i = 1; i <= hours; ++i) {
        if (i == 1)
            snow += rateOfSnowFall - snow * proportionOfSnowMeltingPerHour;
        else
            snow = snow + rateOfSnowFall - snow * proportionOfSnowMeltingPerHour;
    }
    return static_cast<int>(snow);
}