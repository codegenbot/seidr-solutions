```c++
#include <iostream>
#include <iomanip>

// Function prototype
float snowDay(int, float, float, float);

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << std::endl;
    return 0;
}

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; ++i) {
        initialSnow += rateOfSnowFall - initialSnow * proportionOfSnowMeltingPerHour;
    }
    return initialSnow;
}