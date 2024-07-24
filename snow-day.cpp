#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate - meltPerHour;
    }
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltPerHour;
    cin >> initialSnow >> snowFallRate >> meltPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltPerHour);
    return 0;
}