#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMelting) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowfall > 0.0) {
            totalSnow += rateOfSnowfall;
        }
        
        if (proportionOfMelting > 0.0) {
            totalSnow -= initialSnow * proportionOfMelting;
        } else {
            totalSnow = min(totalSnow, (double)initialSnow);
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfMelting;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfMelting;
    
    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMelting) << endl;

    return 0;
}