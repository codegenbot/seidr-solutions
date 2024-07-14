#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += max<float>(0.0, snowOnGround + rateOfSnowFall - proportionOfSnowMeltingPerHour);
        snowOnGround = max<float>(0.0, snowOnGround + rateOfSnowFall - proportionOfSnowMeltingPerHour) - proportionOfSnowMeltingPerHour;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    
    return 0;
}