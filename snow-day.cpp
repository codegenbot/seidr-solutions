#include <iostream>
using namespace std;

float snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionMeltingPerHour);
    }
    
    return snowOnGround + totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float snowOnGround, rateOfSnowFall, proportionMeltingPerHour;
    cin >> snowOnGround >> rateOfSnowFall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, snowOnGround, rateOfSnowFall, proportionMeltingPerHour) << endl;
    
    return 0;
}