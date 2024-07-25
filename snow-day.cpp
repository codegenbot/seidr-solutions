#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float meltingPerHour) {
    float snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall;
        if (meltingPerHour > 0) {
            snow -= min(snow, meltdSnow(hours - i - 1, rateOfSnowFall, meltingPerHour));
        }
    }
    return snow;
}

float meltdSnow(int hours, float rateOfSnowFall, float meltingPerHour) {
    if (hours <= 0)
        return 0.0;
    else
        return min(rateOfSnowFall * hours, rateOfSnowFall + meltdSnow(hours - 1, rateOfSnowFall, meltingPerHour) * meltingPerHour);
}

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, meltingPerHour;

    cin >> hours;
    cin >> groundSnow;
    cin >> rateOfSnowFall;
    cin >> meltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, meltingPerHour) << endl;

    return 0;
}