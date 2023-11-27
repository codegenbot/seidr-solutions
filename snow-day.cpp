��#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snowOnGround = initialSnow;

    for (int i = 0; i <= hours; i++) {
        float snowAdded = snowFallRate * (1 - snowMeltRate);
        float snowMelted = snowOnGround * snowMeltRate;
        snowOnGround = snowOnGround + snowAdded - snowMelted;
    }

    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;

    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    cout << result << endl;

    return 0;
}