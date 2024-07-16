#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    float snow = 0;
    for (int i = 1; i <= hours; ++i) {
        snow += rateOfSnowfall;
        if (snow > 0)
            snow -= proportionMeltingPerHour;
    }
    return initialSnow + snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
    return 0;