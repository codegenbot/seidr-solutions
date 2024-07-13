#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    double totalSnow = 0.0;
    for (int i = 1; i <= hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= totalSnow * proportionOfSnowMelting;
    }
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMelting;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;
    return 0;
}