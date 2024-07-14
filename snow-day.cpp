#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float snowFallRate, float meltPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate - meltPerHour;
    }
    return min(totalSnow + groundSnow, 100);
}

int main() {
    int h;
    cin >> h;
    float gs, sfr, mp;
    cin >> gs >> sfr >> mp;
    cout << fixed << setprecision(10) << snowDay(h, gs, sfr, mp) << endl;
    return 0;
}