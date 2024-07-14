#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float rate, float melt) {
    double total = 0;
    for (int i = 0; i < hours; ++i) {
        onGround += rate;
        onGround -= onGround * melt;
    }
    return onGround;
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    cout << fixed << setprecision(10);
    cout << snowDay(h, g, r, m) << endl;
    return 0;
}