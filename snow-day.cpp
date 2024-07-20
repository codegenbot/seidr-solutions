```c++
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

int main(int argc, char** argv) {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;

    float initialSnow;
    cout << "Enter the initial amount of snow: ";
    cin >> initialSnow;

    float rateOfFall;
    cout << "Enter the rate of snow fall: ";
    cin >> rateOfFall;

    float meltRate;
    cout << "Enter the proportion of snow melting per hour (in percent): ";
    cin >> meltRate;

    double result = snowDay(hours, initialSnow, rateOfFall, meltRate);

    cout << "Result: " << result << endl;

    return 0;
}