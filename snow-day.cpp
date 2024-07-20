#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, double initialSnow, double rate, double meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow -= meltRate * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, r;
    cin >> initialSnow >> r >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, r, meltRate) << endl;
    return 0;