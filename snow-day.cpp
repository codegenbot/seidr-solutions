Here is the modified code:

#include <iostream>
using namespace std;
#include <iomanip>

float snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateFall - meltRate;
        if (totalSnow > groundSnow) {
            totalSnow -= (totalSnow - groundSnow);
        }
        else if (totalSnow < 0) {
            totalSnow = 0;
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