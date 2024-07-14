#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float proportionMelting) {
    return groundSnow + (rateOfFall * hours - proportionMelting * hours);
}

int main() {
    int h;
    cin >> h;
    float g, r, p;
    cin >> g >> r >> p;
    cout << fixed << setprecision(10) << snowDay(h, g, r, p) << endl;
    return 0;
}