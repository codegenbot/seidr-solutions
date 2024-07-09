#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    return initialSnow + (rateOfSnowfall * hours) - (proportionMelting * hours);
}

int main() {
    int h;
    cin >> h;
    float is, rsf, pm;
    cin >> is >> rsf >> pm;
    cout << fixed << setprecision(10) << snowDay(h, is, rsf, pm) << endl;
    return 0;