#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    return groundSnow + (hours * rateOfFall) - ((hours * meltRate));
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    float groundSnow, rateOfFall, meltRate;
    cout << "Enter the initial amount of snow on the ground: ";
    cin >> groundSnow;
    cout << "Enter the rate of snow fall per hour: ";
    cin >> rateOfFall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> meltRate;
    float result = snowDay(hours, groundSnow, rateOfFall, meltRate);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}