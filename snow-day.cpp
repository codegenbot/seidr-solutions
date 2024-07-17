#include <iostream>
using namespace std;

double calculateSnow(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    double totalSnow = 0.0;
    
    for (int i = 1; i <= hours; i++) {
        if (i == 1)
            totalSnow += initialSnow;
        else
            totalSnow += rateOfSnowFall;
        
        totalSnow *= (1 - proportionOfSnowMelting);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;

    float initialSnow, rateOfSnowFall, proportionOfSnowMelting;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMelting;

    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;

    return 0;
}