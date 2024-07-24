#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfFall, float proportionMelting) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall - proportionMelting * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, proportionMelting;
    cin >> groundSnow >> rateOfFall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, proportionMelting) << endl;
    return 0;
}