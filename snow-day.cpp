#include <iostream>
using namespace std;

float calculateSnow(int hours, float groundSnow, float snowFall, float meltRate) {
    for (int i = 0; i < hours; i++) {
        if (snowFall > 0.0) {
            groundSnow += snowFall;
        }
        groundSnow -= groundSnow * meltRate / 100.0f;
    }
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowFall, meltRate;
    cin >> groundSnow >> snowFall >> meltRate;
    cout << fixed << setprecision(6) << calculateSnow(hours, groundSnow, snowFall, meltRate) << endl;
    return 0;
}