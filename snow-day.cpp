#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        snow += snowfallRate - meltingRate;
    }
    return snow;
}

int main() {
    int h;
    cin >> h;
    float s, sr, mr;
    cin >> s >> sr >> mr;
    cout << fixed << setprecision(10) << snowDay(h, s, sr, mr) << endl;
    return 0;
}