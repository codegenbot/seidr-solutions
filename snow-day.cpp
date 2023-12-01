#include <iostream>
using namespace std;

float calculateSnow(float hours, float currentSnow, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= meltRate * currentSnow;
    }
    return currentSnow;
}

int main() {
    float hours, currentSnow, snowFallRate, meltRate;
    cin >> hours >> currentSnow >> snowFallRate >> meltRate;
    float finalSnow = calculateSnow(hours, currentSnow, snowFallRate, meltRate);
    cout << finalSnow << endl;
    return 0;
}