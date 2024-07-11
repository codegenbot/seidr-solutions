#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float meltingRate) {
    return round(initialSnow + (rateOfSnowfall * hours) - (meltingRate * hours));
}

int main() {
    int h;
    cin >> h;
    float s, r, m;
    cin >> s >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, s, r, m) << endl;
    return 0;
}