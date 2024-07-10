#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    float snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateFall - meltRate;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, meltRate;
    cin >> groundSnow >> rateFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateFall, meltRate) << endl;
    return 0;
}