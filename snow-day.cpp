#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        if (proportionMelting > 0.0) {
            snow -= snow * proportionMelting;
        }
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, proportionMelting;
    cin >> initialSnow >> rateOfFall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, proportionMelting) << endl;
    return 0;
}