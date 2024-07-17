#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > 0) {
            totalSnow += rateOfSnowFall;
        }
        
        if (proportionOfSnowMelting > 0 && initialSnow > 0) {
            initialSnow -= initialSnow * proportionOfSnowMelting / 100.0;
        }
    }
    
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMelting;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;
    return 0;
}