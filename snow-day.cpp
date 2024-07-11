#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    // Add snow and then melt each hour until the given number of hours is reached.
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;  // Add new snow
        totalSnow -= totalSnow * proportionMeltingPerHour;  // Melt existing snow
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the amount of snow on the ground (initial): ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall per hour: ";
    cin >> rateOfSnowfall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);

    cout << fixed << setprecision(10) << result << endl;  // Print the result with 10 decimal places.

    return 0;
}