#include <iostream>
using namespace std;

float snowDay(int hours, float currentSnow, float rate, float melt) {
    return currentSnow + (rate * hours) - (melt * hours);
}

int main() {
    int h;
    cin >> h;
    float c, r, m;
    cin >> c >> r >> m;

    cout << fixed << setprecision(6) << snowDay(h, c, r, m);

    return 0;
}