#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltRate) {
    return (initialSnow + hours * snowFallRate - hours * meltRate);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltRate;
    cin >> initialSnow >> snowFallRate >> meltRate;
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowFallRate, meltRate) << endl;
    return 0;
}