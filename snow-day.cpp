#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        if (snow > 0.0)
            snow -= snow * meltRate;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltRate);
    return 0;
}