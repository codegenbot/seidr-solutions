```
#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowfall - proportionMeltingPerHour;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
    return 0;
}