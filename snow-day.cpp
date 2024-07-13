#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return round((groundSnow + (rate * hours)) - ((melt * hours) > 0 ? (melt * hours) : 0));
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;

    cout << fixed << setprecision(6);
    cout << snowDay(h, g, r, m) << endl;

    return 0;
}