#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        if (meltPerHour > 0.0)
            snow -= min(snow, meltPerHour);
    }
    return snow;
}

int main() {
    int h;
    float s, f, m;
    cin >> h >> s >> f >> m;
    cout << setprecision(10) << fixed << snowDay(h, s, f, m) << endl;
    return 0;
}