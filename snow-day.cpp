#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= currentSnow * meltRate;
    }
    return currentSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltRate);
    cout << finalSnow << endl;
    return 0;
}