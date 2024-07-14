#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        float snowAccumulation = rateOfSnowFall - rateOfSnowFall * proportionOfSnowMeltingPerHour;
        totalSnow += snowAccumulation;
        initialSnow -= snowAccumulation * proportionOfSnowMeltingPerHour;
        initialSnow = min((float)(initialSnow + rateOfSnowFall), (float)totalSnow);
    }
    
    return initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}