#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateFall;
        if (totalSnow > groundSnow) {
            totalSnow -= (totalSnow - groundSnow);
        } else {
            totalSnow -= groundSnow * meltRate;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, meltRate;
    cin >> groundSnow >> rateFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateFall, meltRate) << endl;
    return 0;
}