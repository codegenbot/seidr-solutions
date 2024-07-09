#include <iostream>
using namespace std;

float calculateSnow(int hours, float currentSnow, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= meltRate;
    }
    return currentSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, snowFallRate, meltRate;
    cin >> currentSnow >> snowFallRate >> meltRate;

    float calculatedSnow = calculateSnow(hours, currentSnow, snowFallRate, meltRate);
    cout << fixed << setprecision(2) << calculatedSnow << endl;
    
    return 0;
}