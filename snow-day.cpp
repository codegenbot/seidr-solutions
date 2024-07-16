```cpp
#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow -= proportionMeltingPerHour;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << fixed << setprecision(2) << showpoint << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
}