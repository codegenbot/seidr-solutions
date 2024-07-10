#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float meltingPerHour) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall - meltingPerHour;
    }
    return round(snow * 100000.0) / 100000.0;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, meltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> meltingPerHour;
    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, rateOfSnowFall, meltingPerHour) << endl;
    return 0;
}