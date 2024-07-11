```
#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return (groundSnow + rate * hours - melt * hours);
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, g, r, m) << endl;
    return 0;