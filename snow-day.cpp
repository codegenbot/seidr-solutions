#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= snowMeltRate;
    }
    return currentSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    cout << finalSnow << endl;
    return 0;
}