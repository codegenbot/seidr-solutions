#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > 0.0) {
            totalSnow += rateOfSnowFall;
        }
        
        if (proportionOfSnowMeltingPerHour > 0.0) {
            float meltingAmount = initialSnow * proportionOfSnowMeltingPerHour;
            initialSnow -= meltingAmount;
            if (initialSnow < 0.0) {
                initialSnow = 0.0;
            }
        }
    }
    
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    
    return 0;
}