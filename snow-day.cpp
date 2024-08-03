#include <iostream>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    return round((onGround + (rate * hours)) / (1 - pow(melt, hours)));
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, onGround, rate, melt) << endl;

    return 0;
}