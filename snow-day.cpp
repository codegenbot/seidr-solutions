#include <iomanip>
#include <iostream>
using namespace std;

double snowDay(int hours, double initialSnow, double rateOfSnowFall, double proportionOfSnowMeltingPerHour) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall - proportionOfSnowMeltingPerHour * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    double initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> fixed << setprecision(17) >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(17) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;