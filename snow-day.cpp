#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionMeltingPerHour * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;
    cout << "Enter the initial snow on the ground: ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall: ";
    cin >> rateOfSnowFall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;
    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}