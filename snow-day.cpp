#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowfall, float proportionOfMelting) {
    float snowOnGround = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snowOnGround += rateOfSnowfall;
        snowOnGround -= snowOnGround * proportionOfMelting;
    }
    
    return snowOnGround;
}

int main() {
    float hours, initialSnow, rateOfSnowfall, proportionOfMelting;
    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfMelting;
    
    float result = calculateSnow(hours, initialSnow, rateOfSnowfall, proportionOfMelting);
    cout << result << endl;
    
    return 0;
}