#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMelting) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (i > 0) totalSnow -= totalSnow * proportionMelting;
        
        totalSnow += rateOfSnowFall;
    }
    
    return totalSnow;
}

int main() {
    int hours, rateOfSnowFall;
    float initialSnow, proportionMelting;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionMelting;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, rateOfSnowFall, proportionMelting) << endl;

    return 0;
}