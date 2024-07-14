#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateSnowFall, float meltRate) {
    return (groundSnow + rateSnowFall * hours - meltRate * hours);
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, g, r, m) << endl;
    return 0;
}