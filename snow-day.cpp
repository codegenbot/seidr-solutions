#include <iostream>
using namespace std;

double calculateSnow(int hours, float groundSnow, float rateOfFall, float proportionMelting) {
    double snow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (i == 0)
            snow += groundSnow + rateOfFall;
        else
            snow += rateOfFall - proportionMelting * snow;
    }
    
    return snow;
}

int main() {
    int hours;
    float groundSnow, rateOfFall, proportionMelting;

    cin >> hours >> groundSnow >> rateOfFall >> proportionMelting;
    cout << fixed << setprecision(10) << calculateSnow(hours, groundSnow, rateOfFall, proportionMelting);

    return 0;
}