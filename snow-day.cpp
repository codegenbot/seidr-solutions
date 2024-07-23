#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        onGround += rate * 60;
        if (onGround > 1024) { 
            onGround -= onGround * melt / 100;
        } else {
            onGround -= onGround * melt / 100;
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