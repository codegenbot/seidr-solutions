#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float snow = 0;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        if (melt > 0) {
            snow -= min(snow, melt);
        }
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;
}