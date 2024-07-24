#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        totalSnow -= totalSnow * meltRate / 100.0f;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, meltRate;
    cin >> groundSnow >> rate >> meltRate;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rate, meltRate) << endl;

    return 0;
}