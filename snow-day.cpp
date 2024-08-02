Here is the solution:

#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfSnowMelting) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowfall;
        snow -= snow * proportionOfSnowMelting;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfSnowMelting;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfSnowMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfSnowMelting) << endl;
    return 0;
}