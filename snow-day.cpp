#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float melt) {
    double total = 0;
    for (int i = 1; i <= hours; i++) {
        if (i == 1) {
            total += onGround;
        } else {
            total += rate;
        }
        total -= melt * total;
    }
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, onGround, rate, melt);
    return 0;
}