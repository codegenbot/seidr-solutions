#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - initialSnow * proportionOfSnowMelting;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMelting;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;
    return 0;
}