#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowfallPerHour, float meltingRatePerHour) {
    return initialSnow + (snowfallPerHour * hours - meltingRatePerHour * hours);
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;

    float initialSnow, snowfallPerHour, meltingRatePerHour;
    cout << "Enter the amount of snow on the ground (initial): ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall per hour: ";
    cin >> snowfallPerHour;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> meltingRatePerHour;

    float result = snowDay(hours, initialSnow, snowfallPerHour, meltingRatePerHour);
    cout << fixed << setprecision(6) << result << endl;

    return 0;
}