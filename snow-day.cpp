```cpp
#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    float snow = initialSnow;
    for (int h = 0; h < hours; ++h) {
        snow += rateOfSnowfall;
        snow -= proportionMeltingPerHour * (snow > 0 ? snow : 0);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << fixed << setprecision(2) << showpoint << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
}