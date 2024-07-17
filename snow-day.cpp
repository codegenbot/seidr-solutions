#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float meltPerHour) {
    double total = onGround;
    for (int i = 0; i < hours; i++) {
        total += rate;
        if (total > 0) {
            total -= total * meltPerHour;
        }
        if (total < 0) {
            total = 0.0;
        }
    }
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, meltPerHour;
    cin >> onGround >> rate >> meltPerHour;
    cout << fixed << setprecision(10);
    cout << snowDay(hours, onGround, rate, meltPerHour) << endl;
    return 0;
}