#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        if (meltRate > 0.0) {
            totalSnow -= min(totalSnow, meltRate);
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, meltRate;
    cin >> groundSnow >> rate >> meltRate;
    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, rate, meltRate) << endl;
    return 0;
}