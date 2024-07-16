#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        snow += rate;
        if (meltRate > 0.0) {
            snow -= snow * meltRate;
        }
    }
    return snow;
}

int main() {
    int hours;
    float initialSnow, rate, meltRate;

    cin >> hours >> initialSnow >> rate >> meltRate;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, rate, meltRate) << endl;

    return 0;
}