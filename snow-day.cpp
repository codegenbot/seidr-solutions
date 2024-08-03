#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float melt) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow -= melt * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, melt;
    cin >> initialSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rate, melt) << endl;
    return 0;
}