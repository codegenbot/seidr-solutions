#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMelting * groundSnow;
        groundSnow = max(0.0f, groundSnow + rateOfSnowFall - proportionOfSnowMelting * groundSnow);
    }
    
    return groundSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionOfSnowMelting;

    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMelting;
    
    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfSnowMelting);
    
    return 0;
}