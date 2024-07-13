#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rate, float meltRate) {
    return initialSnow + (rate * hours - meltRate * hours);
}

int main() {
    int h;
    cin >> h;
    float s, r, mr;
    cin >> s >> r >> mr;
    cout << fixed << setprecision(10) << snowDay(h, s, r, mr) << endl;
    return 0;
}