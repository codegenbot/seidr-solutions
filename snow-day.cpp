#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    long double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        long double temp = snow + rateOfFall;
        snow = temp - temp * meltRate / 100.0;
    }
    return static_cast<double>(snow);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltRate) << endl;
    return 0;
}