#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowFall, float proportionOfMelting) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall - (proportionOfMelting * snow);
    }
    return snow;
}

int main() {
    float hours, initialSnow, rateOfSnowFall, proportionOfMelting;
    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfMelting;
    float result = calculateSnow(hours, initialSnow, rateOfSnowFall, proportionOfMelting);
    cout << result << endl;
    return 0;
}