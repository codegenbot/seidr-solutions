#include <iostream>
using namespace std;

float snowDay(int hours, float onGround, float fallRate, float meltRate) {
    return (onGround + fallRate * hours - meltRate * hours);
}

int main() {
    int h;
    cin >> h;
    float ogh, fr, mr;
    cin >> ogh >> fr >> mr;
    cout << fixed << setprecision(10) << snowDay(h, ogh, fr, mr) << endl;
    return 0;
}