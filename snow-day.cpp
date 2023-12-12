#include <iostream>
using namespace std;

float calculateSnow(float hours, float currentSnow, float snowfallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        currentSnow += snowfallRate;
        currentSnow *= (1 - meltRate);
    }
    return currentSnow;
}

int main() {
    int hours;
    float currentSnow, snowfallRate, meltRate;

    cin >> hours >> currentSnow >> snowfallRate >> meltRate;
    cout << calculateSnow(hours, currentSnow, snowfallRate, meltRate) << endl;

    return 0;
}