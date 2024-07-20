#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow -= meltRate * snow;
    }
    return snow;
}

int main() {
    int hours, initialSnow, rate, meltRate;
    cin >> hours >> initialSnow >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, (double)initialSnow, (double)rate, (double)meltRate) << endl;
    return 0;
}