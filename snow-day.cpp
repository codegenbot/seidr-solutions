#include <vector>
#include <iostream>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMelting) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        
        if (totalSnow > initialSnow) {
            totalSnow -= initialSnow * proportionMelting;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMelting;
    cin >> initialSnow >> rateOfSnowFall >> proportionMelting;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, rateOfSnowFall, proportionMelting) << endl;

    return 0;
}