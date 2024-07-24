#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float proportionMelting) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; ++i) {
        double newSnow = initialSnow + rateOfFall;
        initialSnow = max(0.0, initialSnow - proportionMelting);
        totalSnow += initialSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfFall, proportionMelting;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the initial snow on the ground (in mm): ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall (in mm/hour): ";
    cin >> rateOfFall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionMelting;

    double result = snowDay(hours, initialSnow, rateOfFall, proportionMelting);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}