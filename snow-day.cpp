#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float currentSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow = currentSnow + rateOfSnowFall * (i + 1);
        totalSnow -= totalSnow * proportionOfSnowMelting / 100.0f;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float currentSnow, rateOfSnowFall, proportionOfSnowMelting;

    cin >> hours >> currentSnow >> rateOfSnowFall >> proportionOfSnowMelting;

    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;

    return 0;
}