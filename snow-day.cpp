#include <iostream>
using namespace std;

double snowDay(int hours, float onTheGround, float rate, float meltRate) {
    return (onTheGround + rate * hours) - (meltRate * hours);
}

int main() {
    int h;
    cin >> h;
    float s;
    cin >> s;
    float r;
    cin >> r;
    float m;
    cin >> m;

    cout << fixed << setprecision(10);
    cout << snowDay(h, s, r, m) << endl;

    return 0;
}