#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    float snowOnGround = 0;
    
    if (rateOfSnowfall > 0) {
        snowOnGround += rateOfSnowfall * hours;
    }
    
    float snowAfterAdding = initialSnow + snowOnGround;
    
    if (proportionMelting > 0) {
        float snowMelted = snowAfterAdding * proportionMelting * hours;
        
        return max(0, snowAfterAdding - snowMelted);
    } else {
        return snowAfterAdding;
    }
}

int main() {
    int hours;
    cin >> hours;
    
    float initialSnow, rateOfSnowfall, proportionMelting;
    cin >> initialSnow >> rateOfSnowfall >> proportionMelting;
    
    cout << fixed << setprecision(10);
    cout << calculateSnow(hours, initialSnow, rateOfSnowfall, proportionMelting) << endl;
    
    return 0;
}