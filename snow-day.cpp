#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float onGround, float rate, float melt) {
    double total = 0;
    for (int i = 0; i < hours; i++) {
        onGround += rate;
        onGround -= onGround * melt / 100.0;
    }
    return onGround;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}