#include <iostream>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    return (onGround + rate * hours - melt * hours);
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}