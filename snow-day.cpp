#include <iomanip>
#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall - proportionOfSnowMeltingPerHour * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, 0.5f) << endl;
    return 0;