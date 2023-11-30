#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowfall, float proportionOfMelting) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowfall;
        snow -= snow * proportionOfMelting;
    }
    return snow;
}

int main() {
    float hours, initialSnow, rateOfSnowfall, proportionOfMelting;
    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfMelting;
    cout << calculateSnow(hours, initialSnow, rateOfSnowfall, proportionOfMelting) << endl;
    return 0;
}