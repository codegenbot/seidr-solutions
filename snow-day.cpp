#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    double totalSnow = 0.0;
    for (int i = 0; i < hours; i++) {
        if (rateOfFall > 0.0) {
            totalSnow += rateOfFall;
        }
        if (proportionMelting > 0.0) {
            totalSnow -= min(totalSnow, initialSnow + rateOfFall * hours - proportionMelting * totalSnow);
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, proportionMelting;
    cin >> initialSnow >> rateOfFall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, proportionMelting) << endl;
    return 0;
}