#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow *= (1 - proportionMelting);
    }
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfFall, proportionMelting;

    cin >> hours >> initialSnow >> rateOfFall >> proportionMelting;
    
    double result = snowDay(hours, initialSnow, rateOfFall, proportionMelting);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}