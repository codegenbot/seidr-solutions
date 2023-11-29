#include <iostream>
#include <iomanip>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;

    for (float i = 0.0; i < hours; i += 1.0) {
        float snowMelted = snowOnGround * snowMeltingRate;
        snowOnGround += snowFallRate;
        snowOnGround -= snowMelted;
    }

    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;

    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << fixed << setprecision(15) << result << endl;

    return 0;
}