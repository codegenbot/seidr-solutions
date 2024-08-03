#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float meltRate) {
    double total = 0;
    for (int i = 1; i <= hours; i++) {
        if (i == 1) {
            total += onGround;
        } else {
            total += rate;
        }
        total *= (1 - meltRate);
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