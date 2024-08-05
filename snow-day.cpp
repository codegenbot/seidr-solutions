#include <iostream>
using namespace std;

float snowDay(int hours, float onTheGround, float rate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        onTheGround += rate;
        if (onTheGround > 0.0f) {
            onTheGround -= onTheGround * meltRate;
        }
    }
    return onTheGround;
}

int main() {
    int hours;
    cin >> hours;
    float onTheGround, rate, meltRate;
    cin >> onTheGround >> rate >> meltRate;

    cout << fixed << setprecision(6);
    cout << snowDay(hours, onTheGround, rate, meltRate) << endl;

    return 0;
}