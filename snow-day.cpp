#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; ++i) {
        totalSnow += rateOfFall - meltPerHour * groundSnow;
        groundSnow = totalSnow > 0 ? min(totalSnow, groundSnow + rateOfFall - meltPerHour * groundSnow) : 0;
    }
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltPerHour;
    cin >> groundSnow >> rateOfFall >> meltPerHour;
    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rateOfFall, meltPerHour) << endl;
    return 0;
}