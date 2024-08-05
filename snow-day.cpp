#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double snow = 0;
    for (int i = 0; i < hours; ++i) {
        snow += rateOfSnowFall - proportionOfSnowMeltingPerHour * (snow + rateOfSnowFall);
    }
    return round(snow * 100000.0) / 100000.0;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}