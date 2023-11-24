#include <iostream>
using namespace std;

float calculateSnowOnGround(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    float snowOnGround = initialSnow;
    for (int i = 1; i <= hours; i++) {
        snowOnGround += rateOfSnowFall;
        snowOnGround -= proportionOfSnowMelting * snowOnGround;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMelting;
    
    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMelting;
    cout << calculateSnowOnGround(hours, initialSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;
    
    return 0;
}