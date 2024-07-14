#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    return groundSnow + rateOfSnowFall * hours - proportionOfSnowMeltingPerHour * hours;
}

int main() {
    int h;
    cin >> h;
    float gsn, rsf, psmp;
    cin >> gsn >> rsf >> psmp;
    cout << fixed << setprecision(10) << snowDay(h, gsn, rsf, psmp) << endl;
    return 0;
}