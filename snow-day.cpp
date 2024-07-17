#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float meltRate) {
    double snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow -= meltRate * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, meltRate;
    cin >> groundSnow >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, meltRate) << endl;
    return 0;
}