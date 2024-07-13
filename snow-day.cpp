#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow *= (1 - proportionMelting);
    }
    
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfFall, proportionMelting;

    cin >> hours >> initialSnow >> rateOfFall >> proportionMelting;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, proportionMelting);

    return 0;
}