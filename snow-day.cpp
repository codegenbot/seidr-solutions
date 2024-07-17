#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = 0.0;
    
    for (int i = 1; i <= hours; i++) {
        if (i == 1) {
            // If this is the first hour, just add the initial snow
            totalSnow += initialSnow;
        } else {
            // For subsequent hours, add the rate of snowfall and subtract the proportion melting per hour
            totalSnow += rateOfSnowfall - proportionMeltingPerHour;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;

    return 0;
}