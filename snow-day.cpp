#include <iostream>
#include <iomanip>

int snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    float totalSnow = initialSnow;

    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (totalSnow > 0) {
            totalSnow -= meltRate;
        }
    }

    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltRate) << endl;
    return 0;
}