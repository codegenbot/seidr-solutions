#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float melt) {
    double snow = onGround;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        if (melt > 0.0) {
            snow -= snow * melt / 100.0;
        }
    }
    return snow;
}

int main() {
    int hours;
    float onGround, rate, melt;

    cin >> hours >> onGround >> rate >> melt;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, onGround, rate, melt) << endl;

    return 0;
}