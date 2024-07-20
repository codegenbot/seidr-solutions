#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMelting) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall - proportionMelting * currentSnow;
    }
    return currentSnow;
}

int main() {
    int n;
    cin >> n;

    float snow, rate, melt;
    cin >> snow >> rate >> melt;

    cout << fixed << setprecision(10) << snowDay(n, snow, rate, melt);
    
    return 0;
}