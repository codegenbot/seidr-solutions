#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double snow = currentSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowFall - (snow * proportionOfSnowMeltingPerHour);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> currentSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    
    cout << fixed << setprecision(10);
    cout << snowDay(hours, currentSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;

    return 0;
}