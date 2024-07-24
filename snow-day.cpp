#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float meltRate) {
    return (groundSnow + rate * hours - meltRate * hours);
}

int main() {
    int h;
    cin >> h;
    float gs, r, mr;
    cin >> gs >> r >> mr;
    cout << fixed << setprecision(10) << snowDay(h, gs, r, mr) << endl;
    return 0;
}