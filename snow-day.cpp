#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowfall, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowfall - meltRate;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowfall, meltRate;
    cin >> initialSnow >> snowfall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowfall, meltRate) << endl;
    return 0;
}