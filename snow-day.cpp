#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;
    
    float snowMelted = (initialSnow * snowMeltingRate) / 100;
    snowOnGround -= snowMelted;

    for (float i = 0; i < hours; i += 1.0) {
        snowOnGround += snowFallRate;
        snowMelted = (snowOnGround * snowMeltingRate) / 100;
        snowOnGround -= snowMelted;
    }
    
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << result << endl;
    
    return 0;
}