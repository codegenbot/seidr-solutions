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
    int hours = 0;
    cout << "Enter the number of hours: ";
    cin >> hours;

    float initialSnow = 0.0f;
    cout << "Enter the initial snow on the ground: ";
    cin >> initialSnow;

    float rateOfFall = 0.0f;
    cout << "Enter the rate of fall (in cm/h): ";
    cin >> rateOfFall;

    float meltRate = 0.0f;
    cout << "Enter the rate of melting (as a percentage): ";
    cin >> meltRate;

    double result = snowDay(hours, initialSnow, rateOfFall, meltRate);

    cout << "Result: " << result << endl;

    return 0;
}