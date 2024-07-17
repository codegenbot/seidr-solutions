#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rate, float meltRate) {
    return (initialSnow + rate * hours - meltRate * hours);
}

int main() {
    int h;
    cin >> h;
    float s0, r, m;
    cin >> s0 >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, s0, r, m) << endl;
    return 0;
}