#include <iostream>
using namespace std;

float calculateSnowAmount(int hours, float initialSnow, float snowFallRate, float meltRate) {
    float snowAmount = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowAmount += snowFallRate;
        snowAmount -= meltRate * snowAmount;
    }
    return snowAmount;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    float finalSnowAmount = calculateSnowAmount(hours, initialSnow, snowFallRate, meltRate);
    cout << finalSnowAmount << endl;
    return 0;
}