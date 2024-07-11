#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float proportionMelting) {
    return groundSnow + (rateOfFall * hours - proportionMelting * hours);
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, proportionMelting;
    cin >> groundSnow >> rateOfFall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, proportionMelting) << endl;
    return 0;
}