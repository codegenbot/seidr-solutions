#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow *= (1 - proportionMelting);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, proportionMelting;
    cin >> initialSnow >> rateOfFall >> proportionMelting;
    cout << fixed << setprecision(8) << snowDay(hours, initialSnow, rateOfFall, proportionMelting) << endl;
    return 0;
}