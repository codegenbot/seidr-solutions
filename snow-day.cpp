#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 1; i <= hours; i++) {
        if (rateOfSnowFall > 0.0) {
            totalSnow += rateOfSnowFall;
        }
        if (proportionMeltingPerHour > 0.0 && initialSnow > 0.0) {
            initialSnow *= (1 - proportionMeltingPerHour);
        }
    }

    return initialSnow + totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;

    cout << "Enter the number of hours: ";
    cin >> hours;

    cout << "Enter the amount of snow on the ground (initial): ";
    cin >> initialSnow;

    cout << "Enter the rate of snow fall per hour: ";
    cin >> rateOfSnowFall;

    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour);

    cout.setprecision(10);
    cout << fixed;
    cout << "After " << hours << " hours, there will be approximately " << result << " inches of snow on the ground." << endl;

    return 0;
}