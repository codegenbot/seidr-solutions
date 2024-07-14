#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFallRate, float meltRate) {
    return initialSnow + (snowFallRate * hours - meltRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltRate;
    cin >> initialSnow >> snowFallRate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltRate) << endl;
    return 0;
}