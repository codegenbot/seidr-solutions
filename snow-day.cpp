#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow -= proportionMelting * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter number of hours: ";
    cin >> hours;

    float initialSnow;
    cout << "Enter the amount of snow on the ground initially (in cm): ";
    cin >> initialSnow;

    float rateOfSnowfall;
    cout << "Enter the rate of snow fall per hour (in cm): ";
    cin >> rateOfSnowfall;

    float proportionMelting;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionMelting;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMelting);

    cout << "After " << hours << " hours, there is " << result << " cm of snow." << endl;
    
    return 0;
}