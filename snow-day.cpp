#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingPerHour) {
    return round((groundSnow + (rateOfFall * hours)) / (1 - pow(1 - meltingPerHour, hours)));
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, g, r, m);
    return 0;
}