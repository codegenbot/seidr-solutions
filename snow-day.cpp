#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    return initialSnow + rateOfSnowFall * hours - meltingRate * hours;
}

int main() {
    int h;
    cin >> h;
    float s, r, m;
    cin >> s >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, s, r, m);
    return 0;
}