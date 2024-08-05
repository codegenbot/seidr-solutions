#include <iostream>
using namespace std;

float calculateSnow(int hours, float initialSnow, float rateOfFall, float proportionMeltingPerHour) {
    float snow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        snow += rateOfFall;
        snow -= snow * proportionMeltingPerHour;
    }
    return snow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    float initialSnow, rateOfFall, proportionMeltingPerHour;
    cout << "Enter the initial amount of snow: ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall per hour: ";
    cin >> rateOfFall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;
    float result = calculateSnow(hours, initialSnow, rateOfFall, proportionMeltingPerHour);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}