#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow -= snow * melt / 100.0;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;
}