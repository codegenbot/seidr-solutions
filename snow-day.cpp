#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall - proportionOfSnowMelting * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMelting;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;
    return 0;
}