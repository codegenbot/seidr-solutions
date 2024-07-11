#include <iostream>
using namespace std;

float calculateSnow(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowfallRate;
        if (meltingRate > 0.0f)
            snow -= min(snow, snow * meltingRate);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowfallRate, meltingRate;
    cin >> initialSnow >> snowfallRate >> meltingRate;
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowfallRate, meltingRate) << endl;
    return 0;
}