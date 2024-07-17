#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateSnow, float meltRate) {
    double snow = groundSnow;
    for (int i = 0; i < hours; ++i) {
        snow += rateSnow;
        snow *= (1 - meltRate);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateSnow, meltRate;
    cin >> groundSnow >> rateSnow >> meltRate;
    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, rateSnow, meltRate);
    return 0;
}