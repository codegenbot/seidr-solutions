#include <iostream>
#include <cmath>
using namespace std;

float calculateSnow(float hours, float currentSnow, float snowFallRate, float meltRate) {
    float totalSnow = currentSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= totalSnow * meltRate;
    }
    return totalSnow;
}

int main() {
    float hours, currentSnow, snowFallRate, meltRate;
    cin >> hours >> currentSnow >> snowFallRate >> meltRate;
    float result = calculateSnow(hours, currentSnow, snowFallRate, meltRate);
    cout << result << endl;
    return 0;
}