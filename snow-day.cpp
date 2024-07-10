#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; ++i) {
        if (rateOfSnowFall > 0.0) {
            totalSnow += rateOfSnowFall;
        }
        
        if (proportionMeltingPerHour > 0.0) {
            double snowToMelt = min(totalSnow, proportionMeltingPerHour);
            totalSnow -= snowToMelt;
        }
    }
    
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour) << endl;
    
    return 0;
}