#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    return initialSnow + (rateOfSnowFall * hours) - (proportionOfSnowMelting * hours);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMelting;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMelting;

    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;

    return 0;
}