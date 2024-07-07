#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    return initialSnow + rateOfSnowFall * hours - proportionMeltingPerHour * (hours > 0 ? hours : 0);
}

int main() {
    int n;
    cin >> n;

    float s1, r, p;
    cin >> s1 >> r >> p;

    cout << fixed << setprecision(10) << snowDay(n, s1, r, p) << endl;

    return 0;
}