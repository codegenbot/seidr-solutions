#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMelting) {
    return initialSnow + (rateOfSnowfall * hours) - (proportionOfMelting * hours);
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    
    float initialSnow, rateOfSnowfall, proportionOfMelting;
    cout << "Enter how much snow is on the ground: ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall: ";
    cin >> rateOfSnowfall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfMelting;

    float result = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMelting);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}