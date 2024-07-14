#include <iostream>
using namespace std;

float snowDay(int hours, float onGround, float rate, float meltRate) {
    float snow = 0;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow *= (1 - meltRate);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, meltRate;
    cin >> onGround >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, onGround, rate, meltRate) << endl;
    return 0;
}