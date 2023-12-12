#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltRate) {
    float snow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= snow * meltRate;
    }
    
    return snow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltRate);
    cout << finalSnow << endl;
    
    return 0;
}