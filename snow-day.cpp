#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall;
        snow *= (1 - proportionOfSnowMeltingPerHour);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);
    return 0;
}