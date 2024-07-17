#include <iostream>
using namespace std;

float calculateSnow(float hours, float ground, float rate, float melt) {
    return ground + (hours * rate - hours * melt);
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    
    cout << setprecision(10) << fixed;
    cout << calculateSnow(h, g, r, m) << endl;

    return 0;
}