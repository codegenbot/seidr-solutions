#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = static_cast<double>(initialSnow);
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > totalSnow * proportionOfSnowMeltingPerHour) {
            totalSnow += rateOfSnowFall;
        } else {
            totalSnow -= totalSnow * proportionOfSnowMeltingPerHour;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    double totalSnow = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);
    cout << fixed << setprecision(2) << totalSnow << endl;
    return 0;
}