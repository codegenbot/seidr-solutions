#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfSnowMelting) {
    return initialSnow + rateOfSnowfall * hours - proportionOfSnowMelting * hours;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfSnowMelting;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfSnowMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfSnowMelting) << endl;
    return 0;
}