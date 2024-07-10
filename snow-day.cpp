#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= totalSnow * proportionMeltingPerHour;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}