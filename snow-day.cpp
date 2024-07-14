#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateFall, float rateMelt) {
    float totalSnow = 0;
    for (int i = 0; i < hours; ++i) {
        groundSnow += rateFall;
        groundSnow -= groundSnow * rateMelt / 100.0f;
    }
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, rateMelt;
    cin >> groundSnow >> rateFall >> rateMelt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateFall, rateMelt) << endl;
    return 0;
}