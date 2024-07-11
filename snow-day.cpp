#include <iostream>
using namespace std;

double snowDay(int hours, double initialSnow, double rateOfSnowFall, double proportionOfSnowMeltingPerHour) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall;
        snow -= snow * proportionOfSnowMeltingPerHour;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    double initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}