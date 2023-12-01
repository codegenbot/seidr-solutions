#include <iostream>
using namespace std;

float calculateSnow(float hours, float snow, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= meltRate * snow;
    }
    return snow;
}

int main() {
    float hours, snow, snowFallRate, meltRate;
    cin >> hours >> snow >> snowFallRate >> meltRate;
    float result = calculateSnow(hours, snow, snowFallRate, meltRate);
    cout << result << endl;
    return 0;
}