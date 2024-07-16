#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > 0) {
            totalSnow += rateOfSnowFall;
        }
        totalSnow *= (1 - proportionOfSnowMelting);
    }
    return totalSnow + groundSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionOfSnowMelting;

    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMelting;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;

    return 0;
}