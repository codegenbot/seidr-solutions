```cpp
#include <iomanip>
#include <iostream>

int snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour);

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float currentSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall;
        currentSnow *= (1 - proportionOfSnowMeltingPerHour);
    }
    
    return currentSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}