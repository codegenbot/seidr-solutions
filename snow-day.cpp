#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    double totalSnow = 0.0;
    
    for (int i = 1; i <= hours; i++) {
        if (i == 1)
            totalSnow += initialSnow;
        else
            totalSnow += rateOfSnowfall;
        
        if (proportionMelting != 0.0) 
            totalSnow -= totalSnow * proportionMelting / 100.0;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMelting;
    
    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionMelting;
    
    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMelting) << endl;
    
    return 0;
}