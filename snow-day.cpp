```
#include <iostream>
using namespace std;

float snow_day(int hours, float ground_snow, float snow_fall, float melt_rate) {
    float current_snow = 0;
    for (int i = 1; i <= hours; i++) {
        current_snow += snow_fall;
        current_snow -= current_snow * melt_rate;
    }
    return current_snow;
}

int main() {
    float ground_snow, snow_fall, melt_rate;
    int hours;
    cin >> hours >> ground_snow >> snow_fall >> melt_rate;
    cout << snow_day(hours, ground_snow, snow_fall, melt_rate) << endl;
    return 0;
}
```