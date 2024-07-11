#include <iostream>
using namespace std;

float snowDay(int hours, float currentSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow *= (1 - proportionMeltingPerHour);
    }
    return currentSnow + totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> currentSnow >> rateOfSnowfall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
    return 0;
}