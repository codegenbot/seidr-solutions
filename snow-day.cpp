#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateSnowFall, float meltRate) {
    return groundSnow + (rateSnowFall * hours) - (meltRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateSnowFall, meltRate;
    cin >> groundSnow >> rateSnowFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateSnowFall, meltRate) << endl;
    return 0;
}