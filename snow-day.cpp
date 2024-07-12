#include <iostream>
using namespace std;

float snowDay(int hours, float currentSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= totalSnow * proportionOfSnowMelting / 100.0f;
    }
    
    return currentSnow + totalSnow;
}

int main() {
    int hours;
    float currentSnow, rateOfSnowFall, proportionOfSnowMelting;

    cin >> hours >> currentSnow >> rateOfSnowFall >> proportionOfSnowMelting;

    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;

    return 0;
}