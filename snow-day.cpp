#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    return (groundSnow + rateOfFall * hours - meltingRate * hours);
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, g, r, m) << endl;
    return 0;
}