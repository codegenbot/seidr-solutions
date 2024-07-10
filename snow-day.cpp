#include <iostream>
using namespace std;

float snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > 0)
            totalSnow += rateOfSnowFall;
        
        if (proportionOfSnowMeltingPerHour > 0 && snowOnGround > 0) 
            snowOnGround -= snowOnGround * proportionOfSnowMeltingPerHour / 100;    
    }
    
    return snowOnGround;
}

int main() {
    int hours;
    cin >> hours;
    float snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(9) << snowDay(hours, snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour);
    return 0;
}