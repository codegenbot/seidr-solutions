#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= totalSnow * meltingRate;
    }
    return totalSnow;
}

int main() {
    int h;
    cin >> h;
    float s1, r, m;
    cin >> s1 >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, s1, r, m) << endl;
    return 0;
}