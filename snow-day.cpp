#include <iostream>
using namespace std;

float snowDay(int hours, float onTheGround, float rate, float melt) {
    float total = 0;
    for (int i = 0; i < hours; i++) {
        total += rate;
        if (total > onTheGround) {
            total -= (total - onTheGround);
        } else {
            total -= melt * (total > 0);
        }
    }
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onTheGround, rate, melt;
    cin >> onTheGround >> rate >> melt;
    cout << fixed << setprecision(6) << snowDay(hours, onTheGround, rate, melt) << endl;
    return 0;
}