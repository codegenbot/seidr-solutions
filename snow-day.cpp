#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMelting) {
    return initialSnow + (hours * rateOfSnowfall) - ((proportionOfMelting * 10000.0f / 3600.0f) * initialSnow);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfMelting;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMelting) << endl;
    return 0;
}