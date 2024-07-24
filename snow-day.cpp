#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMelting) {
    double snow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall;
        snow *= (1 - proportionMelting);
    }
    
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMelting;
    cin >> initialSnow >> rateOfSnowFall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionMelting);
    return 0;
}