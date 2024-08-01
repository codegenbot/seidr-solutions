#include <iostream>
using namespace std;

float snowDay(int hours, float currentSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float newSnow = 0;
    for (int i = 1; i <= hours; i++) {
        newSnow += rateOfSnowFall;
        currentSnow -= currentSnow * proportionOfSnowMeltingPerHour;
    }
    return currentSnow + newSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> currentSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(9) << snowDay(hours, currentSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}