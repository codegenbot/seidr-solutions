#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float currentSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    float totalSnow = currentSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall - proportionOfSnowMelting * currentSnow;
        totalSnow += currentSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, rateOfSnowFall, proportionOfSnowMelting;
    cin >> currentSnow >> rateOfSnowFall >> proportionOfSnowMelting;
    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;
    return 0;
}