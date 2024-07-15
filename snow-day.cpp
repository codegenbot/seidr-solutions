#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        groundSnow += rate;
        if (groundSnow > 0) {
            groundSnow -= melt;
        }
    }
    return groundSnow;
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, g, r, m) << endl;
    return 0;
}