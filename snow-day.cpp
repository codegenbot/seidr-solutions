#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    float newSnow = 0;
    for (int i = 0; i < hours; i++) {
        newSnow += rateOfSnowfall;
        newSnow -= proportionMeltingPerHour;
    }
    return initialSnow + newSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;
    cout << fixed << setprecision(2) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
    return 0; }