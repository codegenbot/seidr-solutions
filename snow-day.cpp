#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for(int i = 0; i < hours; i++) {
        if(i == 0) {
            return initialSnow + initialSnow * rateOfSnowFall;
        } else {
            return (initialSnow + initialSnow * rateOfSnowFall - initialSnow * proportionOfSnowMeltingPerHour);
        }
    }
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> hours;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}