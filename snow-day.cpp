#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltingRate) {
    float currentSnow = initialSnow;
    for (int i = 1; i <= hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * snowMeltingRate;
    }
    return currentSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltingRate;

    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, snowMeltingRate);
    cout << finalSnow << endl;

    return 0;
}