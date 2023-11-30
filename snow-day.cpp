#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float snow = initialSnow;
    for (float i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= snow * snowMeltingRate;
    }
    return snow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;
    cout << calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate) << endl;
    return 0;
}