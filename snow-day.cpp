#include <iostream>
using namespace std;

float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_melting) {
    float total_snow = initial_snow;
    for (int i = 0; i < hours; ++i) {
        total_snow += rate_of_snowfall - (total_snow * proportion_melting);
    }
    return total_snow;
}

int main() {
    int hours;
    float initial_snow, rate_of_snowfall, proportion_melting;

    cin >> hours >> initial_snow >> rate_of_snowfall >> proportion_melting;
    cout << fixed << setprecision(10) << snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting);

    return 0;
}