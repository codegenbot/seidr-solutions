#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFallRate, float meltRate) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= meltRate * (totalSnow > 0);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltRate;
    cin >> initialSnow >> snowFallRate >> meltRate;
    
    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, snowFallRate, meltRate) << endl;
    
    return 0;
}