#include <iostream>
using namespace std;

int snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionOfSnowMelting);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMelting;
    
    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMelting;
    
    cout << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;
    
    return 0;
}