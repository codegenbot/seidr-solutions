#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow *= (1 - proportionMelting);
    }
    
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMelting;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionMelting;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMelting);

    return 0;
}