#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    return round((groundSnow + rateOfFall * hours - meltRate * hours) * 1000) / 1000.0;
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