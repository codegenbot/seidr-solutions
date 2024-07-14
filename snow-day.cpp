#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float rateOfSnowfall, float proportionOfSnowMeltingPerHour) {
    double snow = currentSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowfall - proportionOfSnowMeltingPerHour;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour;
    cin >> currentSnow >> rateOfSnowfall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour);
    return 0;
}