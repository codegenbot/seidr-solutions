#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        float newSnow = rate / 60;
        onGround += newSnow;
        if (onGround > melt) {
            onGround -= (onGround - melt);
        } else {
            onGround -= melt * onGround;
        }
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