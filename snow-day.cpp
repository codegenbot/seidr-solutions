#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    return initialSnow + rateOfSnowFall * hours - proportionMeltingPerHour * hours;
}

int main() {
    int h;
    cin >> h;
    float s0, sr, sm;
    cin >> s0 >> sr >> sm;
    cout << fixed << setprecision(10);
    cout << snowDay(h, s0, sr, sm) << endl;
    return 0;
}