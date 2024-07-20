```cpp
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
    cout << "Enter the number of hours: ";
    cin >> hours;

    float initialSnow, rateOfFall, meltRate;
    cout << "Enter initial snow: ";
    cin >> initialSnow;
    cout << "Enter rate of fall (in inches): ";
    cin >> rateOfFall;
    cout << "Enter melting rate (as a percentage): ";
    cin >> meltRate;

    double result = snowDay(hours, initialSnow, rateOfFall / 12.0f, meltRate / 100.0f);
    cout << "Result: " << result << endl;
    return 0;
}