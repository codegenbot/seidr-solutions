#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow += snowFallRate;
        initialSnow -= initialSnow * meltRate;
    }
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    float result = calculateSnow(hours, initialSnow, snowFallRate, meltRate);
    cout << result << endl;
    return 0;
}