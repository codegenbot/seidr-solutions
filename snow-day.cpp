#include <iostream>
using namespace std;

double snowDay(int hours, double groundSnow, double rateSnowFall, double proportionMelt) {
    double snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateSnowFall;
        snow -= proportionMelt * snow;
    }
    return snow;
}

int main() {
    int hours;
    double groundSnow, rateSnowFall, proportionMelt;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the amount of snow on the ground: ";
    cin >> groundSnow;
    cout << "Enter the rate of snow fall: ";
    cin >> rateSnowFall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionMelt;
    double result = snowDay(hours, groundSnow, rateSnowFall, proportionMelt);
    cout << "The amount of snow on the ground after " << hours << " hours is " << result << endl;
    return 0;
}