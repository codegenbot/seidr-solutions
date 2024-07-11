#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        if (meltRate > 0) {
            float melted = min(totalSnow, totalSnow * meltRate);
            totalSnow -= melted;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, meltRate;
    cin >> groundSnow >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, meltRate) << endl;
    return 0;
}