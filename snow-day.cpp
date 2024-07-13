#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float snowfallRate, float meltRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowfallRate;
        if (totalSnow > currentSnow)
            totalSnow -= (totalSnow - currentSnow) * meltRate;
    }
    
    return totalSnow;
}

int main() {
    int h;
    cin >> h;
    float c, r, m;
    cin >> c >> r >> m;
    cout << fixed << setprecision(10);
    cout << snowDay(h, c, r, m) << endl;
    return 0;
}