#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float rateOfFall, float proportionMelting) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += currentSnow;
        currentSnow += rateOfFall - proportionMelting * currentSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, rateOfFall, proportionMelting;
    cin >> currentSnow >> rateOfFall >> proportionMelting;
    
    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfFall, proportionMelting) << endl;
    
    return 0;
}