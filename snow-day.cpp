#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionOfSnowMeltingPerHour);
    }
    
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours;
    cin >> initialSnow;
    cin >> rateOfSnowFall;
    cin >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;

    return 0;
}