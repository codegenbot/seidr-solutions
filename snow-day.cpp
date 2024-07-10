#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += groundSnow + rateFall - meltRate;
        groundSnow = totalSnow;
    }
    
    return groundSnow;
}

int main() {
    int h, g, r, m;
    cin >> h >> g >> r >> m;
    cout << setprecision(10) << fixed << snowDay(h, g, r, m);
    return 0;
}