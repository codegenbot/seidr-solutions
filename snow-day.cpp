#include <iostream>
#include <algorithm>

using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;

    for (float i = 0; i < hours; i += 1.0) {
        snowOnGround += snowFallRate;
        float snowMelted = snowOnGround * snowMeltingRate;
        snowOnGround -= snowMelted;
        snowOnGround = max(0.0f, snowOnGround);
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