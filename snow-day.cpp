#include <iostream>
using namespace std;

float calculateSnowOnGround(int hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snowOnGround = initialSnow;
    for (int i = 1; i <= hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= (snowOnGround * snowMeltingRate);
    }
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    float finalSnow = calculateSnowOnGround(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << finalSnow << endl;
    return 0;
}