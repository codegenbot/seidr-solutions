#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    float total = 0;
    for (int i = 0; i < hours; i++) {
        total += rate; // accumulate snow first
        if (total > onGround) { // check if new accumulation exceeds the ground
            total -= (total - onGround); // melt excess
        } else {
            total -= melt * total; // melt proportional to current amount
        }
    }
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}