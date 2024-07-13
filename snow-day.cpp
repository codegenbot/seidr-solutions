#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour > 0) {
            totalSnow += rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
        } else {
            totalSnow = max(totalSnow, rateOfSnowFall / (1 - proportionOfSnowMeltingPerHour));
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;

    return 0;
}