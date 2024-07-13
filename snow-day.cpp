#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMelting) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionMelting);
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfSnowFall, proportionMelting;
    cin >> groundSnow >> rateOfSnowFall >> proportionMelting;
    
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionMelting) << endl;

    return 0;
}