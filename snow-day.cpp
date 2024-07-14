#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= totalSnow * meltRate;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltRate;
    cin >> initialSnow >> snowFallRate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltRate);
    return 0;
}