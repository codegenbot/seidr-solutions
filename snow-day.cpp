#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowfall;
        snow -= snow * proportionOfMeltingPerHour;
    }
    return snow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;

    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;
    cout << "Enter the initial amount of snow on the ground (in meters): ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall (in meters per hour): ";
    cin >> rateOfSnowfall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour);
    cout << fixed << setprecision(9) << result << endl;
    return 0;
}