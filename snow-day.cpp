#include <iostream>
using namespace std;
float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate; // add snow
        initialSnow -= initialSnow * snowMeltRate; // melt snow
    }
    return initialSnow;
}
int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    cout << finalSnow << endl;
    return 0;
}