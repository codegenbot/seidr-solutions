#include <iostream>
#include <iomanip>

int snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfFall;
        currentSnow -= meltRate;
    }
    return static_cast<int>(currentSnow);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltRate) << endl;
    return 0;
}