#include <iostream>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    return (onGround + rate * hours - melt * hours);
}

int main() {
    int h;
    cin >> h;
    float ogh, r, m;
    cin >> ogh >> r >> m;
    
    cout << fixed << setprecision(10) << snowDay(h, ogh, r, m) << endl;

    return 0;
}