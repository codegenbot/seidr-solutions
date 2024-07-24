#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    return initialSnow + (snowFallRate * hours - meltPerHour * hours);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltPerHour;
    cin >> initialSnow >> snowFallRate >> meltPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltPerHour) << endl;
    return 0;
}