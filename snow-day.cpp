#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float currentSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    float snowAdded = 0, snowMelted = 0;
    for (int i = 0; i < hours; i++) {
        snowAdded += rateOfSnowFall;
        snowMelted = currentSnow * proportionOfSnowMelting / 100.0f;
        currentSnow += snowAdded - snowMelted;
    }
    
    return currentSnow;
}

int main() {
    int hours;
    float currentSnow, rateOfSnowFall, proportionOfSnowMelting;

    cin >> hours >> currentSnow >> rateOfSnowFall >> proportionOfSnowMelting;

    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;

    return 0;
}