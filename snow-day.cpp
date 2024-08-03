#include <iostream>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    float total = onGround;
    for (int i = 0; i < hours; i++) {
        total += rate;
        if (total > 10000.0) {
            total -= total - 10000.0;
        }
        total *= (1.0 - melt);
    }
    return total;
}

int main() {
    int hours;
    float onGround, rate, melt;
    cin >> hours >> onGround >> rate >> melt;
    cout << fixed << setprecision(6) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}