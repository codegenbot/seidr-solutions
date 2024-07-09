#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMelting) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > 0) {
            totalSnow += rateOfSnowFall;
        }
        
        if (proportionOfSnowMelting > 0 && totalSnow > 0) {
            double meltedSnow = min(totalSnow, proportionOfSnowMelting);
            totalSnow -= meltedSnow;
        }
    }
    
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMelting;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMelting;

    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMelting) << endl;

    return 0;
}