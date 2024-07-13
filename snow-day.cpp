#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= snow * meltRate / 100.0;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltRate;
    cin >> initialSnow >> snowFallRate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltRate) << endl;
    return 0;
}