```#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float snowFall, float meltRate) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFall - meltRate;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFall, meltRate;
    cin >> initialSnow >> snowFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFall, meltRate) << endl;
    return 0;