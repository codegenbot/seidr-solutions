#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float melt) {
    double total = 0;
    for (int i = 0; i < hours; i++) {
        total += rate - melt;
    }
    return total + onGround;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(9) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}