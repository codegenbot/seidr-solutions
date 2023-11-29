#include <iostream>
#include <iomanip>

using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;

    for (int i = 0; i < hours; i++) {
        float snowMelted = snowOnGround * snowMeltingRate;
        snowOnGround += snowFallRate;
        snowOnGround -= snowMelted;
    }

    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;

    cout << fixed << setprecision(15);
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << result << endl;

    return 0;
}