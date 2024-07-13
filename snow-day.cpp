#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    return initialSnow + (rateOfFall * hours) - (meltingRate * hours);
}

int main() {
    int h;
    cin >> h;
    float is, r, m;
    cin >> is >> r >> m;

    cout << fixed << setprecision(6);
    cout << snowDay(h, is, r, m) << endl;

    return 0;
}