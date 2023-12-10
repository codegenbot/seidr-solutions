#include <iostream>
#include <cmath>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfMelting) {
    double totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionOfMelting);
    }
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionOfMelting;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the amount of snow on the ground: ";
    cin >> groundSnow;
    cout << "Enter the rate of snow fall: ";
    cin >> rateOfSnowFall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfMelting;
    double totalSnow = snowDay(hours, groundSnow, rateOfSnowFall, proportionOfMelting);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << endl;
    return 0;
}