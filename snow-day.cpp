#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float rateOfSnowFall, float proportionOfMelting) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += rateOfSnowFall;
        snowOnGround -= snowOnGround * proportionOfMelting;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, rateOfSnowFall, proportionOfMelting;
    cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfMelting;

    float result = calculateSnow(hours, snowOnGround, rateOfSnowFall, proportionOfMelting);
    cout << result << endl;

    return 0;
}