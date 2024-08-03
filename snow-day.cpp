#include <iostream>
using namespace std;

float calculateSnow(float groundSnow, float rateOfFall, float proportionMelting) {
    return groundSnow + (rateOfFall - proportionMelting);
}

int main() {
    int hours;
    cin >> hours;
    float initialGroundSnow, rateOfFall, proportionMelting;
    cin >> initialGroundSnow >> rateOfFall >> proportionMelting;

    for (int i = 0; i < hours; i++) {
        initialGroundSnow = calculateSnow(initialGroundSnow, rateOfFall, proportionMelting);
    }

    cout << fixed << setprecision(10) << initialGroundSnow;
    
    return 0;
}