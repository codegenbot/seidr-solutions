#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float snowFallRate, float meltRate) {
    return groundSnow + (snowFallRate * hours - meltRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowFallRate, meltRate;
    cin >> groundSnow >> snowFallRate >> meltRate;

    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, snowFallRate, meltRate);

    return 0;
}