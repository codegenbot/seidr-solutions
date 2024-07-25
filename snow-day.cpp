#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    return initialSnow + (rateOfFall * hours) - (proportionMelting * hours);
}

int main() {
    int h;
    cin >> h;
    float s, r, p;
    cin >> s >> r >> p;

    cout << fixed << setprecision(10) << snowDay(h, s, r, p);

    return 0;
}