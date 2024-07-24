#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateSnow, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; ++i) {
        totalSnow += groundSnow + rateSnow;
        groundSnow -= meltRate * groundSnow;
    }
    return round(totalSnow * 1000.0) / 1000.0;
}

int main() {
    int h, g, r, m;
    cin >> h >> g >> r >> m;
    cout << fixed << setprecision(6) << snowDay(h, g, r, m) << endl;
    return 0;
}