#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float snowFall, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFall - meltRate * groundSnow;
        groundSnow = max(0.0f, groundSnow + snowFall - meltRate * groundSnow);
    }
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowFall, meltRate;
    cin >> groundSnow >> snowFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, snowFall, meltRate) << endl;
    return 0;
}