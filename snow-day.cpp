```cpp
#include <iostream>
#include <iomanip>
using namespace std;

long double snowDay(int hours, long double initialSnow, long double rateOfFall, long double meltRate) {
    long double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow -= (snow * meltRate / 100.0);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    long double initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltRate) << endl;
    return 0;}