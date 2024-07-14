#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (rateFall > 0) {
            totalSnow += rateFall;
        }
        if (meltRate > 0 && groundSnow > 0) {
            groundSnow -= groundSnow * meltRate / 100.0f;
        }
    }
    return groundSnow + totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateFall, meltRate;
    
    cin >> hours;
    cin >> groundSnow;
    cin >> rateFall;
    cin >> meltRate;

    cout << fixed << setprecision(8);
    cout << snowDay(hours, groundSnow, rateFall, meltRate) << endl;

    return 0;
}