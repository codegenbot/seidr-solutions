#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateFall - groundSnow * meltRate;
        if (totalSnow > groundSnow) {
            totalSnow -= (totalSnow - groundSnow);
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateFall, meltRate;
    cin >> groundSnow >> rateFall >> meltRate;
    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rateFall, meltRate) << endl;
    cout.unsetf(ios::fixed); 
    return 0;
}