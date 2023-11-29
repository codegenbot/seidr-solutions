#include <iostream>
#include <iomanip>

using namespace std;

float calculateSnow(int hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;

    for (int i = 0; i < hours; i++) {
        float snowMelted = snowOnGround * snowMeltingRate;
        snowOnGround += snowFallRate;
        snowOnGround -= snowMelted;
    }

    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;

    cout << fixed;
    cout << setprecision(16);

    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << result << endl;

    return 0;
}