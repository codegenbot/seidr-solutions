#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow *= (1 - meltRate / 100.0);
    }
    return snow;
}

int main() {
    int hours;
    float initialSnow, rateOfFall, meltRate;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the initial snow in cm: ";
    cin >> initialSnow;
    cout << "Enter the rate of fall in cm/hour: ";
    cin >> rateOfFall;
    cout << "Enter the melt rate as a percentage: ";
    cin >> meltRate;

    double result = snowDay(hours, initialSnow, rateOfFall, meltRate);

    cout << fixed << showpoint << setprecision(2);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << result << " cm" << endl;

    return 0;
}