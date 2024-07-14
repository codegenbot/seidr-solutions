#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return (groundSnow + rate * hours - melt * hours);
}

int main() {
    int h;
    cin >> h;
    float gs, r, m;
    cin >> gs >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, gs, r, m) << endl;
    return 0;