#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * groundSnow;
        groundSnow = max(0.0f, groundSnow + rateOfSnowFall - proportionOfSnowMeltingPerHour * groundSnow);
    }
    return round(totalSnow * 100000.0) / 100000.0;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}