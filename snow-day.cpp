#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltRate) {
    float snow = initialSnow;
    for(int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= meltRate * snow;
    }
    return snow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    cout << calculateSnow(hours, initialSnow, snowFallRate, meltRate) << endl;
    return 0;
}