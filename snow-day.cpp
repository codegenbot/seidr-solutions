#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateSnowFall, float proportionMelting) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateSnowFall;
        totalSnow *= (1 - proportionMelting);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateSnowFall, proportionMelting;
    cin >> groundSnow >> rateSnowFall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateSnowFall, proportionMelting) << endl;
    
    return 0;
}