#include <iostream>
using namespace std;

float calculateSnow(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    return (initialSnow + (rateOfSnowFall * hours)) * (1 - (proportionOfSnowMeltingPerHour * hours));
}

int main() {
    int hours;
    cout << "Enter number of hours: ";
    cin >> hours;

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cout << "Enter initial snow on the ground: ";
    cin >> initialSnow;
    cout << "Enter rate of snow fall per hour: ";
    cin >> rateOfSnowFall;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    float result = calculateSnow(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    cout << fixed << setprecision(10) << result << endl;  // Print the result with a precision of 10

    return 0;
}