#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float meltRate) {
    double total = onGround;
    for (int i = 0; i < hours; ++i) {
        total += rate;
        if (meltRate > 0.0) {
            total -= min(total, meltRate);
        }
    }
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, meltRate;
    cin >> onGround >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, onGround, rate, meltRate) << endl;
    return 0;
}