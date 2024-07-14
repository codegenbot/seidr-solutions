#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float snowFall, float meltPerHour) {
    float snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFall;
        snow -= min(snow, meltPerHour);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowFall, meltPerHour;
    cin >> groundSnow >> snowFall >> meltPerHour;
    cout << fixed << setprecision(9) << snowDay(hours, groundSnow, snowFall, meltPerHour) << endl;
    return 0;
}