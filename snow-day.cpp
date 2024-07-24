```cpp
#include <iostream>
#include <iomanip>
using namespace std;

long double snowDay(int hours, long double initialSnow, long double rateOfSnowFall, long double proportionOfMeltingPerHour) {
    long double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        long double newSnow = rateOfSnowFall - totalSnow * proportionOfMeltingPerHour;
        totalSnow += newSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    long double initialSnow, rateOfSnowFall, proportionOfMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfMeltingPerHour);
    return 0;
}