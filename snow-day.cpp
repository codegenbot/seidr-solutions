#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFall, float meltPerHour) {
    float snow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        snow += snowFall;
        if (meltPerHour > 0.0) {
            snow -= min(snow, meltPerHour);
        }
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFall, meltPerHour;
    cin >> initialSnow >> snowFall >> meltPerHour;
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowFall, meltPerHour) << endl;
    return 0;
}