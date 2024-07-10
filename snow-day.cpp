#include <iostream>
using namespace std;

double snowDay(int h, float s, float r, float m) {
    double totalSnow = 0;
    for (int i = 0; i < h; i++) {
        totalSnow += r;
        if (m > 0)
            totalSnow -= m * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float snow, rate, melt;
    cin >> snow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, snow, rate, melt) << endl;
    return 0;
}