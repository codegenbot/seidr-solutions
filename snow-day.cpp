```c++
#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    long double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow -= (long double)snow * meltRate / 100.0;
    }
    return (double)snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltRate) << endl;
    return 0;
}