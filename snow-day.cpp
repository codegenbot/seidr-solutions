#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double snow = 0;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall;
        if (proportionOfSnowMeltingPerHour > 0.0) {
            snow -= snow * proportionOfSnowMeltingPerHour;
        }
    }
    return groundSnow + snow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}