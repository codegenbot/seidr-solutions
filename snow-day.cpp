#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double currentSnow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        currentSnow += snowFallRate - meltPerHour * currentSnow;
    }
    return currentSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltPerHour;
    cin >> initialSnow >> snowFallRate >> meltPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltPerHour) << endl;
    return 0;
}