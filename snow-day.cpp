#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFallRate, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (i > 0) {
            totalSnow -= totalSnow * meltRate / 100.0f;
        }
        totalSnow += initialSnow + snowFallRate;
    }
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltRate);
    return 0;
}