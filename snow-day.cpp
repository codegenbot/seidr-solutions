#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateSnowfall, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateSnowfall - meltRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateSnowfall, meltRate;
    cin >> groundSnow >> rateSnowfall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateSnowfall, meltRate) << endl;
    return 0;
}