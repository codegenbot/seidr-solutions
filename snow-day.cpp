#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += groundSnow + rate;
        groundSnow *= (1 - melt);
    }
    
    return totalSnow;
}

int main() {
    int h;
    float g, r, m;
    cin >> h >> g >> r >> m;
    cout << fixed << setprecision(6) << snowDay(h, g, r, m) << endl;
    return 0;
}