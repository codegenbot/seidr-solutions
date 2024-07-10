#include <iostream>
using namespace std;

double snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - totalSnow * proportionMeltingPerHour;
    }
    return totalSnow;
}

int main() {
    int h;
    float s, r, p;
    cin >> h >> s >> r >> p;
    cout << fixed << setprecision(10) << snowDay(h, s, r, p);
    return 0;
}