#include <iostream>
using namespace std;

float snowDay(int hours, float onGround, float rate, float meltRate) {
    float total = onGround;
    for (int i = 0; i < hours; i++) {
        total += rate;
        if (total > 10000.0) { // Assuming maximum amount of snow is 10,000 units
            total = 10000.0;
        }
        total -= meltRate * total;
    }
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, meltRate;
    cin >> onGround >> rate >> meltRate;
    cout << fixed << setprecision(6) << snowDay(hours, onGround, rate, meltRate);
    return 0;
}