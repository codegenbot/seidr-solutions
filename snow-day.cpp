#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMelting) {
    double totalSnow = 0;
    for (int i = 0; i < hours; ++i) {
        if (rateOfSnowFall > 0) {
            totalSnow += rateOfSnowFall;
        }
        totalSnow *= (1 - proportionMelting);
    }
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMelting;
    cin >> initialSnow >> rateOfSnowFall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionMelting);
    return 0;
}