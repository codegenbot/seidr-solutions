```cpp
#include <iomanip>
using namespace std;

long double snowDay(int hours, long double initialSnow, long double rateOfSnowFall, long double proportionOfSnowMeltingPerHour) {
    long double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall - proportionOfSnowMeltingPerHour * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    long double initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}