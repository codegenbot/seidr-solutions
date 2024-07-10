#include <iostream>
using namespace std;

float snowDay(int h, float s, float r, float m) {
    float totalSnow = s;
    for (int i = 0; i < h; i++) {
        totalSnow += r;
        totalSnow *= (1 - m);
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, meltingRate;
    cin >> initialSnow >> rate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rate, meltingRate);
    return 0;
}