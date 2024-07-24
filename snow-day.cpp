#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0.0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * groundSnow;
        groundSnow = max(0.0, groundSnow + rateOfSnowFall - proportionOfSnowMeltingPerHour * groundSnow);
    }
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}